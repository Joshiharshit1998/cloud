#include<bits/stdc++.h>
using namespace std;
int mult(int m,int n){
	if(n==0){
		return 0;
	}
	else{
		return m + mult(m,n-1);
	}
}
int main(){
	int m,n,a;
	cout<<"enter the no";
	cin>>m>>n;
	a=mult(m,n);
	cout<<a;
}
