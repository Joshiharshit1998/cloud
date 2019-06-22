#include<bits/stdc++.h>
using namespace std;
int pow(int a,int b){
	if(b==0)
	return 1;
	else
	return a*pow(a,b-1);
	
}
int main(){
	int a,b,r;
	cout<<"enter the no";
	cin>>a>>b;
	r=pow(a,b);
	cout<<r;
	
}
