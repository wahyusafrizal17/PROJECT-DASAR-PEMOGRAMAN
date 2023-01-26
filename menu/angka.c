void menuAngkaers() {
    int menu;
	
    do {
            printf("\n\n");
            printf("Selamat Datang Di Aplikasi DAD W/ D&W. \n\n");
            printf("Fitur-fitur olah angka yang disediakan oleh aplikasi :\n");
            printf("1. Konversi Angka\n");
            printf("2. Faktorial\n");
            printf("3. Urut Angka\n");
            printf("4. Keluar\n");
            printf("========================\n");
            printf("Pilih Menu: "); scanf("%d", &menu);
        switch(menu) {
            case 1:
                konversiAngka();
                break;
            case 2:
                faktorial();
                break;
            case 3:
                urutAngka();
                break;
            case 4:
                login();
                break;
        }
        } while (menu != 4);
            
        // return 0;
}