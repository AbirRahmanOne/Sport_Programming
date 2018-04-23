#include<bits/stdc++.h>

using namespace std ;

int main()
{
    //freopen("input.txt","r",stdin) ;
    int a,b,t,tcase ;
    string next;
    scanf("%d",&t) ;
    tcase = 1;
    while(t--)
    {
        b=0 ;
        cin>>a>>next ;

        double res = 0.0;
        res = a*0.5 ;

       if (next.size() >= 4 && next[3] != ' ')
            res += (next[3] - '0') * 0.05;


        cout<<"Case " <<tcase++ <<": " <<res <<endl ;

    }
    return 0 ;
}
