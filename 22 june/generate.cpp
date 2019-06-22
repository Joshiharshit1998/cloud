#include<stdio.h>
#define max 10
void generate(char str[],int k){
	if(k<=0){
		printf("%s\n",str);
		
	}
	else
	{
	
	str[k-1]='0';
	generate(str,k-1);
	str[k-1]='1';
	generate(str,k-1);
}
}
int main(){
	int k;
	scanf("%d",&k);
	char str[max]={0};
	generate(str,k);
}
