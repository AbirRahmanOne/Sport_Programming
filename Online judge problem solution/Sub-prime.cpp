#include<bits/stdc++.h>

using namespace std ;

int main()
{
   // freopen("input.txt","r",stdin) ;
    int arr[102] ;
    int b,n ;
    while(scanf("%d%d",&b,&n))
    {
        if(b==0 && n==0 )
        {
            break ;
        }

        for(int i=1 ; i<=b ; i++)
        {
            scanf("%d",&arr[i]) ;
        }

        int x,y,m ;
        for(int i=0 ; i<n ; i++)
        {

            scanf("%d%d%d",&x,&y,&m) ;

            arr[y] += m ;
            arr[x] -= m ;
        }

        bool fg = false ;
        for(int i=1 ; i<=b ; i++)
        {
            if(arr[i]<0)
            {
                fg = true ;
                break ;
            }
        }

        if(fg == true )
        {
            printf("N\n");
        }
        else
        {
            printf("S\n") ;
        }
    }

    return 0 ;
}
