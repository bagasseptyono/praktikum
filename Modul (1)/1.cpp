#include<iostream>
#include <stdio.h>
#include<stdlib.h>
/*nilai 17 - 20 : Manager
	nilai 14 - 16 : Asisten Manager
	nilai 11 - 13 : Senior Eksekutif
	nilai 8 - 10  : Eksekutif
	nilai 6 - 8   : Staff
	nilai 1 - 5   : Operator
*/
using namespace std;

int main()
{
    int nilai;
    printf("Tes\n");
    printf("Masukkan nilai:");
    scanf("%i",&nilai);
    printf("");
    if(nilai>=1 && nilai <=5){
        printf("Operator");
    }
    else if(nilai>=6 && nilai <=1){
        printf("Staff");
    }
    else if(nilai>=8 && nilai <=10){
        printf("Eksekutif");
    }
    else if(nilai>=11 && nilai <=13){
        printf("Senior eksekutif");
    }
    else if(nilai>=14 && nilai <=16){
        printf("Asisten Manager");
    }
    else if(nilai>=17 && nilai <=20){
        printf("Manager");
    }
    return 0;
}
