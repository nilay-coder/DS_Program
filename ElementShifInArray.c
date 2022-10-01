#include <stdio.h>
#include <stdlib.h>

void main(){
    int array[] = {1,2,3,4,5};
    for(int i = 0 ; i <5 ; i ++){
        printf("%d\t = %d \n",i,array[i]);
    }
    for (int i = 0; i < 5; i++){
        array[i] = array[i+1];
    }
    printf("Array after swap\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t = %d \n", i, array[i]);
    }
}