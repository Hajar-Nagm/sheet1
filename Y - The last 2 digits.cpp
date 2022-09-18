#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	long long a,b,c,d,x,y;
	cin>>a>>b>>c>>d;
	x=(a%100)*(b%100)*(c%100)*(d%100);
	y=x%100;
	if(y < 10)
    cout << 0 << y ;
	else
    cout << y ;    
	
	
}
	
