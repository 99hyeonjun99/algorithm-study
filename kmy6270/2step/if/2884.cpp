#include <stdio.h>

int main(void)
{
	// 0��0��~ 0�� 44�а� ������ �ð��� ������.
	// ������ ������ ������  
	// ����) ���� 44�� ������ �� H-1�� �ؾ��Ѵ�. �׸��� ���� 60-(45-H)�� ��Ÿ���� ����. 
	
	int H , M ;
	
	scanf("%d%d", &H , &M );
	
	if(H >= 1){
		
		int cH , cM ;
		
		if(M >= 45){
			cH == H ;
			cM = M - 45;
			printf("%d %d", cH , cM);
		}
		
		else{
			cH = H - 1 ;
			cM = 60 - (45 - M);
			printf("%d %d", cH , cM);
			
		}
		
		
	} 
	
	else if( H == 0){
		
		int cH , cM ;
		
		if(M >= 45){
			cH == H ; 
			cM = M - 45 ;
			printf("%d %d", cH , cM);
			}
		
		else{
			cH = 23 ;
			cM = 60 - ( 45 - M);
			printf("%d %d", cH , cM);
		}
	}
	
	return 0;
	
}
