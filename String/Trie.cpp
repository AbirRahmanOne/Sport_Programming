#include <bits/stdc++.h>
using namespace std;

struct Trie {
    struct Node {
        int cnt;
        bool Endmark;
        Node* Next[ 26 ];
        Node ( ) {
            cnt = 0;
            Endmark = false;
            for( int i = 0; i < 26; i++ ) Next[i] = NULL;
        }
    } *Root;

    void Init( ) { Root = new Node( ); }

    void Delete( Node* cur ) {
        for( int i = 0; i < 26; i++ ) {
            if( cur -> Next[i] ) Delete( cur -> Next[i] );
        }
        delete( cur );
    }
    void InsertS( string str ) {
        Node* cur = Root;
        int len = str.size();
        for( int i = 0; i < len; i++ ) {
            int id = str[i]-'a';
            if( cur -> Next[id] == NULL ) cur -> Next[id] = new Node( );
            cur = cur -> Next[id];
        }
        cur -> cnt++;
        cur -> Endmark = true;
    }
    bool SearchWord( string str ) {
        Node* cur = Root;
        int len = str.size();
        for( int i = 0; i < len; i++ ) {
            int id = str[i]-'a';
            if( cur -> Next[id] == NULL ) return false;
            cur = cur -> Next[id];
        }
        return ( cur -> Endmark );
    }
    int OccurWord( string str ) {
        Node* cur = Root;
        int len = str.size();
        for( int i = 0; i < len; i++ ) {
            int id = str[i]-'a';
            if( cur -> Next[id] == NULL ) return 0;
            cur = cur -> Next[id];
        }
        return ( cur -> cnt );
    }
} trie;


int main( int argc , char const *argv[] ) {

        trie.Init( );

        return 0;
}


