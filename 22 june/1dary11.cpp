#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=6;
	int ar[]={2,4,10,3,8,7};
	int i=0;
	int f;
	for(i=0;i<n;i++){
		f=1;
		for(int j=i+1;j<n;j++){
			if(f==1 && ar[i]>ar[j])
			continue;
			else
			f=0;
		}
		cout<<ar[i]<<' ';
}
}
