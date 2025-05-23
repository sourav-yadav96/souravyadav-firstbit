#include<stdio.h>
void areaofcircle();
void perimeterofcircle();
void main()
{
	int ch;
	printf("Enter your choice :\n For finding Perimeter of circle enter- 1\n For finding Area of circle enter - 2\n");
    scanf("%d",&ch);
    if (ch==1){
    	perimeterofcircle();
    }
    else if(ch==2){
	    areaofcircle();
	}
	else{
	printf("Invalid Choice...");
}
}
void perimeterofcircle(){
	float perimeter,radius;
	printf("Enter radius of the Circle:\n");
    scanf("%f", &radius);
	perimeter = 2 * 3.14 * radius;
    printf("Perimeter of the circle: %f\n", perimeter);
}
void areaofcircle(){
	float area,radius;
	printf("Enter radius of the Circle:\n");
    scanf("%f", &radius);
  area = 3.14 * radius * radius;
  printf("Area of circle: %f\n", area);
}