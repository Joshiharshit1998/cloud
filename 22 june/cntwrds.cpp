#include<stdio.h>
#include<conio.h>
int i=1;
int flag=1;
int count=1;
void countwords(char *s,int si){
	if(si==0){
		return;
	}
	if(si>=0){
		if(s[si-i]!=' '){
			flag=1;
		}
		if(s[si-i]==' '&& flag==1){
			count++;
			flag=0;
			
			
		}
		countwords(s,si-1);
}

	
}
int main(){
	char s[]="This is my yard now harshit joshi jdabf  jlhvb"; 
	int si=sizeof(s)/sizeof(char);
	countwords(s,si);
	printf("%d",count);
	
}
