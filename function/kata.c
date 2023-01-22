void hitungHuruf(){
    char kalimat[100];
    int jumlahKarakter;

    printf("## Program Bahasa C Menghitung Huruf## \n");
    printf("=========================================== \n\n");

    printf("Input String : ");
    scanf("%s", &kalimat);

     jumlahKarakter = strlen(kalimat);
     printf("Jumlah Karakter : %d", jumlahKarakter);

     getch();
    //  return 0;
}

void ubahHuruf()
{
    int i = 0;
    char input[50];
    char c;

    printf("Masukkan kata: ");
    scanf("%s", &input);


    while(input[i])
    {
        c=input[i];
        putchar(toupper(c));
        i++;
    }
    // return 0;
}

void balikHuruf()
{
  char huruf[100], hasil[100];
  int i, jumlahstring, jumlah = 0;

  printf("Masukkan sebuah string: ");
  scanf("%s", &huruf);

  while (huruf[jumlah] != '\0'){
    jumlah++;
  }

  jumlahstring = jumlah - 1;

  for (i = 0; i < jumlah; i++){
    hasil[i] = huruf[jumlahstring];
    jumlahstring--;
  }

  hasil[i] = '\0';

  printf("Hasil reverse string: %s \n", hasil);

  // return 0;
}