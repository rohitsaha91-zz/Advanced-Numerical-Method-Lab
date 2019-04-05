#include <iostream>
#include<cmath>
using namespace std;
double f(double x,double y)
{   double ans=(y*y-x*x)/(y*y+x*x);
	return ans;
}
int main()
{
	
    double h=6.0/6.0,odd_sum=0.0,even_sum=0.0,sum=0.0,it,si;
    double x[7],f[7];
    x[0]=0.0;
  
    for(int i=1;i<=6;i++)
    x[i]=x[0]+i*h;
    for(int i=0;i<=6;i++)
    f[i]=1/(1+(x[i]*x[i]));
    for(int i=1;i<6;i+=2)
     odd_sum+=f[i];
    for(int i=2;i<=4;i+=2)
     even_sum+=f[i];
    for(int i=1;i<6;i++)
     sum+=f[i];
    it=(h/2.0)*(f[0]+f[100]+(2*sum));
    si=(h/3.0)*(f[0]+f[100]+(2*even_sum)+(4*odd_sum));
	
	cout<<it<<" "<<si;
}