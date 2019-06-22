#include<bits/stdc++.h>
using namespace std;
int n,l;
void revary(int a[],int x){
	if(x==n/2)
		return;
	int t=a[x];
	a[x]=a[n-1-x];
	a[n-1-x]=t;
	x=x+1;
	revary(a,x);
}
int main(){
	static int x=0;
	int a[n];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	revary(a,x);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
