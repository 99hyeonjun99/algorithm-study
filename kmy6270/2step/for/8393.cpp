//n�� �Է¹޴´�
//1+2+ ... +n �� ���� ���ؾ� �Ѵ�. ����ҷ�
// n = 5 -> 1+2+3+4+5 
// n = 8 -> 1+2+3+4+5+6+7+8
// n�ױ����� �� n(n+1)/2�� ���� ���ϰ����� �׷��� for ���� �� �ʿ䰡 ����. 

#include <stdio.h> 

int main(void)
{
	int n , i ; 
	int sum = 0;
	
	scanf("%d", &n);
	for(i=1; i <= n; i++){
		sum = sum + i;
		
		
	}

		printf("%d" , sum);
	return 0;
 } 
