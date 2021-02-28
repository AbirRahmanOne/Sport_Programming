
struct queue {
        static const int MAXN = 10005;
        static const int INV = -12345;
        int l , r , q[ MAXN ];
        bool emp;
        queue( ) {
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
        int front( ) {
                if( empty( ) ) return INV;
                else return q[l];
        }
        void pop( ) {
                if( empty( ) ) return;
                l++;
                if( l == r ) emp = true;
        }
} Q;
