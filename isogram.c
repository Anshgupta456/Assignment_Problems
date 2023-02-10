#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

int is_isogram(char str[30]){
    int n;
    //getting the length of string in variable n
    for(int i = 0; str[i] != '\0'; i++){
        n++;
    }
    //converting the string to lowercase
    for(int i = 0; i < n; i++){
        str[i] = tolower(str[i]);
    }
    //sorting string alphabetically
    for(int i = 0; i < strlen(str) - 1; i++){
        for(int j = i+1; j < strlen(str); j++){
            if(str[i] > str[j]){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    //comparing adjacent values
    for(int i = 0; i < n-1; i++){
        if(str[i] == str[i+1]){
            return false;
        }
        else{
            return true;
        }
    }
}
int main(){
    int n;
    char str[30];

    printf("enter the string = ");
    scanf("%s", &str);

    if(is_isogram(str)){
        printf("It is an isogram");
    }
    else{
        printf("It is not an isogram");
    }
    return 0;
    }
