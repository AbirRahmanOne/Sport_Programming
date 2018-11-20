#include<bits/stdc++.h>

using namespace std ;

int maxKnight(int m ,int n)
{
    int knight = 0;
     if ( m == 1 || n == 1)
        {
            knight = m * n ;
        }


        else if( m == 2 || n == 2 )
          {
            if( (m*n) % 4 == 0 )
            {
                if ( m == 2)
                {
                    int r = n/m ;
                    if( r % 2 == 0 )
                    {
                        knight = r * 2 ;
                    }
                    else
                    {
                        knight = (r+1) * 2 ;
                    }
                }
                else
                {
                    int r = m/n ;
                    if( r % 2 == 0 )
                    {
                        knight = r * 2 ;
                    }
                    else
                    {
                        knight = (r+1) * 2 ;
                    }
                }
            }
            else
            {
                if ( m == 2)
                {
                 knight = (( n / m  ) +1 ) * 2 ;
                }
                else
                {
                    knight = ( ( m / n  ) +1 ) * 2 ;
                }
            }
          }

        else
        {
            knight = ( ( m * n ) + 1 ) / 2 ;
        }

        return knight ;
}


int main()
{
    int m,n ;
    while(scanf("%d%d",&m,&n) && (m!=0))
    {
        int ans =maxKnight(m,n) ;
        printf("%d knights may be placed on a %d row %d column board.\n",ans,m,n);
    }
    return 0 ;
}
