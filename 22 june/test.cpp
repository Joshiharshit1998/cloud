#include<stdio.h>
#include<string.h>
void foo(int *arr,int a,int b){
	char*s="RAMAN";
	if(strlen(s)-sizeof(s))
	printf("%d",2*arr[b]+arr[a]);
	else
	printf("GATE2020");
}
int main(){
	int a[5]={010,011,012,013,014};
	foo(a,3,4);
	return 0;
}
