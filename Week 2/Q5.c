#include <stdio.h>

void main(){
    int a1len, i; 
    printf("Enter Length of A1: "); 
    scanf("%d", &a1len);
    int arr1[a1len], arr2[a1len];
    for(i = 0; i < a1len; i++)
    {
        printf("enter a1 values: "); 
        scanf("%d", &arr1[i]);
    }
    for(i = 0; i < a1len; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("the other array : \n"); 
    for(i = 0; i < a1len; i++)
    {
        printf("%d", arr2[i]);
    }
}