#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,b;
	int n=6;
	int a[n];
	cout<<"enter the range";
	cin>>x>>b;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int j=0;j<n;j++){
		if(x<=a[j] && b>=a[j])
		cout<<a[j];
	}
	
}
