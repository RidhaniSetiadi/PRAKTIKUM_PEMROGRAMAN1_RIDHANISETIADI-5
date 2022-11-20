#include<stdio.h>
int main(void){
    int kolom,isi,a;
    scanf("%d",&kolom);
    int angka[kolom];
    for (a = 0; a<kolom; a++){
        scanf("%d",&isi);
        angka[a] = isi ;}
    for (a =0;a<kolom;a++){
        printf("%d ",angka[a] * (a + 1)); }    
}