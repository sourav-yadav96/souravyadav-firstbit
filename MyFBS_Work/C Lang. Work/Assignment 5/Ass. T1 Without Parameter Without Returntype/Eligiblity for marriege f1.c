#include<stdio.h>
void marrigeligibility();
void main()
{
	marrigeligibility();
}
void marrigeligibility(){
	int age;
	char gender;
	printf("Enter your Age and gender\n");
	scanf("%d %c",&age,&gender);
	if(age>=21 && gender=='m'){
		printf("You are eligible for marry");
	}
	else if(age>=18 && gender=='f'){
		printf("You are eligible for marry");
	}
	else{
		printf("You are not eligible for marry");
	}
}