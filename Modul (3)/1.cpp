#include<iostream>
#include <stdio.h>
#include<stdlib.h>

int volumebalok(){
	int volume,p,l,t;
	printf("Masukkan Panjang : \n");
    scanf("%i",&p);
    printf("Masukkan Lebar : \n");
    scanf("%i",&l);
    printf("Masukkan Tinggi : \n");
    scanf("%i",&t);
    volume=p*l*t;
    
    return volume;
}

int main()
{
    int balok;
	printf("TEBAK ANGKA\n");
    //balok=volumebalok();
    printf("Hasil Volume Balok %i",volumebalok());
    
    return 0;
}
