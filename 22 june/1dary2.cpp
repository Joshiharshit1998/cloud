#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	int a[n];
	cout<<"enter no of elements";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int j=1;j<n-1;j++){
		if(a[j]>a[j-1] && a[j]>a[j+1])
		cout<<a[j];
	}
	if(a[0]>a[1])
	cout<<a[0];
	if(a[n-1]>a[n-2])
	cout<<a[n];
	
}

