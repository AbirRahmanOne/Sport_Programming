#include<bits/stdc++.h>

using namespace std ;

int maxRooks(int row,int col)
{
    return row ;
}

int maxKnight(int row,int col)
{
    if( ( row%2==0) &&( col%2==0))
    {
        return (row*col)/2 ;
    }
    else
    {
        return ((row*col)+1)/2 ;
    }
}

int maxQueen(int row,int col)
{
    return min(row,col) ;
}

int maxKing(int row,int col)
{
    int r = row/2 ;
    int c = col/2 ;
    r = r*2 ;
    c = c*2 ;
    int res = (r*c)/4 ;
    //cout<<res <<endl;


    int extra =0 ;
    if(row%2==1 )
    {
        extra += col ;
    }
    if(col%2==1)
    {
        extra +=row ;
    }

    if(extra%2==1)
    {
        extra++ ;
    }
    //cout<<extra <<endl ;

    res += (extra/2) ;
   // cout<<res <<endl ;
    return res ;
}



int main()
{
    //freopen("input.txt","r",stdin) ;
    int t, row,col ;
    string ch ;
    scanf("%d",&t);
    while(t--)
    {
        cin>>ch>>row>>col ;
        if(ch == "r")
        {
            int ans = maxRooks(row,col) ;
            printf("%d\n",ans);
        }
        else if( ch== "k")
        {
            int ans = maxKnight(row,col) ;
            printf("%d\n",ans);
        }
        else if( ch == "Q")
        {
            int ans = maxQueen(row,col) ;
            printf("%d\n",ans);
        }
        else if( ch == "K" )
        {
            int ans = maxKing(row,col) ;
            printf("%d\n",ans);
        }
    }

    return 0 ;
}
