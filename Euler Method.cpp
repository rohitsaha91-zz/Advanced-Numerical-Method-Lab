#include <iostream>
#include<cmath>

using namespace std;
double f(double x,double y)
{
	return (y-x)/(y+x);
}
int main()
{
	double x[101];
	double y[101];
	 x[0]=0.0;
	 y[0]=1.0;
	
	double h=.02;
	
	for(int i=1;i<6;i++)
	{
		x[i]=x[0]+(h*i);
		y[i]=y[i-1]+h*f(x[i-1],y[i-1]);
	}
	cout<<x[5]<<" "<<y[5];
}
