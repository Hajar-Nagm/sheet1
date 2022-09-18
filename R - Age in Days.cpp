#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int y=0,m=0;
	while(n>=365){
		y+=1;
		n-=365;
	}  	
	while(n>=30){
		m+=1;
		n-=30;
	}
	cout<<y<<" years"<<endl<<m<<" months"<<endl<<n<<" days";
   }
	
