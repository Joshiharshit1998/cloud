#include<bits/stdc++.h>
using namespace std;
int c=0;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<=s.length();i++){
		if(s[i]>=48 && s[i]<=58){
			c++;
		}
	}
	cout<<c;
}
