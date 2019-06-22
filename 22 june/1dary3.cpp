#include<bits/stdc++.h>
using namespace std;
int mean;
int n=7;
int main(){
	int a[]={3,5,6,7,10,2,9};
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+a[i];
	}
	mean=sum/n;
	for(int i=0;i<n;i++){
		if(a[i]>mean){
			cout<<a[i]<<' ';
		}
	}
}
