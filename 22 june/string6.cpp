#include<bits/stdc++.h>
using namespace std;
int main(){
	int b,e;
	string s;
	char a[100];
	getline(cin,s);
	e=s.length();
	for(b=0;b<s.length();b++){
		a[b]=s[e-1];
		e--;
		
		
	}
	cout<<a;
}
