#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,x=1,s=0;
	int n;
	cin>>n;
	for(i=1;i<=n;i++){
		x=x*2;
		if(i==n)
			cout<<"nth term is:"<<x;
		s=s+x;
	}
	
	cout<<"\n"<<"sum is:"<<s;
}
