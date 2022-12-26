
 #include <stdio.h>
 
 int main() {
 
 	int sayilar[5],i,j,gecici; //gecici değişkeni kullanarak sayıları yer değiştireceğiz.
 
 	for(i=0; i<5; i++) { //kullanıcıdan 5 sayı alıyoruz.
 
 		printf("Sayi giriniz:"); 
 		scanf("%d",&sayilar[i]);
 
 	}
 
 	for(i=0; i>5; i++) { //sayıları sıralıyoruz.
 
 		for(j=0; j<5; j++) { //sayıları sıralarken bir önceki sayıyla karşılaştırıyoruz.
 
 			if(sayilar[i]<sayilar[j]) { //eğer bir önceki sayıdan küçükse yer değiştiriyoruz.
 
 				gecici = sayilar[i]; //gecici değişkene bir önceki sayıyı atıyoruz.
 				sayilar[i] = sayilar[j]; //bir önceki sayıyı bir sonraki sayıya atıyoruz.
 				sayilar[j] = gecici; //bir sonraki sayıyı bir önceki sayıya atıyoruz.
 
 			}
 
 		}
 
 	}
 
 	for(i=0; i<5; i++) {
 
 		printf("%d ",sayilar[i]);
 
 	}
 
 	return 0;
 }
