#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
	int n=5;
	int a[n]={1,0,1,0,1};
	int s=0;
	for(int i=n-1;i>=0;i--){
		s+=pow(2,i)*a[i];
	}
	cout<<s;
}
