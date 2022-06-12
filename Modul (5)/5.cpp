#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("PILIH BANGUN DATAR\n");
	printf("1. LUAS SEGITIGA\n");
	printf("2. LUAS PERSEGI\n");

int pilih;
float alas, tinggi, luas, sisi;
printf("Masukkan Pilihan :");
scanf("%i",&pilih);

switch (pilih){
    case 1 :
        printf("=====SEGITIGA=====\n");
		printf("Masukkan alas\n");
		scanf("%f",&alas);
		printf("Masukkan tinggi\n");
		scanf("%f",&tinggi);
		luas = alas * tinggi /2;
		printf("Hasil luas segitiga = %2.f", luas);
        break;
    case 2 : 
        printf("=====PERSEGI=====\n");
		printf("Masukkan sisi\n");
		scanf("%f",&sisi);
		luas = sisi * sisi;
		printf("Hasil luas persegi = %2.f", luas);
        break;
    
    default :
        printf("inputan salah");
	}
}
