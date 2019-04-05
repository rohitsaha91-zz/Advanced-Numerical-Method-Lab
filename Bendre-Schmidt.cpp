#include <iostream>
using namespace std;
int main() {
	double c[10][9];
	double t=.125;
	double h=1.0;
	for(int i=0;i<10;i++)
	{
		c[i][0]=0.0;
		c[i][8]=0.0;
	}
	for(int i=1;i<8;i++)
	{   double x= i*h;
		c[0][i]=(4*x)-(0.5*x*x);
	}
	for(int i=1;i<10;i++)
	{
		for(int j=1;j<8;j++)
		{
		 c[i][j]=.5*(c[i-1][j-1]+c[i-1][j+1]);
		}
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<9;j++)
		{
		   cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
}