#include <stdio.h>

// N�� �ݺ��Ҷ�, ù��°�� �� �ϳ� �ι�°�� �� �ΰ�,, 

int main(void)
{
	int i , N , X ;
	
	scanf("%d", &N);
	
	for(i=1; i<=N; i++){
		
		for(X=1; X<=i; X++){
			
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}
