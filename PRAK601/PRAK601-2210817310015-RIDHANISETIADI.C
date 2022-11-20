#include<stdio.h>
int main(void)
{
    int baris,kolom,a,b,isi ;
    scanf("%d %d", &baris, &kolom);
    int angka[baris][kolom] ;
    for (a = 0; a < baris; a++){
        for(b = 0; b < kolom; b++){
            scanf("%d", &isi) ;
            angka[a][b] = isi ;
        }
    }
    for (a = 0; a < baris; a++){
        for(b = 0; b < kolom; b++){
            printf("%d ", angka[a][b]) ;
    }
    printf("\n");
    }
}
