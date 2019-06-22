#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,l;
	cin>>n>>l;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=l;i++){
		int k;
		for(int j=4;j>=0;j--){
			k=(j-1+n)%n;
			a[j]=a[k];
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
}
