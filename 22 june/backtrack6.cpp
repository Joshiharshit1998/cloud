#include<bits/stdc++.h>
using namespace std;
void gs4(char *s,int start,int end){
	if(start==end){
		s[start]='\0';
		cout<<s<<endl;
		//if(atoi(s)%7==0)
			//cout<<s<<endl;
	}
	else{
		if(start==0){
			for(int i=1;i<=9;i++){
				s[start]='0'+i;
				gs4(s,start+1,end);}
			}
		else{
			for(int i=0;i<=9;i++){
				s[start]='0'+i;
				gs4(s,start+1,end);
			}
		}
		
	}
}
int main(){
	int k;
	cin>>k;
	char s[k+1];
	gs4(s,0,k);
	
}
