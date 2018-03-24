#include<bits/stdc++.h>

using namespace std ;
const int N = 210 ;

int vis[N] ;
int color[N] ;
vector<int> graph[N] ;
bool IsBicolor(int src)
{
    queue<int > Q ;
    Q.push(src) ;
    color[src] = 1 ;

    while( !Q.empty())
    {
        int top = Q.front() ;
        Q.pop() ;
        for(int i=0 ; i<graph[top].size() ; i++)
        {
            int next = graph[top][i] ;
            if(color[next] ==0 )
            {
                if(color[top] == 1)
                {
                    color[next] = 2;
                }
                else
                {
                    color[next] =1 ;
                }
                Q.push(next) ;
            }
            else
            {
                if(color[top] == color[next])
                {
                    return false ;
                }
            }
        }

    }
    return true ;
}

void clearGraph()
{
    for(int i =0  ;i<N ; i++)
    {
        graph[i].clear() ;
    }
}



int main()
{
    //freopen("input.txt","r",stdin) ;
    int n ,edge, u,v,src ;
    while(scanf("%d",&n) && n!=0 )
    {
        cin>>edge ;
        src = 12345 ;
        for(int i=0 ; i<edge ; i++)
        {
            cin>>u>>v ;
            graph[u].push_back(v);
            graph[v].push_back(u) ;
            src = min(u,src) ;
        }

        memset(color,0,sizeof(color)) ;
        if(IsBicolor(src) == true)
        {
            printf("BICOLORABLE.\n");
        }
        else
        {
            printf("NOT BICOLORABLE.\n");
        }
        clearGraph() ;
    }

    return 0 ;
}
