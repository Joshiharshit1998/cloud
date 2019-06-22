#include<stdio.h>
#include<conio.h>
int rev=0;
int r=0;
void reversenum(int n){
	if(n==0){
		return;
		}
	r=n%10;	
	rev=rev*10+r;
	reversenum(n/10);
	
}
int main(){
	int n;
	scanf("%d",&n);
	reversenum(n);
	printf("%d",rev);
}
