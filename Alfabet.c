#include"stdio.h"
 int main(){
 	int i,j,k;
 	char alfabet='a',n;
 	printf("En son hangi Harf olsun? ");
 	scanf("%c",&n);
 	
 	for(i=0;i<=(n-'a');i++){
 		for(j=0;j<=i;j++){
 			printf("%c",alfabet);
		 }
 		printf("\n");
 		alfabet++;
	 }
	 return 0;
 }
