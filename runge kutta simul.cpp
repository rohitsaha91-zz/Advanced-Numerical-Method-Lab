#include <bits/stdc++.h>

using namespace std;

inline double f(double x, double y, double z)    
 { return (z);
 }
inline double phi(double x, double y, double z)     
{ return ((x*z*z)-(y*y));
}

int main(){
    double y0, x0, z0, y1, z1, x_find, h,l1,k1;
    cout << "Enter values of x0, y0, z0, x_find & h : ";
    cin >> x0 >> y0 >> z0 >> x_find >> h;
    double k[5], l[5];
    while(x0<.2)
    {
	
    k[1] = h * f(x0, y0, z0);
    l[1] = h * phi(x0, y0, z0);
    k[2] = h * f(x0 + h/2, y0 + k[1]/2, z0 + l[1]/2);
    l[2] = h * phi(x0 + h/2, y0 + k[1]/2, z0 + l[1]/2);
    k[3] = h * f(x0 + h/2, y0 + k[2]/2, z0 + l[2]/2);
    l[3] = h * phi(x0 + h/2, y0 + k[2]/2, z0 + l[2]/2);
    k[4] = h * f(x0 + h, y0 + k[3], z0 + l[3]);
    l[4] = h * phi(x0 + h, y0 + k[3], z0 + l[3]);
     k1=(k[1] + 2*k[2] + 2*k[3] + k[4])/6;
     l1=(l[1] + 2*l[2] + 2*l[3] + l[4])/6;
     
    y1 = y0 + k1;
    z1 = z0 + l1;
    x0=x0+h;
   }



    cout << "Answer : y1 = " << y1 << "\n" << "z1 = " << z1 << endl;

    return 0; 
}
