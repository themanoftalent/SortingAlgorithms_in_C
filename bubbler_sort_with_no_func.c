#include "stdlib.h"
#include "stdio.h"

int main() {
    int i,j,temp;
    int dizi[5] = {5,4,3,2,1};
    
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            if(dizi[i] < dizi[j]) {
                temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
            }
        }
    }
    
    for(i=0; i<5; i++) {
        printf("%d ",dizi[i]);
    }
    
    return 0;
}
