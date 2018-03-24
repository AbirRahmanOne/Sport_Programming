#include<bits/stdc++.h>

using namespace std ;
const int N = 1010 ;

int vis[N] ;
int marks[N] ;
vector<int> graph[N] ;
void dfs(int src )
{
    int cnt=0 ;
    vis[src] = 1 ;
    marks[src]++ ;
    for(int i=0 ; i<graph[src].size() ; i++)
    {
        int next = graph[src][i] ;
        if(vis[next] == 0)
        {
            dfs(next) ;
        }
    }
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

    int t,tcase , k , n , m,res,u,v,p ;
    cin>>t ;
    tcase=1 ;
    while(t--)
    {
        cin>>k>>n>>m ;
        vector<int>person ;
        for(int i=0 ; i<k ; i++)
        {
            cin>>p ;
            person.push_back(p) ;
            graph[p].push_back(p) ;
        }
        for(int i=0 ; i<m ; i++)
        {
            cin>>u>>v;
            graph[u].push_back(v) ;
        }

        /****** main process *********/
        memset(marks,0,sizeof(marks)) ;
        for(int i=0 ; i<person.size() ; i++)
        {
            int x = person[i] ;
            memset(vis,0,sizeof(vis)) ;
            dfs(x) ;


        }

        int cnt =0 ;
        for(int i= 1 ;i<=n ; i++)
        {
            //cout<<marks[i] <<endl ;
            if(marks[i] == k )
            {
                cnt++ ;
            }
        }
        printf("Case %d: %d\n",tcase++,cnt);
        clearGraph() ;

    }

    return 0 ;
}
