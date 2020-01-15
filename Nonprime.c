#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,number =1, i, counter=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("First %d nonprime numbers are: ",n);
	while(1){
		int p = 0;
		for(i=1;i<=number;i++){
			if(number % i == 0)
				p++;
		}
		if(p != 2){
			printf("%d ", number);
			counter++;
		}if(counter == n){break;}
		number++;
	}
	printf("\n");
}
