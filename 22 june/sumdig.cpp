#include<bits/stdc++.h>
using namespace std;
int sumdig(int n){
	if(n==0)
	return 0;
	else
	return n%10+sumdig(n/10);
	
}
int main(){
	int n,r;
	cout<<"enter no";
	cin>>n;
	r=sumdig(n);
	cout<<r;
}
