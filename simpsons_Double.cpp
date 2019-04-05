#include <iostream>
#include<cmath>
using namespace std;
double fi(double x,double y)
{   double ans=(x*x+y*y);
	return ans;
}
int main()
{
	
    double h,xesum=0.0,yesum=0.0,sr,k,xosum=0.0,yosum=0.0;
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
		if(j%2==0)
          yesum+=g[j];
        else
          yosum+=g[j];
       }
       f[i]=k*((g[0]+g[16]+4*yosum+2*yesum)/3);
       yesum=0.0;
       yosum=0.0;
     if(i>0&&i<16)
		if(i%2==0)
          xesum+=g[i];
        else
          xosum+=g[i];
    }  
    sr=h*((f[0]+f[16]+2*xesum+4*xosum)/3);
    cout<<sr;
    
}