#include<bits/stdc++.h>
using namespace std;
int rev=0;
int r;
int revdig(int n){
	if(n){
		r=n%10;
		rev=rev*10+r;
		revdig(n/10);
	}
	else{
	return rev;}
return rev;
	
}
int main(){
	int n,res;
	cout<<"enter no";
	cin>>n;
	res=revdig(n);
	cout<<res;
}
