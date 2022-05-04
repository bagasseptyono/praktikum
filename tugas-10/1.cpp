#include <stdio.h>
#include <stdlib.h>

float luaspersegi(float sisi);
float luaspersegi( float sisi){
    float luas;
    luas = sisi * sisi;
    return luas;

}




int main(){
    float nilai,luas;
    printf("Program menghitung persegi\n");
    printf("Masukkan sisi\n");
    scanf("%f",&nilai);
    luas = luaspersegi(nilai);
    printf("Luas = %.2f",luaspersegi(nilai));
    
    return 0;
    


}

