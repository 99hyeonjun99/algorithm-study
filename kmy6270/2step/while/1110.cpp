// ����  0<=A<=99
// A�� ���ڸ������, A%10=b , A/10=a , a+b = x , x % 10 = y, a*10 + y �� ���ο� ��.
// ���ο���� D��� �����ϰ� A=D�̶�� ������ �����Ѵ�. �ݺ� Ƚ���� ����ؾ��Ѵ�. 


#include <stdio.h>

int main(void){
	
	int A ;
	int i=0 ;
	
	scanf("%d", &A);
	while(i>=0){
		
		int b = A%10;
		int a = A/10;
		int x = a+b;
		int y = x % 10;
		int D = a*10+ y;
	    i++;
	    
		if(A=D){
			printf("%d", i);
			break;
			
		} 
	}
	
	return 0;
	
	
} 
