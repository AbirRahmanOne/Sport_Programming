#include<bits/stdc++.h>

using namespace std ;
const int inf = 1e9 ;

int minRes(int a,int b)
{
    int res=0 ;
    if(a<b)
    {
        res = 40 - (b-a) ;
    }
    else
    {
        res = a-b ;
    }

    return res* 9 ;
}

int main()
{
    int pos,a,b,c,curPos ;
    while(scanf("%d%d%d%d",&pos,&a,&b,&c) )
    {
        if(pos ==0 && a==0 && c==0 && b==0)
        {
            break ;
        }

        // calculation
        int res = 1080 ;


        res += minRes(pos,a) ;
        res += minRes(b,a) ;
        res += minRes(b,c) ;

        printf("%d\n",res) ;
    }

    return 0 ;
}
