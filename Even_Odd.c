#include <stdio.h>

int main() 
{
    int number;
    //Ask the users for a number of their choice
    printf("Enter a number: ");
    scanf("%d", &number);

 //check if the the number is even or odd
 if(number % 2 == 0) {
    printf("%d is an even number. \n", number);
 }else{
    printf("%d is an odd number. \n", number);
 }

 return 0;
}