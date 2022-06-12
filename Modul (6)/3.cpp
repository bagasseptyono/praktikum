#include <stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    float nilai [100];
    float hasil=0;
    int masuk ;
    float rata2,modus;
    int a;
		int b=0;
    printf("INPUT Banyak Nilai : \n");
	scanf("%d",&masuk);
	
    for (int i = 0; i<masuk; i++){
        
        printf("Nilai %i :",i+1); 
		scanf("%f",&nilai[i]);
    }
    
    for (int i = 0; i < masuk; i++)
    {
        hasil = hasil+ nilai[i];
    }
    rata2=hasil/masuk;
    
    modus = nilai[0];
    for(int i=0;i<masuk;i++){
		a=0;
		for(int j=0;j<masuk;j++){
			if(nilai[i] == nilai[j])
			a++;
		}
		if(a > b){
		modus = nilai[i];
		b=a;
		}else if(a == b){
			if(nilai[i]>modus){
			b=a;
			modus=nilai[i];
			}
		}	
	}
	printf("\nNilai Rata Rata : %.2f\n", rata2);
	printf("modusnya adalah %f  ", modus);
    return 0;
}
