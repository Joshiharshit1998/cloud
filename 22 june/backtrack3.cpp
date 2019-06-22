#include<bits/stdc++.h>
using namespace std;
void gstring3(char *s,int present,int end){
	if(present==end){
		s[end]='\0';
		cout<<s<<endl;
	}
	else{
		if(s[present-1]=='1'){
			s[present]='0';
			gstring3(s,present+1,end);
	}
		else{
			s[present]='0';
			gstring3(s,present+1,end);
			s[present]='1';
			gstring3(s,present+1,end);
	}
}
}
int main(){
	int k;
	cin>>k;
	char s[k+1];
	s[0]='0';
	gstring3(s,1,k);
	s[0]='1';
	gstring3(s,1,k);
}
