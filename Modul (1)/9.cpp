#include<iostream>
#include <stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int nilai, angka;
    printf("TEBAK ANGKA\n");
    angka = 15;
    printf("Masukkan Angka(kesempatan 3x):");
    scanf("%i",&nilai);
    printf("\n");
    if(nilai==angka){
        printf("Benar 1x berhasil");
	}else{
		printf("SALAH\n");
		printf("Masukkan Angka(kesempatan 2x):");
    	scanf("%i",&nilai);
		if(nilai==angka){
        	printf("Benar");
        }else{
        	printf("SALAH\n");
        	printf("Masukkan Angka(kesempatan 1x):");
    		scanf("%i",&nilai);
        	if(nilai==angka){
        		printf("Benar");
        	}else{
        		printf("\nKESEMPATAN HABIS JAWABAN ADALAH : %i",angka);
			}
		}
	}

	
    
    
    return 0;
}
