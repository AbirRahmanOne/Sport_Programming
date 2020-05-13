#include<bits/stdc++.h>

using namespace std ;

int root(int ara[] , int i){

	while(ara[i] != i){
    	i = ara[i] ;
	}
	return i ;
}

int Union(int ara[] , int A, int B ){

	int root_A = root(ara,A) ;
	int root_b = root(ara,B) ;

	ara[root_A] == root_B ;
}

bool Find(int A ,int B){

	if(root(A) == root(B) ) return true ;

	return false ;
}
