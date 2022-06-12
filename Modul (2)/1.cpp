#include<iostream>
#include <stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int nilai, angka;
    printf("TEBAK ANGKA\n");
    printf("Masukkan Jumlah Perulangan:");
    scanf("%i",&nilai);
    printf("\n");
    for (int i=0; i<nilai;i++){
    	printf("\nINPUT ANGKA :");
    	scanf("%i",&angka);
    	if(angka % 2 == 0){
    		printf("%i = GENAP\n", angka);
		}else{
			printf("%i = BUKAN GENAP\n", angka);
		}
		
    	
	}
    

	
    
    
    return 0;
}
