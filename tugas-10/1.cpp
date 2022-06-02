#include <stdio.h>
#include <stdlib.h>

float luaspersegi(float sisi);
float luaspersegi( float sisi){
    float luas;
    luas = sisi * sisi;
    return luas;
}

float kelilingpersegi(float sisi){
	float keliling;
	keliling = 4 * sisi;
	return keliling;
}

float input(){
	float nilai;
	printf("Masukkan sisi\n");
    scanf("%f",&nilai);
    return nilai;
}

int main(){
    float nilai,keliling,luas;
    printf("Program menghitung persegi\n");
    printf("Luas Persegi \n");
    nilai = input();
    luas = luaspersegi(nilai);
    printf("Luas = %.2f",luas);
    
    printf("\n\nkeliling Persegi \n");
    nilai = input();
    keliling = kelilingpersegi(nilai);
    printf("Luas = %.2f",keliling);
    
    return 0;
}

