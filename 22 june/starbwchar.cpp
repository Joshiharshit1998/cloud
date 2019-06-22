#include<bits/stdc++.h>
using namespace std;
#include<string>
void insert( string &s,string &os,int i){
	if(i==s.length()){
		return;
	}
	else{
		if(s[i]==s[i+1]){
			os=os+s[i];
			os=os+'*';
		}
		else
			os=os+s[i];
		insert(s,os,i+1);
	}
}
int main(){
	string s="aabbcdd";
	cout<<s<<endl;
	string os="";
	int i=0;
	insert(s,os,0);
	for(int i=0;i<os.length();i++)
		cout<<os[i];

	}
