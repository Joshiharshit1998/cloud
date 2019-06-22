
#include<stdio.h>
#include<conio.h>
#include<string.h>
void revword(char *st) 
{if(f<strlen(st)) 
   if (*st) 
   { 
       revword(st+1); }
    printf("%c", *st);  

}
  
int main() 
{ 
char a[100];
   printf("Enter the string:");
   scanf("%s",a); 
   revword(a); 
   return 0; 
}

