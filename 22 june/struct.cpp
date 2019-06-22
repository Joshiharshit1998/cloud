#include<stdio.h>
#include<conio.h>
struct stud{
	int rn,age;
	char name[10];
	float gpa;
};
void swap(struct a,struct b){
	struct temp;
	temp=a;
	a=b;
	b=temp;
	
}

void main(){
	struct stud s1,s2;
	s1.rn=1;
	s1.age=20;
	strcpy(s1.name,"harsh");
	s1.gpa=9.2;
	s2.rn=2;
	s2.age=21;
	strcpy(s1.name,"amit");
	s2.gpa=8.8;
	
}
