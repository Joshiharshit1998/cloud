#include<bits/stdc++.h>
using namespace std;
int main(){
	int max,n,a[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max)
		max=a[i];
	}
	cout<<max;
	
}
