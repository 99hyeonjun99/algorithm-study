// �׽�Ʈ ���̽� ���� T��ŭ �ݺ��� �ؾ��Ѵ�
// �ݺ������� A�� B�� �Է� �޴� ������ ������ �Ѵ�

#include <stdio.h>

int main(void)
{
	int T , t , A , B ;
	
	scanf("%d", &T);
	
	for(t = 1; t <= T; t++){
		scanf("%d%d", &A ,&B);
		printf("%d \n", A+B);
	}
	
	return 0;
 } 
