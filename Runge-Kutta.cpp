#include <iostream>
#include<cmath>
using namespace std;
double f(double x,double y)
{   double ans=(y*y-x*x)/(y*y+x*x);
	return ans;
}
int main()
{
	double x;
	double y,k1,k2,k3,k4,k;
	 x=0.0;
	 y=1.0;
	double h=.2;
  while(x<.4)
  {
  	k1=h*f(x,y);
  	k2=h*f(x+h/2,y+k1/2);
  	k3=h*f(x+h/2,y+k2/2);
  	k4=h*f(x+h,y+k3);
  	k=(k1+2*k2+2*k3+k4)/6;
  	y=y+k;
  	x=x+h;
  	
  }
	cout<<x<<" "<<y;
}
