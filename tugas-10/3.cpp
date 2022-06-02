#include <stdio.h>
#include <stdlib.h>

float input(){
    float nilai;
	printf("Masukkan suhu \n");
    scanf("%f",&nilai);
    return nilai;
}

float celcius(){
    float celc, fahr, kelv, ream ;
	celc = input();
    
	fahr = ((9.0 / 5.0) * celc) + 32;
	kelv = celc + 273.15;
	ream = celc * (4.0/5.0) ;
	
	printf("\n\nSuhu celcius %.2f ke fahrenhait menjadi %.2f \n ",celc, fahr);
	printf("Suhu celcius %.2f ke kelvin menjadi %.2f \n " ,celc, kelv);
	printf("Suhu celcius %.2f ke reamur menjadi %.2f \n ",celc, ream);
	
	return 0;

}
main(){
    printf("Program Konversi Suhu Celcius \n");
    celcius();
    
}

