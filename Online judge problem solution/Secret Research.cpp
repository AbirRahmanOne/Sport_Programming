#include<bits/stdc++.h>

using namespace std ;

int main()
{
   // freopen("input.txt","r",stdin) ;
    string str ;
    int t ;
    scanf("%d",&t) ;
    while(t--)
    {
        cin>>str;
        int len =str.size() ;

        if(str[len-1] == '5')
        {
            printf("-\n");
        }
        else if( str[0] =='9' && str[len-1] == '4')
        {
            printf("*\n");
        }
        else if(str[0] =='1' && len >= 3 )
        {
            printf("?\n");
        }
        else
        {
            printf("+\n");
        }
    }
    return 0 ;
}
