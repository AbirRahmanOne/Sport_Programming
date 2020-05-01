#include<bits/stdc++.h>

using namespace std ;

struct figure{
    char  fig ;
    double x1 ,y1 , x2,y2, x3,y3;

}ara[102];


double dis(double x1,double y1 , double x2, double y2){

    return  sqrt( (( x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1)) ) ;

}


bool isInCircle(double  x, double y , double a, double b ,  double rad  ){

    double dist= dis(x,y,a,b) ;

    if(dist < rad ){
        return true ;
    }

    else{
        return false ;
    }

}


double calArea(double x1 , double y1 , double x2 , double y2, double x3 , double y3 ){


   double res = 0.5 * fabs(( x1 * y2 +  x2* y3 + x3* y1 ) - ( x2*y1 + x3*y2 + x1*y3 ) ) ;

    return res ;

}



int main(){
    //freopen("input.txt","r",stdin) ;
    char ch ;
    int cnt =0 ;
    int i =0 ;
    while(cin>>ch && ch!= '*'){

            if(ch == 'c'){
                ara[i].fig =ch ;
                cin>>ara[i].x1>>ara[i].y1 >>ara[i].x2 ;
                 ara[i].y2 =0 ,  ara[i].x3 =0 , ara[i].y3 = 0;


            }

            if(ch == 'r'){
                ara[i].fig =ch ;
                cin>>ara[i].x1>>ara[i].y1 >>ara[i].x2>>ara[i].y2 ;
                ara[i].x3 =0 , ara[i].y3 = 0;
            }

            if(ch == 't'){

                ara[i].fig =ch ;
                cin>>ara[i].x1>>ara[i].y1 >>ara[i].x2>>ara[i].y2>>ara[i].x3>>ara[i].y3 ;

            }
            i++ ;
            cnt++ ;
    }



    double x,y ;
    int st= 0 ;
    while(cin>>x>>y ){

        if( x==9999.9 && y== 9999.9){
            break ;
        }
        ++st;
        bool flag= false ;

        for(int i=0 ; i<cnt ; i++){
            double a = ara[i].x1 ;
            double b = ara[i].y1 ;
            double c = ara[i].x2 ;
            double d = ara[i].y2 ;
            double e = ara[i].x3 ;
            double f = ara[i].y3 ;


            if(ara[i].fig  == 'c' ){

                if(isInCircle(a,b,x,y,c) == true ){
                    printf("Point %d is contained in figure %d\n",st,i+1) ;
                    flag = true ;


                }
            }
            else if(ara[i].fig == 'r') {

                if( ( x>a && x<c ) && (y>d && y<b) ){
                printf("Point %d is contained in figure %d\n",st,i+1) ;
                flag = true ;



            }
        }
            else{
                // triangle part

                double a1 = calArea(x,y,c,d,e,f) ;
                double a2 = calArea(a,b,x,y,e,f) ;
                double a3 = calArea(a,b,c,d,x,y) ;

                double Area = calArea(a,b,c,d,e,f) ;

                double totalArea = a1+a2+a3 ;

                double diff = fabs(Area - totalArea ) ;

                if( diff < (1e-6) ){
                         printf("Point %d is contained in figure %d\n",st,i+1) ;
                            flag = true;

                }



            }


        }

        if(flag == false ){
            printf("Point %d is not contained in any figure\n",st) ;

        }

    }


}

