#include<iostream>
#include <stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int nilai, angka;
    int matriks1[2][2];
    int matriks2[2][2];
    int hasilmatriks[2][2];
    printf("PROGRAM JUMLAH MATRIKS\n");
    printf("\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++)
        {
        	printf("Input matriks 1 (%i,%i) = ",i+1,j+1);
            scanf("%i",&matriks1[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++)
        {
        	printf("Input matriks 2 (%i,%i) = ",i+1,j+1);
            scanf("%i",&matriks2[i][j]);
        }
    }
    printf("JUMLAH MATRIKS\n");
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++)
        {
        	hasilmatriks[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++)
        {
            printf("%i ",hasilmatriks[i][j]);
        }
        printf(" \n");
    }
 
    return 0;
}
