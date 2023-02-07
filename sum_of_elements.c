#include <stdio.h>
int main(){
    int size;
    int arr[5];
    int sum = 0;
    printf("Enter the size of array = ");   
    scanf("%d", &size);     //declaring size of the array
    printf("Enter the elements of an Array\n");
    for(int i = 0; i < size; i++){      //loop for taking elements of array
        scanf("%d", &arr[i]);
    }

    printf("Elements of array = ");
    for(int j = 0; j < size; j++){
        printf("%d \t", arr[j]);    //printing elements of array
        sum = sum + arr[j];         //adding elements of array
    }
    printf("\nSum of elements of array is %d", sum);
    return 0;
}