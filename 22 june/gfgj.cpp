#include<stdio.h>
int main(){
	void swap();
	int x=10;
	int y=8;
	swap(&x,&y);
	printf("%d %d",x,y);
	
}
void swap(int *a,int *b){
	*a^=*b,*b^=*a,*a^=*b;
}
