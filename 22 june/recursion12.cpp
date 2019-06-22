#include<bits/stdc++.h>
using namespace std;
int n;
int sum_ary(int a[],int x,int s){
	if(x==n)
	return s;
	else
	s=s+a[x];
	return sum_ary(a,x+1,s);
}
int main(){
	int sum=0,x=0;
	int a[n];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int r=sum_ary(a,x,sum);
	cout<<r;
}
