#include <stdio.h>
#include <string.h>
#include "menu.c"
#include "kata.c"
// #include "angka.c"

char username[10], pass[10];

void main(){
	
	printf("Masukan Username anda\t: ");
	scanf("%s", &username);
	printf("Masukan Password anda\t: ");
	scanf("%s", &pass);
	if((strcmp(username,"dayat")==0 && strcmp(pass,"kataers")==0)){
			// printf("\nSelamat Datang Kataers\n");
			// printf("Anda bisa menggunakan semua fitur dibawah ini\t:\n");
			char warehouse[10] = "menuKata";
			print_all(warehouse);
			return 0;
	}
	else if((strcmp(username,"wahyu")==0 && strcmp(pass,"angkaers")==0)){
			// printf("\nSelamat Datang ANGKAERS\n");
			// printf("Anda bisa menggunakan semua fitur dibawah ini\t:\n");
			char warehouse[10] = "menuAngka";
			print_all(warehouse);
			return 0;
	}
	else if((strcmp(username,"alma")==0 && strcmp(pass,"allers")==0)){
		// printf("\nSelamat Datang ALLERS\n");
		// printf("Anda bisa menggunakan semua fitur dibawah ini\t:\n");
		char warehouse[10] = "menuSemua";
		print_all(warehouse);
		return 0;
	}else{
		printf("\nUsername / Password yang anda masukan salah\n");
		system("pause");
		exit(1);
	}
	
}
