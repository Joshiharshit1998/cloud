#include<stdio.h>
#include<string.h>
void gs(char st[],int i);
int main(){
	int k=2;
	char s[k+1]={0};
	gs(s,k-1);
	
}
void gs(char st[],int i){
	if(i==-1){
		printf("%s\n",st);
		return;
		
	}
	st[i]='0';
	gs(st,i-1);
	st[i]='1';
	gs(st,i-1);
	
}
