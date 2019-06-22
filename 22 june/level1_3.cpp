#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,n;
	cin>>n;
	int k=0;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
		if(k%2==0)
			cout<<"0";
		else
			cout<<"1";
		k++;
		}
		cout<<"\n";
	}
	
}
