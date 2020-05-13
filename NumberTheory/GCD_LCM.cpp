//Euclidean algorithms ( GCD)
//GCD of two numbers is the largest number that divides both of them

//code
int gcd(int a , int b){
    if(b==0 ){
        return a ;
    }
    return gcd(b,a%b) ;
}

// lcm(a, b), is the smallest positive integer
// that is divisible by both a and b

int  lcm(int a, int b){
    return (a/gcd(a,b) * b ) ;
}




