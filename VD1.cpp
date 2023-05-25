#include <stdio.h>
main(void){
	int ary[10];
	int i, total, high;
	for (i=0; i<10; i++)
	{
		printf("Enter value:", i);
		scanf("%d",&ary[i]);
	}
	
	high = ary[0];
	for(i=1; i<10; i++)
	{
		if(ary[i]>high)
			high = ary[i];
	}
	printf("\nhighest value entered was %d", high);
}
