#include<iostream>
#include <stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int nilai, angka, genap = 0; int ganjil = 0;
    printf("TEBAK ANGKA\n");
    printf("Masukkan Jumlah Perulangan:");
    scanf("%i",&nilai);
    printf("\n");
    for (int i=0; i<nilai;i++){
    	printf("\nINPUT ANGKA :");
    	scanf("%i",&angka);
    	if(angka % 2 == 0){
    		printf("%i = GENAP\n", angka);
    		genap++;
		}else{
			printf("%i = GANJIL\n", angka);
			ganjil++;
		}
    	
	}
	printf("\nJumlah bilangan Genap = %i\n", genap);
	printf("Jumlah bilangan Ganjil = %i", ganjil);
 
    return 0;
}
