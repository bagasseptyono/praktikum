#include <stdio.h>
#include <stdlib.h>
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
    if(nilai>=80 && nilai <=100){
        printf("A");
    }
    else if(nilai>=65 && nilai <=79){
        printf("B");
    }
    else if(nilai>=50 && nilai <=64){
        printf("C");
    }
    else if(nilai>=35 && nilai <=49){
        printf("D");
    }
    else if(nilai>=0 && nilai <=34){
        printf("E");
    }
    else {
        printf("Tidak ada");
    }
    return 0;
 }