#include <iostream>
#include<cmath>

using namespace std;
double f(double x,double y)
{
	return x+y;
}
int main()
{
	double x[4];
	double y[4];
	 x[0]=0.0;
	 y[0]=1.0;
	 double oldf,nwf,ms,y2;
	double h=.1;
	for(int i=1;i<4;i++)
	{
		x[i]=x[0]+(h*i);
		oldf=f(x[i-1],y[i-1]);
		y2=y[i-1]+(h*oldf);
		for(int j=0;j<2;j++)
		{
		nwf=f(x[i],y2);
		ms=.5*(oldf+nwf);
		y[i]=y[i-1]+(h*ms);
		y2=y[i];
     	}
	}
	cout<<x[3]<<" "<<y[3];
}