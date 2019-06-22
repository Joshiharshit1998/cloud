#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	string s1="10110";
	string s2="11001";
	char a[n];
	for(int i=0;i<n;i++){
		if(s1[i]==s2[i])
		a[i]='0';
		else
		a[i]='1';
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	
	
}
