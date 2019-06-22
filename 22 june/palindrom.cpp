#include<bits/stdc++.h>
using namespace std;
int rev=0;
int r;
int plndrm(int n){
	if(n){
		r=n%10;
		rev=rev*10+r;
		plndrm(n/10);
	}
	else{
	return rev;}
return rev;
	
}
int main(){
	int n,p;
	cout<<"enter no";
	cin>>n;
	p=plndrm(n);
	if(p==n)
	cout<<"yes palindrome";
	else
	cout<<"not palindrome";
}
