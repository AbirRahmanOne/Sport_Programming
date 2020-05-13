typedef pair<int,int> pii ;
typedef pair<int,pii> edge ;
vector<edge> graph[N] ;
int vis[N] ;
int totalCost ,nodeCnt;

void prims(int src ){
    vis[src] = 1 ;
    priority_queue<edge , vector<edge>,greater<edge>  > Q ;

    for(int i=0 ; i< graph[src].size() ; i++){
   	 edge cur =  graph[src][i] ;
   	 Q.push(cur) ;
    }

    while( !Q.empty()){
   	 edge top = Q.top() ;
   	 Q.pop() ;

   	 int cost =top.first ;
   	 pii next = top.second ;

   	 int src = next.first ;
   	 int target = next.second ;

   	 if(vis[target] ==1 ){
   		 continue ;
   	 }

   	 else{
   	  vis[target] =1 ;
   	  totalCost+= cost ;
   	  nodeCnt++;
   	  for(int i=0 ; i<graph[target].size() ; i++){
   		 edge curT = graph[target][i] ;
   		 Q.push(curT) ;
   	 }

    }
  }
}


