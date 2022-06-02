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
data_mahasiswa mahasiswa[maks]; 

void inputmahasiswa( struct data_mahasiswa mhs[1]){
	printf("Masukkan : ");
	scanf("%[^\n]"mhs.nama[1]);
	
	
	
}
main()
{
	inputmahasiswa();
	printf("Masukkan batas deret : %s",mhs.nama[1]);

}

