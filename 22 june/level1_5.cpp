#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,n,q;
	static int c=0;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=i;j>=1;j--){
			c=q+j;
			cout<<c;
			}
		q=c;
		
		cout<<"\n";
	}
}
