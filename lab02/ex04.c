#include<stdio.h>

int main(void){
    int vet[10] ={1,2,3,4,5,6,7,8,9,10};

    for(int i=9;i>=0;i--){
        printf("%d ",*vet+i);
    }

    return 0;
}
