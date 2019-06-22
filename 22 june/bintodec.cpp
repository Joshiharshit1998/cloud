#include<stdio.h>
#include<string.h>
int b2d(char c[],int l, int pow);
int main(){
	int r;
	char c[]="10010";
	int len=strlen(c);
	int p=1;
	r=b2d(c,len-1,p);
	
	printf("%d",r);
	return 0;
}
int b2d(char c[],int l, int pow){

	if(l<0){
		return 0;
		
	}
	return ((c[l--]-'0')*pow +b2d(c,l,pow*2));
}
