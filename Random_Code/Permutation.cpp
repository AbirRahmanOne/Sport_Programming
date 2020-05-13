#include<bits/stdc++.h>

using namespace std ;
int arr[4] = {11,2,31,14} ;
int s[4]  ;
int limit = 3 ;

void print_subset(int n){
   int i ;
   for(i=0; i<=n-1 ; i++){
       cout << s[i] << " " ;
   }
   cout << endl ;
}

void subset(int Size , int index ){
   if( index >limit){
       print_subset(Size) ;
       return ;
   }
   s[Size] = arr[index] ;
   subset(Size+1 , index+1);
   subset(Size , index+1) ;
}

int main()
{
   subset(0,0) ;
}
