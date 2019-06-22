#include<bits/stdc++.h>
using namespace std;
int main(){
	int x=1;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		if(i%2==0){
			for(int j=0;j<=i;j++)
				cout<<x++;
		cout<<"\n";
		}
		else{
			int q=x+i;
			for(int j=i;j>=0;j--){
				cout<<q--;
				x++;
			}
			cout<<"\n";
		}
	}
}
