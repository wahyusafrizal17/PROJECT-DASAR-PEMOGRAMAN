#include <math.h>

void konversiAngka(){

    long int D;
    unsigned long int Mulai, B;

    printf("## Program Bahasa C Konversi Angka ke Biner ## \n");
    printf("=========================================== \n\n");

    printf ("Masukkan bilangan :");scanf ("%ld",&D);

    printf ("\n");

    printf("Nilai binernya =");
    Mulai=pow(2,sizeof(D)*8-1);
    
    for (B=Mulai;B>0;B=B/2)
    if ((D&B)==B)printf("l");
    else printf("0");
    printf ("\n");
    printf ("nilai hexadesimalnya = %lx\n",D);
}

void faktorial(){
    printf("## Program Bahasa C Menghitung Faktorial ## \n");
    printf("=========================================== \n\n");
    
    int angka,hasil,i;
    
    printf("Input angka: ");
    scanf("%d",&angka);
    
    hasil = 1;
    for(i=1; i<=angka; i++) {
        hasil = hasil * i;
    }
    printf("%d! = %d \n",angka, hasil);
    
}

void urutAngka(){

    printf("## Program Bahasa C Konversi Angka ## \n");
    printf("=========================================== \n\n");

    int i,j,n,t, A[100];
    printf("Masukkan banyak data : "); scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("Data %d = ", i); scanf("%d", &A[i]);
    }

    for(i=1; i<=(n-1); i++)
    {
        for(j=n; j>=(i+1); j--)
        {
            if(A[j-1]>A[j])
            {
                t=A[j-1];
                A[j-1] = A[j];
                A[j] = t;
            }
        }
    }

    printf("\nUrutannya adalah : ");
    for(i=1; i<=n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");


}
