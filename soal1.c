//RAFA SATRIA PRATAMA - 13224074
//SOAL 1 - MENARA LAMPU
//14/04/2026

#include <stdio.h>

int main(){
    int a;
    
    scanf("%d", &a);
    printf("\n");

    for (int i = 1; i < a+1; i++){
        if (i % 2 == 0 && i % 3 == 0){
            printf("BIRU\n");
        }else if (i % 3 == 0){
            printf("MERAH\n");
        }else if (i % 2 == 0){
            printf("KUNING\n");
        }else if (i >= 10 && i % 2 == 0){
            printf("HIJAU\n");
        }else{
            printf("%d\n", i);
        }
    }

    return 0;
}
