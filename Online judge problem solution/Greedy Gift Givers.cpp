#include<bits/stdc++.h>

using namespace std ;

map<string,int> people ;
map<string,int> :: iterator it ;

int main()
{

   //freopen("input.txt","r",stdin) ;
    int n,t ;

    t=1 ;
    while(scanf("%d",&n) != EOF )
    {
        if(t>1)
        {
            cout<<endl ;
        }
        string name ;
        vector<string> seq ;
        for(int i=0 ; i<n ; i++)
        {
            cin>>name ;
            people[name] = 0 ;
            seq.push_back(name) ;
           // cout<<arr[i].name <<" " <<arr[i].money <<endl ;
        }

        for(int i=0 ; i<n ; i++)
        {
            string next ,cur ;
            int money ,p,givenMoney,cpMoney ;
            givenMoney = 0  ;
            cin>>cur>>money>>p ;

            people[cur] -= money ;

            if(p != 0)

            {
                givenMoney = money/p ;
                money = (money%p) ;
            }
            people[cur] += money ;

            for(int k=0 ; k<p ; k++)
            {
                cin>>next ;
                people[next] += givenMoney ;
            }
        }

        for(int i=0; i<seq.size() ; i++)
        {
            cout<<seq[i] <<" " <<people[seq[i]] <<endl ;
        }
        t++ ;
        people.clear() ;
    }
    return 0 ;
}
