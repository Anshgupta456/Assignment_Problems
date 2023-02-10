#include <stdio.h>
#include <math.h>
int main(){
    int num;
    int temp;
    int sum = 0;
    int count = 0;
    printf("Enter the number = ");
    scanf("%d", &num);
    temp = num; //storing the number in another variable

    while (num != 0){       //loop for counting the number of digits
        num = num/10;
        count++;
    }
    num = temp;             //in the end of while loop, number is becoming zero, so we equalize it to variable in which we have stored the value of number
    // int mod = num % 10;
    // int powr = pow(mod, count);
    while(num > 0){         
        int mod = num % 10;                 //mod is taking last digit of the number
        sum += pow(mod, count);             //pow(mod, count) is for raising the power of digits to number of digits
        num = num/10;
    }


    
    //******PREVIOUS LOGIC********
    // while (num != 0){
    //     sum = sum + (num % 10) * (num % 10) * (num % 10); //main formula 
    //     num = num/10;
    // } //153
    //*****working only for 3 digit number******



    if(sum == temp){  //comparing if number after applying formula is equal or not
        printf("%d is an Armstrong Number", temp); 
    }
    else{
        printf("%d is not an Armstrong Number", temp);
    }
    return 0;
}
