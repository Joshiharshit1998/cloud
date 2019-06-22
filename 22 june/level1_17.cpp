#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,n,a=2,b=5,c=8,d,s;
	int r=b-a;
	s=a+b+c;
	cin>>n;
	cout<<"n terms are:";
	cout<<a<<" "<<b<<" "<<c<<" ";
	for(i=4;i<=n;i++){
		d=c+r;
		c=d;
		cout<<d<<" ";
		s=s+d;
	}
	cout<<"\n"<<"sum is:"<<s;
}
