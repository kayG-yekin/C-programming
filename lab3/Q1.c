#include <stdio.h>
int main(){
	int marks;
	printf("Enter your marks from 0-100: ");
	scanf("%d", &marks);


		if(marks<=100){	
					switch(marks/10)
					{
					case 10: 
					printf("Outstanding!, thats a full score");
					break;

					case 9://marks from 90-100
					printf("Execellent! Your grade: A+\n");
					break;

					case 8://marks from 80-89
					printf("Awesome! Your grade: A\n");
					break;

					case 7://marks from 70-79
					printf("Wonderfull, Your grade: B+\n");
					break;

					case 6://marks from 60-69
					printf("Nice work, Your grade: B\n");
					break;

					case 5://marks from 50-59
					printf("work harder, Your grade: C+\n");
					break;

					case 4://marks from 40-49
					printf("Need hard work, Your grade: C\n");
					break;

					case 3://marks from 30-39
					printf("You need to work more harder,Your grade: D\n");
					break;

					case 2:
						printf("You have no future if you keep this up, study harder.\n");
						break;

					case 1:
						printf("You have no future if you keep this up, study harder.\n");
						break;

					default:
						printf("Check your marks!\n");

					}	
			}

		else{
			printf("Your marks is beyond the limit\n");
		}	
}