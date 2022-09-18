#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n[3],s[3];
	for(int i=0;i<3;i++){
		cin>>n[i];
		s[i]=n[i];
	}
	sort(s, s+3);
	for(int i=0;i<3;i++){
		cout<<s[i]<<endl;
	}
	cout<<endl;
	for(int i=0;i<3;i++){
		cout<<n[i]<<endl;
	}  
   }
	
