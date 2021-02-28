
#include <stdio.h>
#include "number.h"
#define MAX 100

void write_array(int *array,int *len){
    printf("Enter the len array : ");
    do{
        scanf("%d", &*len);
        if(*len <= 0 || *len > MAX){
            printf("Enter the len array : ");
        }
    }while(*len <= 0 || *len > MAX);
    
    for(int i=0;i<*len;i++){
        printf("array[%d] = ",i);scanf("%d",&array[i]);
    }
}


void show_array(int *array,int len){
    printf("\nThe array : ");
    for(int i=0;i<len;i++){
        printf("\narray[%d] = %d",i,array[i]);
    }
}

void show_sum(int *array,int len){
    int sum = 0;
    for(int i=0;i<len;i++){
        sum += array[i];
    }
    printf("\nThe sum : %d",sum);
    sum = 0;
    for(int i=0;i<len;i++){
        if(array[i]%2 == 0){
            sum += array[i];
        }
    }
    printf("\nThe even sum : %d",sum);
    sum = 0;
    for(int i=0;i<len;i++){
        if(array[i]%2 == 1){
            sum += array[i];
        }
    }
    printf("\nThe odd sum : %d",sum);
}

void show_square_number(int *array,int len){
    int sum = 0;
    for(int i=0;i<len;i++){
        sum += array[i];
    }
    printf("\nThe sum : %d",sum);
    sum = 0;
    for(int i=0;i<len;i++){
        if(array[i]%2 == 0){
            sum += array[i];
        }
    }
    printf("\nThe even sum : %d",sum);
    sum = 0;
    for(int i=0;i<len;i++){
        if(array[i]%2 == 1){
            sum += array[i];
        }
    }
    printf("\nThe odd sum : %d",sum);
}



int main(){
    int array[MAX];
    int len_array;

    write_array(array,&len_array);
    show_array(array,len_array);
    show_sum(array,len_array);

    return 1;
}