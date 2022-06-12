#include <stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    char nama [100][100];
    char no_ktp [100][100];
    char calon[100][100];

    for (int i = 1; i<3; i++){
        
        printf("Nama : "); 
		gets(nama[i]);
        printf("No Ktp: "); 
		gets(no_ktp[i]);
        printf("Calon: "); 
		gets(calon[i]);
    }
    for (int i = 1; i < 3; i++)
    {
        printf("%s\n",nama[i]);
        printf("%s\n",no_ktp[i]);
        printf("%s\n",calon[i]);
    }
    return 0;
}
