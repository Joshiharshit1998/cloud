#include<stdio.h>
#include<conio.h>
int reg(int i,int j);
int a[4][4];
int n=4;
int i,j,c;
int main(){
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
for(i=0;i<4;i++){

		for(j=0;j<4;j++){
		
	 if(a[i][j]==1){		
     	printf("%d\n",reg(i,j));
		 c+=1;}
}
}
printf("%d",c);
	
}
int reg(int i,int j){

			if((i<0) || (i>n-1) ||(j<0) ||(j>n-1)  ||(a[i][j]!=1))
				return 0 ;
			
			
				a[i][j]=-1;
				return(reg(i+1,j)+reg(i-1,j)+reg(i,j+1)+reg(i,j-1)+1);
			}
