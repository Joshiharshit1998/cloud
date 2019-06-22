#include<stdio.h>
void g(int * ,int);
int main()
{
	int k,str[5];
	  scanf("%d",&k);
	g(str,k-1);
	   return 0;
	
}
void g(int str[],int k)
{       if(k<0) printf("%d",str[k]);
else{


    str[k]=0;
     g(str,k-1);
  str[k]=1;
     g(str,k+1);
 }
}
