#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double r,x;
    double pi=3.141592653;
    cin>>r;
    x=pi*r*r;
    cout<<fixed<<setprecision(9)<<x;
}
