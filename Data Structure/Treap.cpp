/// https://github.com/flash7even 
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

/**
 Change the typename T for pair , long long etc as necessary.

 1. S.order_of_key( num ) : if present returns index(0 based)
                            else returns the position of first greater element.

 2. *S.find_by_order( pos ) : returns the element at position pos.
                              if no such position , returns 0

 3. *S.upper_bound( num ) : returns the value just greater than num.
                            if no such value , then returns 0

 4. *S.lower_bound( num ) : if num is present then returns num or returns
                            just the larger element than num.
                            if no such value returns 0

 5. S.find( num ) != S.end() : boolean true or false , just like Set

 6. S.erase( num ) : Erases number num , na thakle nai

 7. orderset<int> :: iterator it;
    we can use iterator such : it = S.begin() or it = S.end() , just like Set

 Add more ..

 */

template < typename T >
using orderset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;


// act’s like multi set 
template < typename T >
using orderset = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;

orderset <int> S;

int main( int argc, char const *argv[] ) {

    return 0;
}

Download as text
