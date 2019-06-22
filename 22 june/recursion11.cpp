#include<bits/stdc++.h>
using namespace std;
int n;
int max_ary(int a[],int m,int x){
	if(x==n)
		return m;
	if(m<a[x]){
	m=a[x];}
	return max_ary(a,m,x+1);}

int main(){
	int r;
	int x=0,max=INT_MIN;
	cin>>n;
	max=INT_MIN;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	r=max_ary(a,max,x);
	cout<<r;
}
