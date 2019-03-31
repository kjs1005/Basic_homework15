#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int hour,min;
	
	printf("(24時制)請輸入現在的時間(幾點幾分):\n");
	scanf("%d%d",&hour,&min);
	
	if((hour>=7)&&(hour<=16))
	{
		if((hour==7)&&(min>=30))
			printf("現在是上學時間");
		else if((hour==16)&&(min<=59))
			printf("現在是上學時間");
		else if((hour>=8)&&(hour<=15))
			printf("現在是上學時間");
		else
			printf("現在是放學時間");	
	}
	else
		printf("現在是放學時間");	
	
}
