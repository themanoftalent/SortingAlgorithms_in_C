// put in order 96 85 1 2 34 5 45 74 25 12 6

#include<stdio.h>


int main()
{

int list[11]={96,85,1,2,34,5,45,74,25,12,6};

int i,j,temp;

for(i=0; i<11; i++)
{
    for(j=0; j<11; j++)
    {
        if(list[i]<list[j])
        {
            temp=list[i];
            list[i]=list[j];
            list[j]=temp;
        }
    }
}



for(i=0; i<11; i++)
{
    printf("%d ",list[i]);
}


    return 0;
}


