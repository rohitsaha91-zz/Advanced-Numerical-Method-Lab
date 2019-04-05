#include <bits/stdc++.h>
using namespace std;

float f(float x){
	return x*(1-x);
}

int main(){
	
	float c=1.0,h=0.1,k=0.005,x0=0,t0=0;
	float u[11][101];
	memset(u,0,sizeof(u));
	float alp=(c*c*k)/(h*h);
	
	for(int i=1;i<11;i++){
		u[i][0]=f(x0+i*h);
	}
	for(int j=1;j<101;j++){
	for(int i=1;i<10;i++){
		u[i][j]=1;
	}}
	
	for(int j=0;j<100;j++){
		for(int k=0;k<50;k++){
		for(int i=1;i<10;i++){
			u[i][j+1]= (alp/(2*(1+alp))) * (u[i-1][j+1] + u[i+1][j+1]) + (u[i][j] + (alp/2) * (u[i-1][j] - 2*u[i][j] + u[i+1][j]))/(1+alp);
		}}
	}
	for(int i=0;i<11;i++){
		for(int j=0;j<101;j=j+50){
			cout<<u[i][j]<<"   ";
		}cout<<endl;
	}
	
	return 0;
}
