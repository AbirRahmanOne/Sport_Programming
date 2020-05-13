vector<int> graph[N] ;
int vis[N] ;
stack<int > S ;

void topSort( int src){
    vis[src] = 1;
    for(int i=0 ; i<graph[src].size() ; i++){
        int next = graph[src][i] ;
        if(!vis[next]){
            topSort(next) ;
        }
    }
    S.push(src) ;
}

void dfs(int src ){
    vis[src] = 1 ;
    for(int i=0 ; i<graph[src].size() ; i++){
        int next = graph[src][i] ;
        if(!vis[next]){
            dfs(next) ;
        }
    }
}
