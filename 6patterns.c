#include<stdio.h>
//                 parallogram
int main (){
    int i,j,k;
    for (i=0; i<5; i++){
        for(j=0; j<=5-i-1; j++){
            printf(" ");
        }
        for(k=0; k<5; k++){
            printf("* ");
        }
        printf("\n");
    }
}

//             pyramid 
// int main(){
//     int i,j,k;
//     for (i=0; i<5; i++){
//         for (j=0; j<2*(5-i)-1; j++){
//             printf(" ");
//         }
//         for (k=0; k<2*i+1; k++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }