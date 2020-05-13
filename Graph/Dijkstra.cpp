void Dijkstra(){
    //memset(cost,inf ,sizeof(cost)) ;

    priority_queue<pii, vector<pii>, greater<pii> > Q;

    cost[1] = 0 ;
    Q.push({cost[1],1}) ;

    while(!Q.empty() ){
        pii top = Q.top() ;
        Q.pop() ;

        LL c = top.first ;
        LL u = top.second ;

        for(int i = 0 ; i<graph[u].size() ; i++){
            pii next = graph[u][i] ;

            LL cx = next.second ;
            LL v = next.first ;

            if(cost[v] > cost[u] + cx ){
                cost[v] = cost[u]+cx ;
                path[v] = u ;
                Q.push({cost[v],v}) ;

            }
        }
    }

}
