#include<iostream>
#include <stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int nilai, angka;
    printf("PROGRAM TANGGA\n");
    printf("Masukkan Jumlah Tangga:");
    scanf("%i",&nilai);
    printf("\n");
    for (int i=1; i<=nilai;i++){
    	for (int j=1; j<=i;j++){
    		printf("%i",j);
		}
		printf("\n");
	}
 
    return 0;
}
