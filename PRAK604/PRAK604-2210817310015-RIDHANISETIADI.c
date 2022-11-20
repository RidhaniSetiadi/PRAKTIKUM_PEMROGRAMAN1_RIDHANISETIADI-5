#include <stdio.h>
#include <string.h>
int main(void){
    char kode[90],pesan[90];
    int x,y;
    scanf("%[^\n]%*c",&kode);
    scanf("%[^\n]%*c",&pesan);
    int Pkode=strlen(kode),Ppesan=strlen(pesan);
    if (Pkode != Ppesan){
        printf("Panjang kalimat berbeda,pesan palsu");
    }
    else{
        int x=0, y=0 ;
        for(int k=0;k<Pkode;k++){
            if(pesan[k]== ' ' && kode[k]== ' '){
                continue ;
            }
            else if(kode[k]!=pesan[k]){
                printf(" # ");
                x++;
            }
            else if(kode[k]==pesan[k]){
                printf(" * ");
                y++;
            }
        }
        printf("\n* = %i",y);
        printf("\n# = %i",x);
        if(x<=y){
            printf("\npesan Asli");
        }
        else{
            printf("\npesan Palsu");
        }
    }
    return 0;
}