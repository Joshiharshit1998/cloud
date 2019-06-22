#include<stdio.h>
#include<conio.h>
void f(int i){
if(i==0){
return;
}
printf("*");
f(i-1);
}
void f1(int n,int i){
	if(n==0){
		return;
		
	}
	f(i);
	i++;
	printf("\n");
	f1(n-1,i);
}
int main(){
	int n;
	int i=1;
	scanf("%d",&n);
	f1(n,i);
}
