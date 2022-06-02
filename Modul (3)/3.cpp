#include <stdio.h>
#include <stdlib.h>

void deret (int batas){
	int a =0;
	int b =1;
	for(int x=0;x<batas;x++)
	{
		printf("%i ",a);
		a = a + b;
		b = a - b ;	
	}
	
}
main()
{
	int batas, jumlah,a =0,b=1;
	printf("Deret Fibonanci\n ");
	printf("Masukkan batas deret : ");
	scanf("%i",&batas);
	deret(batas);
	
}

