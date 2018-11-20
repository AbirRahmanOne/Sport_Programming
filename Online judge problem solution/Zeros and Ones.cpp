#include<bits/stdc++.h>

using namespace std ;

int main()
{
    //freopen("output.txt","w",stdout) ;
    string str ;
    int a,b,n ,tcase;
    tcase =1 ;
    while(cin>>str)
    {
        printf("Case %d:\n",tcase++) ;
        cin>>n ;
        for(int i=0 ; i<n ; i++)
        {
            cin>>a>>b ;
            int x = min(a,b);
            int y= max(a,b) ;

            if(a==b)
            {
                printf("Yes\n");
            }
            else
            {
                int flag = true ;
                while(x<y)
                {
                    if(str[x]!= str[y])
                    {
                        flag = false ;
                        break ;
                    }
                    if(!flag)
                    {
                        break ;
                    }

                    y--;
                }

                if(flag)
                {
                    printf("Yes\n");
                }
                else
                {
                    printf("No\n");
                }
            }
        }
    }

    return 0 ;
}
