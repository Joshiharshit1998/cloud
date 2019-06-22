#include<bits/stdc++.h>
using namespace std;
int a=0;
int b=1;
int c;
void nfib(int t){
	c=a+b;
		a=b;
		b=c;
	if(t==2)
	return;
	else{
		
	nfib(t-1);}
	 
}
int main(){
	int t,r;
	cout<<"enter no of terms";
	cin>>t;
	nfib(t);
	cout<<a;}
