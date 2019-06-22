/* Function to print reverse of the passed string */
#include<stdio.h>
#include<conio.h>
void reverse(char *str) 
{ 
   if (*str) 
   { 
       reverse(str+1); 
       printf("%c", *str); 
   } 
} 
  
/* Driver program to test above function */
int main() 
{ 
char a[100];
   printf("Enter the string");
   scanf("%s",a); 
   reverse(a); 
   return 0; 
}
