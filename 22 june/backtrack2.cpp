#include<bits/stdc++.h>
using namespace std;
void gstring2(char *s,int start,int end){
	if(start==end){
		s[start]='\0';
		cout<<s<<endl;
	}
	else{
		s[start]='0';
		gstring2(s,start+1,end);
		s[start]='1';
		gstring2(s,start+1,end);
	}
}
int main(){
	int k;
	cin>>k;
	char s[k+1];
	gstring2(s,0,k);
}
