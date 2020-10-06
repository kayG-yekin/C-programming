#include <stdio.h>
int main(){
	int a;
	
	for(int i=0;i<=200;i++){
		{
			a=0;
			for(int j=2;j<=i/2;++j){
				if(i%j==0)
					a++;
				break;
			}
		}
		if(a==0 && i !=1){
			printf("%d\n",i);
		}
		}
	}
