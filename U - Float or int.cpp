#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	cout<<fixed <<setprecision(3);
	float x;
	cin>>x;
	int y=floor(x);
	if (x==y)
	cout<<"int "<<y;
	else
	cout<<"float "<<y<<" "<<fixed <<setprecision(3)<<(x-y);  
   }
	
