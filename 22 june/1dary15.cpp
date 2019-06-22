#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=8;
	int a[n]={-10,5,-7,18,6,-6,34,-99};
	int i,j;
	i=0,j=0;
	for(i=0;i<n;i++){
		if(a[i]<0){
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			j++;
		}
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
