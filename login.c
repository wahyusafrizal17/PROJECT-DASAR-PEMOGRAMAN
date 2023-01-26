#include <stdio.h>
#include <string.h>
#include "function/kata.c"
#include "function/angka.c"
#include "menu/angka.c"
#include "menu/kata.c"
#include "menu/semua.c"

char username[10], pass[10];

void readPass(char *);

void main(){
	
	printf("Masukan Username anda\t: ");
	scanf("%s", &username);
	printf("Masukan Password anda\t: ");
	// scanf("%s", readPass(pass));
	readPass(pass);

	if((strcmp(username,"dayat")==0 && strcmp(pass,"kataers")==0)){
			menuKataers();
			return;
	}
	else if((strcmp(username,"wahyu")==0 && strcmp(pass,"angkaers")==0)){
			menuAngkaers();
			return;
	}
	else if((strcmp(username,"alma")==0 && strcmp(pass,"allers")==0)){
			menuAll();
			return;

	}else{
		printf("\nUsername / Password yang anda masukan salah\n");
		login();
	}
	
}

void login(){
	printf ("\n");
	main();
}

void readPass(char *temp) {
    int key = 0, index = 0;
 
    do {
        key = getch(); /* Simpan karakter yang ditekan ke dalam variabel key */
 
        switch (key) {
             
                /* 0 adalah kode awal untuk tombol fungsi (function key), seperti F1, F2, ..., F12 
                 * Misalkan jika tombol F1 ditekan, maka fungsi getch akan mengembalikan
                 * nilai 0 dan menyimpan sebuah kode yang menandakan tombol F1 ditekan ke buffer.
                 */
            case 0:
 
                /* 224 adalah kode awal untuk tombol panah, home, page up, page down, end dan lain-lain. 
                 * Misalkan jika tombol panah ditekan, fungsi getch akan 
                 * mengembalikan nilai 224 dan menyimpan sebuah kode
                 * yang menandakan tombol yang ditekan ke buffer.
                 */
            case 224:
                 
                /* Fungsi getch di sini digunakan untuk membersihkan buffer */
                getch();
 
                break;
                 
                /* Jika tombol back space ditekan, maka mundurkan cursor satu langkah */
            case '\b':
                if (index > 0) {
                    index = index - 1; /* Kurangi index temp sebesar 1 */
                    temp[index] = 0; /* set temp[index] menjadi kosong (NUL) */
 
                    printf("\b \b"); /* Mundurkan cursor satu langkah */
                }
 
                break;
            default:
                 
                /* Hanya karakter printable yang dapat ditekan, seperti huruf, angka dan karakter spesial */
                if (key > 31 && key < 127) {
                    temp[index] = key; /* Simpan karakter ke dalam temp[index] */
                    index = index + 1; /* Naikkan nilai index sebesar 1 */
 
                    printf("*");
                }
        }
 
        /* 13 adalah kode ASCII untuk karakter enter.
         * Perulangan akan terus dilakukan sampai tombol enter ditekan.
         */
    } while (key != 13);
     
    /* Menambahkan NUL di akhir temp yang menandakan akhir dari sebuah string */
    temp[index] = '\0';
}