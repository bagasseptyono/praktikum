#include<iostream>
#include <stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int nilai;
    printf("NILAI MAHASISWA \n");
    printf("Masukkan nilai:");
    scanf("%i",&nilai);
    printf("");
    if(nilai>=0 && nilai <=20){
        printf("E");
    }
    else if(nilai>=21 && nilai <=40){
        printf("D");
    }
    else if(nilai>=41 && nilai <=60){
        printf("C");
    }
    else if(nilai>=61 && nilai <=80){
        printf("B");
    }
    else if(nilai>=81 && nilai <=100){
        printf("A");
    }
    else {
        printf("Nilai Tidak ada");
    }
    return 0;
}
