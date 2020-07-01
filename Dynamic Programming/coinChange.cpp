 int coinChange(vector<int>& coins, int amount) {
        int n = coins.size() ;
        if( n==0 ) return 0 ;
        vector<int> dp(amount+1, INT_MAX) ;
        //memset(dp,INT_MAX,sizeof(dp)) ;
        dp[0] = 0 ;
        for(int i=1 ; i<=amount; i++){
            for(int j=0 ; j<n ; j++){
                if( coins[j] <= i ){
                    int sub_res = dp[i - coins[j]] ;
                    if( sub_res != INT_MAX ){
                        dp[i] = min(dp[i] , sub_res+1 ) ;
                    }
                }
            }
        }
        
        return ( dp[amount] == INT_MAX ) ?  -1 : dp[amount] ;
        
    }
