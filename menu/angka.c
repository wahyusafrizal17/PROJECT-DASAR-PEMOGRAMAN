void menuAngkaers() {
    int menu;
	
    do {
            printf("\n\n");
            printf("Fitur-fitur olah angka yang disediakan oleh aplikasi :\n");
            printf("1. Konversi Angka\n");
            printf("2. Faktorial\n");
            printf("3. Urut Angka\n");
            printf("4. Keluar\n");
            printf("========================\n");
            printf("Pilih Menu: "); scanf("%d", &menu);
        switch(menu) {
            case 1:
                KonversiAngka();
                break;
            case 2:
                Faktorial();
                break;
            case 3:
                UrutAngka();
                break;
            case 4:
                break;
        }
        } while (menu != 4);
            
        return 0;
}