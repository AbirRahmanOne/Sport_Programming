const int N = 10010 ;

vector<int> graph[N] ;
int vis[N] ;
int dis[N] ;

void bfs(int src){
	memset(vis,0,sizeof(vis)) ;
	memset(dis,-1,sizeof(dis)) ;
	vis[src] = 1 ;
	dis[src] = 0 ;
	queue<int> Q ;
	Q.push(src) ;

	while( !Q.empty()){
    	int u = Q.front() ;
    	Q.pop() ;
    	for(int i=0 ; i<graph[u].size() ; i++){
        	int v = graph[u][i] ;
        	if(vis[v] == 0 ){
            	vis[v] = 1 ;
            	dis[v] = dis[u] + 6 ;
            	Q.push(v) ;
        	}
    	}
	}
}
