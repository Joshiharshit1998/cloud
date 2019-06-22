#include<bits/stdc++.h>
using namespace std;
int main(){
	char c[]="AZ";
	for(int i=0;i<2;i++){
		cout<<c[i];
	}
	cout<<" ";
	for(int i=1;i<=10;i++){
		c[0]=c[0]+2;
		c[1]=c[1]-1;
		for(int j=0;j<2;j++){
			cout<<c[j];
		}
		cout<<" ";
	}
}
