#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,n;
	cin>>n;
	int c=1;
	for(int i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if((i+j)%2==0){
				cout<<c;
			}
			else{
				cout<<"-"<<c;
			}
			c++;
		}
		cout<<"\n";
	}
}
