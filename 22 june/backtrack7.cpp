#include<bits/stdc++.h>
using namespace std;
int check(int a[],int i,int j,int size,int k){
	if(j==size)
	return 0;
	if(a[i]+a[j]==k)
	return 1;
	check(a,i,j+1,size,k);
}
int main(){
	int ar[]={1,4,6,3,8};
	int size=sizeof(ar)/sizeof(*ar);
	int n,i,c=0;
	cin>>n;
	for(i=0;i<size;i++){
		if(check(ar,i,i+1,size,n))
		c++;
	}
	if(c)
	cout<<"YES";
	else
	cout<<"NO";
	
}
