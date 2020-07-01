//Sample Array
int val[] = { 60, 100, 120 };
int wt[] = { 10, 20, 30 };
int dp[1002][1002] ;
int knapSack(int W, int n){
    //  Here W is total weight
    for(int i=0 ; i<=n ; i++){
        for(int w =0 ; w<=W ; w++){
            if( w ==0 || i==0 ) dp[i][w] = 0 ;
            else if( w >= wt[i-1] ){
                dp[i][w] = max( dp[i-1][w], val[i-1]+ dp[i-1][w-wt[i-1]] ) ;
            }else{
                dp[i][w] = dp[i-1][w] ;
            }
        }
    }
    return dp[n][W] ;
}

vector<int> itemPathPrinting(int n, int W){

    int ret = dp[n][W] ;
    int w = W ;
    vector<int> path ;
    for(int i=n ; i>0 && ret>0 ; i--){
        if( ret == dp[i-1][w]) continue ;
        else{
            path.push_back( wt[i-1] ) ;
            ret -= val[i-1] ;
            w -= wt[i-1] ;
        }
    }

    return path ;
}
