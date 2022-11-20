#include<stdio.h>
int main(void){
    int baris1, baris2, a,isi, hasil;
    scanf("%d %d", &baris1, &baris2);
    int angka1[baris1], angka2[baris2] ;
    if (baris1 == baris2){
        for (a = 0; a < baris1; a++){
            scanf ("%d", &isi);
            angka1[a] = isi ;
        }
        for (a = 0; a < baris2; a++){
            scanf ("%d", &isi);
            angka2[a] = isi ;
        }
        for (a = 0; a < baris1; a++){
            hasil = angka1[a] * angka2[a] ;
            printf ("%d ", hasil);
        }
    }
    else {
        printf ("Jumlah tidak sama") ;
    }
}
