#include <iostream>
#include<cmath>
using namespace std;
double fi(double x,double y)
{   double ans=(x*x+y*y);
	return ans;
}
int main()
{
	
    double h,xsum=0.0,ysum=0.0,it,k;
    double x[17],y[17],f[17],g[17];
    h=2/16.0;
    k=1/16.0;
    
    x[0]=1.0;
    y[0]=1.0;
  
    for(int i=1;i<=16;i++)
    {
	x[i]=x[0]+i*h;
    y[i]=y[0]+i*k;
    } 
    
    for(int i=0;i<=16;i++)
     {
	   for(int j=0;j<=16;j++)
       {
		 g[j]=fi(x[i],y[j]);
        if(j>0&&j<16)
          ysum+=g[j];
       }
       f[i]=k*((g[0]+g[16]+2*ysum)/2);
       ysum=0.0;
     if(i>0 && i<16) 
	 xsum+=f[i];
    }  
    it=h*((f[0]+f[16]+2*xsum)/2);
    cout<<it;
    
}