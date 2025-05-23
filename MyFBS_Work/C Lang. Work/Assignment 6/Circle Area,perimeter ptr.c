#include<stdio.h>
void areaofcircle(float*);
void perimeterofcircle(float*);
void main()
{
	int ch;
	float radius;
	printf("Enter your choice :\n For finding Perimeter of circle enter- 1\n For finding Area of circle enter - 2\n");
    scanf("%d",&ch);
    printf("Enter radius of the Circle:\n");
    scanf("%f", &radius);
    if (ch==1){
    	perimeterofcircle(&radius);
    }
    else if(ch==2){
	    areaofcircle(&radius);
	}
	else{
	printf("Invalid Choice...");
}
}
void perimeterofcircle(float *r){
	float perimeter;
	perimeter = 2 * 3.14 * (*r);
    printf("Perimeter of the circle: %f\n", perimeter);
}
void areaofcircle(float *s){
	float area;
    area = (3.14) * (*s) * (*s);
    printf("Area of circle: %f\n", area);
}