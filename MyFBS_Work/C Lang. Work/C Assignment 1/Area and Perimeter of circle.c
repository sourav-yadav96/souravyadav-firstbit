#include<stdio.h>
void main()
{
  int ch;
  float radius, perimeter, area;
  printf("Enter your choice :\n For finding Perimeter of circle enter- 1\n For finding Area of circle enter - 2\n");
  scanf("%d",&ch);
  printf("Enter radius of the Circle:\n");
  scanf("%f", & radius);
  if (ch==1){
  perimeter = 2 * 3.14 * radius;
  printf("Perimeter of the circle: %f\n", perimeter);
}
else if(ch==2){
  area = 3.14 * radius * radius;
  printf("Area of circle: %f\n", area);
}
else{
	printf("Invalid choice");
}
}