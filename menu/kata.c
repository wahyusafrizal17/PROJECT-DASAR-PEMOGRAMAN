void menuKataers() {
    int menu;
	
    do {
            printf("\n\n");
            printf("Selamat Datang Di Aplikasi DAD W/ D&W. \n\n");
            printf("Fitur-fitur olah kata yang disediakan oleh aplikasi ini adalah :\n");
            printf("1. Hitung Huruf\n");
            printf("2. Ubah Huruf\n");
            printf("3. Balik Kalimat\n");
            printf("4. Keluar\n");
            printf("========================\n");
            printf("Pilih Menu: "); scanf("%d", &menu);
        switch(menu) {
            case 1:
                hitungHuruf();
                break;
            case 2:
                ubahHuruf();
                break;
            case 3:
                balikHuruf();
                break;
            case 4:
                login();
                break;
        }
        } while (menu != 4);
            
        // return 0;
        
}