#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=2,b=10;
	int s=a+b;
	int k;
	cin>>k;
	cout<<a<<" "<<b<<" ";
	for(int i=1;i<k;i++){
		a=a*3;
		b=b*2;
		s=s+a+b;
		cout<<a<<" "<<b<<" ";
	}
	
	cout<<"\n"<<s;
	
}

