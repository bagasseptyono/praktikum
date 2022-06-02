#include<iostream>
#include <stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int nilai;
    printf("CEK UMUR\n");
    printf("Masukkan Umur:");
    scanf("%i",&nilai);
    printf("");
    if(nilai>=1 && nilai <=16){
        printf("Anak-anak");
    }
    else if(nilai>=17 && nilai <=25){
        printf("Remaja");
    }
    else if(nilai>=26 && nilai <=45){
        printf("Dewasa");
    }
    else if(nilai>45){
        printf("Tua Banget");
    }
    else{
    	printf("Pilihan Tidak ada");
	}
    
    return 0;
}
