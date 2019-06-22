#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,n,c;
	cin>>n;
	c=0;
	for(i=1;i<=n;i++){
			if(i==1 || i==n){
				for(j=1;j<=n;j++){
					cout<<j;
				}
				
			}
			else{
				for(j=1;j<=n+1-i;j++){
					if(j==n+1-i){
						cout<<j;
				}
				else{
						cout<<" ";
				}
			}
		}
		cout<<"\n";
		}
	}

