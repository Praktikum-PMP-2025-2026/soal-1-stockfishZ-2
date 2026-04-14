//RAFA SATRIA PRATAMA - 13224074
//SOAL 1 - MENARA LAMPU
//14/04/2026

#include <stdio.h>


int main(){
    int N;
    
    scanf("%d", &N);

    for (int i = 1; i < N+1; i++){
        if (i % 2 == 0 && i % 3 == 0){
            printf("BIRU\n");
        }else if (i % 3 == 0){
            printf("MERAH\n");
        }else if (i % 2 == 0){
            printf("KUNING\n");
        }else if (i >= 10){
            int i_temp, a_temp, b_temp;
            i_temp = i;
            a_temp = i % 10;
            i_temp -= i % 10;
            b_temp = i_temp /10;

            if((a_temp + b_temp) % 2 == 0){
                printf("HIJAU\n");
            }else{
                printf("%d\n", i);
            }
        }else{
            printf("%d\n", i);
        }
    }

    return 0;
}
