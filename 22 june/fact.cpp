#include<bits/stdc++.h>
using namespace std;



int fact(int n){
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}
int main(){
	int n,f;
	cout<<"enter number";
	cin>>n;
	f=fact(n);
	cout<<f;

	
}
