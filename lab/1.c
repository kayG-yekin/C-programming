#include <stdio.h>
int main(){

	int shape;
	int area;
	float x,y,a,base,height,aa,radius,c;
	;

	printf("Select the shape whose area you want to find:\n 1:rectangle\n 2:triangle\n 3:circle \n Enter your preference= ");
	scanf("%d",&shape);

	switch(shape)
	{
		case 1:
		printf("Enter the length:\n");
		scanf("%f",&x);
		printf("Enter the width: \n");
		scanf("%f",&y);
		a = x*y;
		printf("The area of rectangle is:%f\n", a);
		break;

		case 2:
		printf("Enter the base of the triangle:\n");
		scanf("%f",&base);
		printf("Enter the height of the triangle:\n");
		scanf("%f",&height);
		aa= 0.5*base*height;
		printf("The area of the triangle is:\n %f",aa);
		break;

		case 3:
		printf("Enter the radius of the circle: \n");
		scanf("%f",&radius);

		c=3.14*(radius*radius);
		printf("The area of the circle is:\n %f",c);
		break;

		default:
		printf("Check your options again\n");
	}
	
	
}