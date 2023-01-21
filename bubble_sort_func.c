 void swap(int *a, int *b) {
     int temp = *a;
     *a = *b;
     *b = temp;
 }
 
 int main(){
        int array[11] = {96,85,1,2,34,5,45,74,25,12,6};
        int i,j;
        for(i=0; i<10; i++){
            for(j=0; j<10-i; j++){
                if(array[j] > array[j+1]){
                    swap(&array[j+1], &array[j]);
                }
            }
        }
        for(i=0; i<11; i++){
            printf("%d ", array[i]);
        }
        return 0;
    }
     
