#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int c=1;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(i%2==0){
				cout<<c<<" ";
			}
			else{
				cout<<"-"<<c;
			}
			c++;
		}
		cout<<"\n";
	}
}
