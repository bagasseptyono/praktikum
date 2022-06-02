#include <stdio.h>
#include <stdlib.h>

int faktorial(int nilai);
int faktorial(int nilai){
    int hasil;
    
    if (nilai > 1) {
        hasil = nilai * faktorial(nilai-1);
    }else {
        hasil = nilai;
    }
    
    return hasil;
    
}


int main (){
    int input,total;
    printf("Program menghitung faktorial\n");
    printf("Masukkan bilangan : \n");
    scanf("%i",&input);
    total = faktorial(input);
    printf("Hasil faktorial %i adalah %i",input, total);

}

