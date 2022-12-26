#include <stdio.h>
#include <stdlib.h>

int main() {
  
int numbers[11],i,j,a; 
  		for(i=0; i<11; i++) { 
  			printf("enter a number : "); 
 			scanf("%d",&numbers[i]);
 }
  	for(i=0; i<11; i++) { 
 		for(j=0; j<11; j++) { 
    		if(numbers[i]<numbers[j]) { 
 
 		a = numbers[i]; 
 		numbers[i] = numbers[j]; 
 		numbers[j] = a; 
 }}}
  	for(i=0; i<11; i++) {
 		printf("%d ",numbers[i]);
 }
	
	return 0;
}
