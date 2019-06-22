#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int a[n]={10,5,7,18,6};
	int b[n]={4,2,3,17,2};
	float sr[n];
	for(int i=0;i<n;i++){
		sr[i]=(a[i]/b[i])*100;
	}
	float max=sr[0];
	for(int i=0;i<n;i++){
		if(sr[i]>max)
		max=sr[i];
		
	}
	cout<<max;
}
