#include<stdio.h>
#include<conio.h>
int sumofdig(int n){
	if(n==0){
		return 0;
	}
	return n%10+sumofdig(n/10);
}
int main(){
	int n;
	scanf("%d",&n);
	
}
