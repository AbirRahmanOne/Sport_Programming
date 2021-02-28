struct stack {
        static const int MAXN = 1005;
        static const int INV = -9999989;
        int l , r , q[ MAXN ];
        bool emp;
        stack( ) {
                l = 1 , r = 1 , emp = true;
                fill( q , q + 10000 , -1 );
        }
        int size( ) {
                if( !emp ) return ( r - l );
                else return 0;
        }
        bool empty( ) {
                return size( ) == 0;
        }
        void push ( int val ) {
                q[r++] = val;
                emp = false;
        }
        int Top( ) {
                if( empty( ) ) return INV;
                else return q[r];
        }
        void pop( ) {
                if( empty( ) ) return;
                r--;
                if( l == r ) emp = true;
        }
} Stack;
