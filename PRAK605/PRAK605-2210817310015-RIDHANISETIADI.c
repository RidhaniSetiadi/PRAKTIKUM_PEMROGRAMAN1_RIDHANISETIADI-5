#include <stdio.h>
int main(void){
    int x, y, z, ordo, isi, hasil;
    scanf("%d", &ordo);
    int MatriksA[ordo][ordo],MatriksB[ordo][ordo];
    printf("Matriks A\n");
    for(x=0; x<ordo; x++){
        for(y=0; y<ordo; y++){
            scanf("%d", &isi);
            MatriksA[x][y]= isi;
        }
    }
    printf("Matriks B\n");
    for(x=0; x<ordo; x++){
        for(y=0; y<ordo; y++){
            scanf("%d", &isi);
            MatriksB[x][y]= isi;
        }
    }
    printf("Matriks AXB\n");
    for(x=0; x<ordo; x++){
        for(y=0; y<ordo; y++){
            for(z=0, hasil=0; z<ordo; z++){
                hasil+= MatriksA[x][z] * MatriksB[z][y];
            }
            printf("%d ", hasil);
        }
        printf("\n");
    }
}