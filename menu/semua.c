void menuAll() {
    int menu;
	
    do {
            printf("\n\n");
            printf("Fitur-fitur yang disediakan oleh aplikasi :\n");
            printf("1. Olah Kata\n");
            printf("2. Olah Angka\n");
            printf("3. Keluar\n");
            printf("========================\n");
            printf("Pilih Menu: "); scanf("%d", &menu);
        switch(menu) {
            case 1:
                menuSatu();
                break;
            case 2:
                menuDua();
                break;
            case 3:
                menuTiga();
                break;
            case 4:
                break;
        }
        } while (menu != 4);
            
        return 0;
}

void menuSatu() {
	printf("Ini Menu Satu\n\n");
}

void menuDua() {
	printf("Ini Menu Dua\n\n");
}

void menuTiga() {
	printf("Ini Menu Tiga\n\n");
}