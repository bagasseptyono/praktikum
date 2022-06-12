#include <stdio.h>
#include<stdlib.h>


float luas_lingkaran(float jari2){
	float hasil;
	float pi = 3.14;
	hasil = jari2 * jari2 * pi;
	
	return hasil;
	
	
}

int main(int argc, char const *argv[])
{
    float jari_jari,hasil;
	printf("Input Jari-jari\n");
    scanf("%f",&jari_jari);
    hasil = luas_lingkaran(jari_jari);
    printf("Hasil = %.2f",hasil);
    
    return 0;
}
