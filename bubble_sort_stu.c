// put in order 96 85 1 2 34 5 45 74 25 12 6

#include"stdio.h"

int main(){
	int i,j,temp;
	int arr[11]={96,85,1,2,34,5,45,74,25,12,6};
	
	for(i=0;i<11;i++){
		for(j=0;j<11;j++){
			if(arr[i]<arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<11;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
