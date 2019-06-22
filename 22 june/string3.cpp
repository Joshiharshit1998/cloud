#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int c=1;
	int f=0;
	getline(cin,s);
	if(s.length()==0)
	c=0;
	for(int i=0;i<s.length();i++){
		if(f==0 && s[i]==' '){
		f=1;
		c++;}
		else
		f=0;
	}
	cout<<c;
}
