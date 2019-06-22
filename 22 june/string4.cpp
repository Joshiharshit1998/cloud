#include<bits/stdc++.h>
using namespace std;
#define a 256
char maxoccur(char *s){
	int c[a]={0};
	int l=strlen(s);
	int max=0;
	char res;
	for(int i=0;i<l;i++){
		c[s[i]]++;
		if(max<c[s[i]]){
		
		max=c[s[i]];
		res=s[i];}
	}
	return res;
	
}
int main(){
	char s[100]="ramanclasss";
	char r;
	r=maxoccur(s);
	cout<<r;
}
