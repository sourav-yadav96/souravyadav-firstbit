#include<stdio.h>
int marrigeligibility();
void main()
{
	int res;
	res=marrigeligibility();{
	if(res==1){
		printf("You are eligible for marry");
	}
	else if(res==0){
		printf("You are eligible for marry");
	}
	else{
		printf("You are not eligible for marry");
	}}
}
int marrigeligibility(){
	int age;
	char gender;
	printf("Enter your Age and gender\n");
	scanf("%d %c",&age,&gender);
	if(age>=21 && gender=='m'){
		return 1;
	}
	else if(age>=18 && gender=='f'){
		return 0;
	}
	else{
		return 2;
	}
}