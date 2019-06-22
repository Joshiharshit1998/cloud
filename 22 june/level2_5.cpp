#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=1,b=1,n;
	cin>>n;
	for(int i=3;i<=n;i++){
		if(i%2)
			a=2*a;
		else
			b=3*b;
	}
	cout<<"nth term is:";
	
	if(n%2==0){
		cout<<b;
	}
	else{
		cout<<a;
	}
}
