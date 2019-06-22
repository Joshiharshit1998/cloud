#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	int b=n;
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			cout<<b;
		}
		b++;
		cout<<"\n";
	}
	for(i=0;i<n;i++){
		b=b-1;
		for(j=n-1;j>=i;j--){
			cout<<b-1;
		}
		cout<<"\n";
		
	}
}
