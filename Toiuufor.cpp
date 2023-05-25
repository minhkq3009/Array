#include <stdio.h>
main(void){
	int ary[5];
	int i, min, max;
	int total = 0;
	float avg;
	for (i=0; i<5; i++)
	{
		printf("Enter value:", i+1);
		scanf("%d",&ary[i]);
		total += ary[i];
			if (i==0)
			{	
				min = ary[0];
				max = ary [0];
			}
			else
			{
				if(ary[i]>max)
					max = ary[i];
				if(ary[i]<min)
					min = ary[i];
			}
		avg = (float)total/i+1;
	}
	printf("\nshortest value entered was %d", min);
	printf("\nTotal is %d", total);
	printf("\nHightest value is %d", max);
	printf("\nAverage is %f", avg);
}
