#include<stdio.h>
#include<conio.h>
int c=1;
void countdigit(int n){
	if(n==0){
		return;
		
	}
		
	
	if(n/10!=0){
		c++;
		countdigit(n/10);
	}
	
	
	
}
int main(){
	int n;
	scanf("%d",&n);
	countdigit(n);
	printf("%d",c);
}
