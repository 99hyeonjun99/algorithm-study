#include <stdio.h>

int main(){
	
	int arry[]={0};
	int i, n;
	int x;
	int rest;
	int result;
	int count = 0 ; 
	int j;
	scanf("%d", &n);
	
	for(i=0; i<=n, i++){
	
		
		scanf("%d", &x);
		rest = x % 42 ;
		arry[i] = rest; // arry ���� rest�� ����ִ´� �³�? 
	}
		for(i=0; i<=n; i++){               //�ؾ��Ұ� �� �迭�� ���ڵ��� �ߺ��� �Ǵ��� �ȵǴ��� ��������. 
		
		
		
		for(j=0; j<i; j++){
			
			if (arry[i] == arry[j]){
				count++;
			}
			if (count == 0){
				result++;
			}
		}
		
		
	}
	
	




    return 0;
 
}


