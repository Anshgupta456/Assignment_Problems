#include <stdio.h>
int main(){
    int num;
    int temp;
    int sum = 0;
    printf("Enter the number = ");
    scanf("%d", &num);
    temp = num; //storing the number in another variable

    while (num != 0){
        sum = sum + (num % 10) * (num % 10) * (num % 10); //main formula 
        num = num/10;
    }

    if(sum == temp){  //comparing if number after applying formula is equal or not
        printf("%d is an Armstrong Number", temp); 
    }
    else{
        printf("%d is not an Armstrong Number", temp);
    }
    return 0;
}