// put in order 96 85 1 2 34 5 45 74 25 12 6
#include <stdio.h>

 int main() {

 	int sayilar[11]={96 ,85 ,1 ,2 ,34, 5 ,45 ,74 ,25 ,12 ,6},i,j,gecici; 


 	for(i=0; i<11; i++) {

 		for(j=0; j<11; j++) {
 			if(sayilar[i]<sayilar[j]) {

 				gecici = sayilar[i]; 
 				sayilar[i] = sayilar[j]; 
 				sayilar[j] = gecici;

 			}

 		}

 	}

 	for(i=0; i<11; i++) {

 		printf("%d ",sayilar[i]);

 	}

 	return 0;
 }

#include "stdlib.h"
#include "stdio.h"

int main() {
    int i,j,temp;
    int dizi[11] = {96,85,1,2,34,5,45,74,25,12,6};
    
    for(i=0; i<11; i++) {
        for(j=0; j<11; j++) {
            if(dizi[i] < dizi[j]) {
                temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
            }
        }
    }
    
    for(i=0; i<11; i++) {
        printf("%d ",dizi[i]);
    }
    
    return 0;
}
