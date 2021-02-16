/*********************************************************************************
*Fizz Buzz Test                                                                  *
* Write a program that prints the numbers 1 to 100 but for multiples of three,   *
* print "Fizz" instead of the number and for the multiples of five, print "Buzz".*
* For numbers which are multiples of bthree and five print "FizzBuzz"            *
**********************************************************************************/
#include <stdio.h>

/***********************************************************************
*fizz_buzz1:
* Some repetition for the neither case (checks divisibility by 3 twice).
* Single for loop with 2 if statements and an else if.
* No explicit both case because the two if statements can both produce 
*  their ouputs resulting in FizzBuzz.
************************************************************************/
void fizz_buzz1(){
   for (int i = 1; i<=100; i++){
        if (i%3==0) {
            printf("Fizz");
        }
        if (i%5==0){
            printf("Buzz");
        } else if (i%3!=0){
            printf("%d",i);
        }
        printf(", ");
    } 
}

/***********************************************************************
*fiz_buzz2:
* Same idea as fizz_buzz1 except uses a swith statement instead of if 
*  else statements. The ability to control when to break or continue 
*  checking the cases enables the elimination of repititive checking. 
************************************************************************/
void fizz_buzz2(){
    for (int i = 1; i<=100; i++){
        switch(i){
            case i%3==0:
                printf("Fizz");
            case i%5==0:
                printf("Buzz");
                break;
            default:
                printf("%d", i);
                break;
        }
        printf(", ")
    }
}