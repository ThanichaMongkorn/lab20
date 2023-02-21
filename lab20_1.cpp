#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	double l =min((R2.x+R2.w),(R1.x+R1.w))-max(R1.x,R2.x);
	double d =min(R1.y,R2.y)-max((R1.y-R1.h),(R2.y-R2.h));
	if(l<0 or d<0){
	    return 0;
	}

	return l*d;
	

}
