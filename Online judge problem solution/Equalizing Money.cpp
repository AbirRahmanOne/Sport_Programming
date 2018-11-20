#include<bits/stdc++.h>

using namespace std ;
const int N = 1002 ;

int vis[N];
int money[N] ;
vector<int> graph[N] ;
int NodeSum ,cntNode ;

void dfs(int src)
{
    vis[src] = 1 ;
    for(int i=0 ; i<graph[src].size() ; i++)
    {
        int next = graph[src][i] ;
        if(vis[next] == 0)
        {
            NodeSum+=money[next] ;
            cntNode++ ;
            dfs(next) ;
        }
    }
}

void clr()
{
    for(int i=0 ; i<N; i++)
    {
        graph[i].clear() ;
    }
}

int main()
{
    freopen("input.txt","r",stdin) ;
    int t,tcase,n,m,totalSum,avg,u,v ;
    scanf("%d",&t);
    tcase=1 ;
    while(t--)
    {
        scanf("%d%d",&n,&m);
        memset(money,0,sizeof(money)) ;
        totalSum = 0 ,avg =0 ;
        for(int i=1 ; i<=n ; i++)
        {
            scanf("%d",&money[i]);
            totalSum+=money[i] ;
        }

        for(int i=0; i<m ; i++)
        {
            scanf("%d%d",&u,&v) ;
            graph[u].push_back(v);
            graph[v].push_back(u) ;
        }

       // cout<<totalSum <<" ... " <<n <<endl ;
        if(totalSum%n!=0)
        {
            printf("Case %d: No\n",tcase++) ;
        }
        else
        {
            bool flag = true ;
            avg = totalSum/n ;
            memset(vis,0,sizeof(vis));
            for(int i=1; i<=n ; i++)
            {
                if(vis[i] == 0 )
                {
                    cntNode =0 , NodeSum=0 ;
                    dfs(i) ;
                    //cntNode++ ;
                    NodeSum+=money[i] ;
                    cntNode ++ ;
                    //cout<<NodeSum <<" .. " <<cntNode <<endl ;
                    int curAvg = NodeSum/cntNode ;

                    if( (NodeSum%cntNode!=0 ) || (curAvg != avg))
                    {
                        //cout<<avg <<" curAvg " <<curAvg <<" " <<NodeSum  <<endl;
                        printf("Case %d: No\n",tcase++) ;
                        flag = false ;
                        break ;
                    }
                }
                if(flag == false)
                {
                    break ;
                }
            }

            if(flag == true )
            {
                printf("Case %d: Yes\n",tcase++) ;
            }

        }
        clr();
    }


    return 0 ;
}
