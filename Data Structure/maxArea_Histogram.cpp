// The "getMaxArea" function to find the maximum rectangular  
// area under given histogram with n bars. 
 
 int getMaxArea(int n){
        int i=0 , maxArea = -1234 ;
        stack<int> st ;
        while(i<n){
            
            if(st.empty() || (hist[i] >= hist[st.top()]) ) st.push(i++) ;
            else{
                int tp = st.top() ;
                st.pop() ;
                int area = (hist[tp] * (st.empty() ? i : (i - st.top() - 1) ) ) ;
                maxArea = max(maxArea, area) ;
            }
        }
        
        while(!st.empty()){
            int tp = st.top() ;
            st.pop() ;
            int area = ( hist[tp] * (st.empty() ? i : (i - st.top() -1 ))) ;
            maxArea = max(maxArea, area) ;
        }
        
        return maxArea ;
    }
