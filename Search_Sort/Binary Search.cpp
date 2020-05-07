int lower_bound(int A[], int N, int X){
    int L = 0, R = N-1;
    while(L<=R){
        int M = (L+R)/2;
        if(A[M]>=X){
            R = M-1;
        }else{
            L = M+1;
        }
    }
    return L;
}

int upper_bound(int A[], int N, int X){
    int L = 0, R = N-1;
    while(L<=R){
        int M = (L+R)/2;
        if(A[M]>X){
            R = M-1;
        }else{
            L = M+1;
        }
    }
    return L;
}


low = lower_bound(ara,ara+sz, n) - ara  ;
