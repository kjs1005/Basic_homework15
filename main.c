#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int hour,min;
	
	printf("(24�ɨ�)�п�J�{�b���ɶ�(�X�I�X��):\n");
	scanf("%d%d",&hour,&min);
	
	if((hour>=7)&&(hour<=16))
	{
		if((hour==7)&&(min>=30))
			printf("�{�b�O�W�Ǯɶ�");
		else if((hour==16)&&(min<=59))
			printf("�{�b�O�W�Ǯɶ�");
		else if((hour>=8)&&(hour<=15))
			printf("�{�b�O�W�Ǯɶ�");
		else
			printf("�{�b�O��Ǯɶ�");	
	}
	else
		printf("�{�b�O��Ǯɶ�");	
	
}
