#include <stdio.h>
int main()
{
	int initial;
	int option;
	int balance;
	int credit;
	int debit;

	printf("Enter the initial amount in the account: \n");
	scanf("%d",&initial);

	printf("What would you like to perform:\n1)Credit\n2)Debit\n3)Balance enquiry\n");
	scanf("%d",&option);

	initial=balance;
if(balance>1000){
	switch(option)
	{
		case 1:
		printf("Enter the amount you want to credit: ");
		scanf("%d",&credit);


		printf("You have successfully credited amount to your account: %d",credit);
		int total=initial+credit;
		printf("\nYour total amount is: %d",total);
		break;

		case 2:
		printf("How much money do you want to Debit:\n ");
		scanf("%d",&debit);
		printf("You have successfully debited amount:  %d",debit);
		int bal=initial-debit;
		printf("\nYour balance is: %d\n",bal );
		break;

		case 3:
		if(balance>1000){
			printf("Nice work, you have enough money\n");

		}
		else{
			printf("you are running low on money\n");
		}
		break;

		default:
			printf("Enter the correct options\n");
	}
}
else{
	printf("You donnot have enough balance");
}
}