#include<bits/stdc++.h>

using namespace std ;
const int N =  30010 ;

int vis[N] ;
int cost[N] ;

typedef pair<int,int> pii ;
vector<pii>graph[N] ;
int last , res ,mx ;

void dfs(int src)
{
    vis[src] = 1;
    for(int i=0; i<graph[src].size() ; i++ )
    {
        pii next = graph[src][i] ;

        int v = next.first ;
        int cx = next.second ;
        if(vis[v] == 0 )
        {
            cost[v]= cost[src]+cx ;
            if(cost[v]>mx)
            {
                last =v;
                mx =cost[v] ;
            }
            dfs(v) ;
        }
    }
}

void clr()
{
    for(int i=0; i<N ; i++)
    {
        graph[i].clear() ;
    }
}


int main()
{
    //freopen("input.txt","r",stdin) ;
    int n,u,v,w,t,tcase ;
    scanf("%d",&t);
    tcase =1;
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0 ; i<n-1 ; i++)
        {
            scanf("%d%d%d",&u,&v,&w);
            graph[u].push_back({v,w});
            graph[v].push_back({u,w});
        }
        memset(vis,0,sizeof(vis)) ;
        memset(cost,0,sizeof(cost)) ;

        mx = -1234 , last = 0 ;
        dfs(0);
        memset(vis,0,sizeof(vis)) ;
        memset(cost,0,sizeof(cost)) ;
        mx = -1245 ;
        dfs(last) ;
        printf("Case %d: %d\n",tcase++,mx) ;
        //cout<<mx <<" last node " <<last <<endl ;
        clr() ;

    }

    return 0 ;
}
