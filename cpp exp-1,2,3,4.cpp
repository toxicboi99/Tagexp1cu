#include <iostream>
#include <math.h>
using namespace std;
int main() {
int r,area;
cout<<"Question:-Find the Area of Circle";
cout<<"\nEnter the radius:";
cin>>r;
area=(22/7)*r*r;
cout<<"The Area of Circle:"<<area;
int s,a,b,c,area1;
cout<<"\nQuestion:-Find the Area of Triangle";
cout<<"\n\nEnter the value of A:";
cin>>a;
cout<<"\nEnter the value of B:";
cin>>b;
cout<<"\nEnter the value of C:";
cin>>c;
s=(a+b+c)/2;
cout<<endl;
area1=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"\nThe area of Triangle :"<<area1;
int x,y,d;
cout<<"\nQuestion:-Find the Distance between starting and final point of x and y";
cout<<"\n\nEnter the value of X:";
cin>>x;
cout<<"\nEnter the value of Y:";
cin>>y;
d=sqrt((x*x)+(y*y));
cout<<"\nThe Distance between Starting and final point:"<<d;
int p,ra,t,si;
cout<<"\nQuestion:-Find the Simple Intrest";
cout<<"\n\nEnter the value of P:";
cin>>p;
cout<<"\nEnter the value of R:";
cin>>ra;
cout<<"\nEnter the value of T:";
cin>>t;
si=(p*r*t)/100;
cout<<"\nThe Simple intrest :"<<si;
    return 0;
}