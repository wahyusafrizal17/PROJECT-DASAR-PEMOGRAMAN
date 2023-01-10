#include <stdio.h>

char username[10], pass[10];

void mainmenu(menu){
	if(menu == "menu1"){
		printf("Semua Menu");
	}else if(menu == "menu2"){
		printf("Menu2");
	}else if(menu == "menu3"){
		printf("Menu3");
	}
}

void main(){
	
	printf("Masukan Username anda\t: ");
	scanf("%s", &username);
	printf("Masukan Password anda\t: ");
	scanf("%s", &pass);
	if((strcmp(username,"alma")==0 && strcmp(pass,"allers")==0)){
		printf("\nSelamat Datang ALLERS\n");
		printf("Anda bisa menggunakan semua fitur dibawah ini\t:\n");
		mainmenu("menu1");
	}
	else if((strcmp(username,"dayat")==0 && strcmp(pass,"angkaers")==0)){
			printf("\nSelamat Datang ANGKAERS\n");
			printf("Anda bisa menggunakan semua fitur dibawah ini\t:\n");
			mainmenu("menu2");
	}
	else if((strcmp(username,"wayat")==0 && strcmp(pass,"kataers")==0)){
			printf("\nSelamat Datang KATAERS\n");
			printf("Anda bisa menggunakan semua fitur dibawah ini\t:\n");
			mainmenu("menu3");
	}else{
		printf("\nUsername / Password yang anda masukan salah\n");
		system("pause");
		exit(1);
	}
	
}
