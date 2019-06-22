#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,n,m;
	cin>>n>>m;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			cout<<" ";
		}
		for(j=0;j<m;j++){
			if(i==0 || i==n-1){
				cout<<"*";
			}
			else{
				if(j==0 || j==m-1){
					cout<<"*";
					
				}
				else{
					cout<<" ";
				}
			}
		}
		cout<<"\n";
	}
}
