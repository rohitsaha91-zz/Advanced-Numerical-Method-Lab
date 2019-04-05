#include <iostream>
#include<cmath>
using namespace std;
double f(double x,double y)
{   double ans=x*y+y*y;
	return ans;
}
int main()
{
	
	double y[5],fn[5],x[5],k1,k2,k3,k4,k;
	 x[0]=0.0;
	 y[0]=1.0;
	 fn[0]=f(x[0],y[0]);
	 int i=0;
	double h=.1;
  while(x[i]<.3)
  { 
  	k1=h*f(x[i],y[i]);
  	k2=h*f(x[i]+h/2,y[i]+k1/2);
  	k3=h*f(x[i]+h/2,y[i]+k2/2);
  	k4=h*f(x[i]+h,y[i]+k3);
  	k=(k1+2*k2+2*k3+k4)/6;
  	i++;
  	y[i]=y[i-1]+k;
  	
  	x[i]=x[i-1]+h;
  	fn[i]=f(x[i],y[i]);
  }
  y[4]=y[0]+(4*h)*((2*fn[1]-fn[2]+2*fn[3])/3);
  x[4]=.4;
  fn[4]=f(x[4],y[4]);
  for(int i=0;i<7;i++)
  {
  
  y[4]=y[2]+h*((fn[2]+4*fn[3]+fn[4])/3);
  fn[4]=f(x[4],y[4]);
  }

	cout<<x[4]<<" "<<y[4];
}