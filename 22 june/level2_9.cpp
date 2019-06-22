#include<bits/stdc++.h>

using namespace std;
int main(){
	int a=1,b=2,c=3,n=15,d,e;
	for(int i=1;i<=ceil((float)n/2);i++){
		d=a+b*b;
		cout<<d<<" ";
		e=d-c;
		cout<<e<<" ";
		a=a+2;
		b=b+2;
		c=c*2;
	}
	
}
