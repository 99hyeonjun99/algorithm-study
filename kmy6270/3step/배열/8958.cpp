#include <stdio.h>

int main(void){
	
	char arr[80]={};
	
	int i, j, k,  m, n;
	int l = 80;
	int count;
	int sum = 0;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		
		for(k=0; k<l; k++){
			
			scanf("%s", arr);
			if(arr[80]='O'){               	//char ���� O�� �ԷµǸ�  
			
				count++;          			//ī��Ʈ�� �ö󰡰�    		
				sum = sum + count;	 		//�հ�� �����Ǿ�����. 
			}
			else if(arr[80]='X'){				//char ���� X�� �ԷµǸ� 
				
				count=0;					//ī��Ʈ�� 0���� �ʱ�ȭ �ȴ�. 
				
			}
			else{
				printf("%d \n", sum); 		//�ٸ����� �ԷµǸ� �հ谡 ��µǰ�  
				break;						//����ȴ�. 
			}
			
			
		}
		
		
	}
	
	

	
	
	return 0; 
}
