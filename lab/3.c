#include <stdio.h>
int main(){
	int sum=0;
	for(int i=0;i<=20;i++){
		sum=sum+i;
		if(sum%2==1){
			continue;
		}
		printf("%d\n",sum);			
	}
			
	
	}
