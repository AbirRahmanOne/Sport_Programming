#include<bits/stdc++.h>

using namespace std ;
#define PI 2*acos(0.0)

struct Point{

	double x ,y ;

};

double dist(Point p1 , Point p2 ){

	double res = sqrt( (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y) * (p1.y - p2.y ) ) ;

	return res ;

}


// Return true if (X,Y) is in Rectangle .
//where (x1, y1) is the lower left coordinate of rectangle
//(x2, y2) is the upper right coordinate of a rectangle .
bool isInRectangle(double x1, double y1, double x2 , double y2 , double X , double Y){
    	if( (x1<X && x2>X) && (y1<Y && y2>Y) ) return true ;
    	else
        	return false ;
}

// volume of cone
double calVolOfCone(double r, double h) {

	return (1/3.0)*(PI * (r*r) * h ) ;
}

int main(){


}


