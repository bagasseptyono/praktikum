#include <stdio.h>
#include <stdlib.h>
using namespace std;

#define maks 100	
typedef struct
{
	char nama[30];
	long int npm;
	char jurusan[15];
}data_mahasiswa;
data_mahasiswa mahasiswa[3];


void inputmahasiswa( data_mahasiswa mahasiswa[3]){
	for (int i=1;1<3;i++){
		printf("Masukkan nama : \n");
		scanf("%s",&mahasiswa[i].nama);
		printf("Masukkan npm : \n");
		scanf("%i",&mahasiswa[i].npm);
		
	}
}
main()
{
	data_mahasiswa mahasiswa[3];
	inputmahasiswa(mahasiswa);
	printf("Masukkan batas deret : %s",mahasiswa[1].nama);
	
	
	return 0;

}

