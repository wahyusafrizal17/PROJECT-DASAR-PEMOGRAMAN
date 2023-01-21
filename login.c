#include <stdio.h>
#include <string.h>
#include "function/kata.c"
#include "function/angka.c"
#include "menu/angka.c"
#include "menu/kata.c"
#include "menu/semua.c"

char username[10], pass[10];

void main(){
	
	printf("Masukan Username anda\t: ");
	scanf("%s", &username);
	printf("Masukan Password anda\t: ");
	scanf("%s", &pass);

	if((strcmp(username,"dayat")==0 && strcmp(pass,"kataers")==0)){
			menuKataers();
			return 0;
	}
	else if((strcmp(username,"wahyu")==0 && strcmp(pass,"angkaers")==0)){
			menuAngkaers();
			return 0;
	}
	else if((strcmp(username,"alma")==0 && strcmp(pass,"allers")==0)){
		menuAll();
		return 0;
	}else{
		printf("\nUsername / Password yang anda masukan salah\n");
		system("pause");
		exit(1);
	}
	
}
