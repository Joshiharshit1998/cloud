#include<bits/stdc++.h>
using namespace std;
int main(){
	int i=1,n,a=1,t;
	cin>>n;
	cout<<"n terms are:"<<"\n"<<a<<" ";
	for(a=2;a<=n;a++){
		if(a%2==0){
			i++;
			t=a*i;
			cout<<t<<" ";
		}
		else{
			i=i+3;
			t=a*i;
			cout<<t<<" ";
		}
		
	}

		
}
