void menuAll() {
    int menu;
	
    do {
            printf("\n\n");
            printf("Anda adalah Pelanggan VIP anda bisa menggunakan semua fitur dibawah :\n");
            printf("Fitur-fitur yang disediakan oleh aplikasi :\n");
            printf("1. Olah Kata\n");
            printf("2. Olah Angka\n");
            printf("3. Keluar\n");
            printf("========================\n");
            printf("Pilih Menu: "); scanf("%d", &menu);
        switch(menu) {
            case 1:
                menuKataers();
                break;
            case 2:
                menuAngkaers();
                break;
            case 3:
                break;
        }
        
        } while (menu != 3);
            
        return;
}

// void menuSatu() {
// 	printf("Ini Menu Satu\n\n");
// }

// void menuDua() {
// 	printf("Ini Menu Dua\n\n");
// }

// void menuTiga() {
// 	printf("Ini Menu Tiga\n\n");
// }