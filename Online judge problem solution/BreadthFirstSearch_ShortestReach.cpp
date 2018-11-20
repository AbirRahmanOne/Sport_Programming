#include<bits/stdc++.h>

using namespace std ;
const int N = 10010 ;

vector<int> graph[N] ;
int vis[N] ;
int dis[N] ;

void bfs(int src)
{
    memset(vis,0,sizeof(vis)) ;
    memset(dis,-1,sizeof(dis)) ;
    vis[src] = 1 ;
    dis[src] = 0 ;
    queue<int> Q ;
    Q.push(src) ;

    while( !Q.empty())
    {
        int u = Q.front() ;
        Q.pop() ;
        for(int i=0 ; i<graph[u].size() ; i++)
        {
            int v = graph[u][i] ;
            if(vis[v] == 0 )
            {
                vis[v] = 1 ;
                dis[v] = dis[u] + 6 ;
                Q.push(v) ;
            }
        }
    }
}

void printSeq(int src,int n )
{
    for(int i=1 ; i<=n ; i++ )
    {
        if(i!=src)
        {
         if(i==n)
        {
            cout<<dis[i] <<endl ;
        }
        else
        {
         cout<<dis[i] <<" " ;
        }

        }
    }
}

void clr()
{
    for(int i=0 ; i<N ; i++)
    {
        graph[i].clear() ;
    }
}
int main()
{
    int t ,n,m,u,v,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>m ;
        for(int i=0;i<m ; i++)
        {
            cin>>u>>v ;
            graph[u].push_back(v) ;
            graph[v].push_back(u) ;
        }
        cin>>s ;
        bfs(s);
        printSeq(s,n) ;
        clr() ;
    }
    return 0;
}
