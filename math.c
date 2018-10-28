/* MathMenu.c -- interactive c program used as a calculator*/
#include <stdio.h>
#include <ctype.h>

/* function prototypes */
float addition (void);
float substraction (void);
float multiplication(void);
float division(void);
char getchoice();
char getfirst();

int main(void)
{
    char choice ;
    while((choice = getchoice()) != 'q'){
        switch(choice)
        {
            case 'a' :
            puts("Addition!");
            addition();
            break;

            case 'b' :
            puts("Substraction");
            substraction();
            break;

            case 'c':
            puts("Division");
            division();
            break;

            case 'd' :
            puts("Multiplication");
            multiplication();
            break;

            default :
            printf("Program Error\n");
            break;
        }
    }// end while

    return 0;

} // end main

/*------------------------------------------------------------------------*/
char getchoice(){

    char input;

    printf("Enter the letter of your choice (q to quit):\n");
    printf("a. Addition b. Substraction \n");
    printf("c. Division  d. Multiplication \n"
    "q. quit\n");
    printf("Enter your choice (q to quit): ");
    input = getfirst();

    while( (input < 'a' || input > 'd') && input != 'q'){
        printf("Please respond with a, b, c, or q.\n");
        input = getfirst();
        }

    return input;
} // end getchoice

char getfirst() // this deals with the newline character
{
    char ch;
    ch = getchar();

    while (getchar() != '\n' && getchar() != '\t' && getchar() != ' ' && getchar() != ' ')
        continue;

    return ch;
}

/*------------------------------------------------------------------------*/
float addition()
{
    float number1 , number2;
    float total = 0 ;

    printf("Enter the numbers you would like to sum (q to quit) : ");
    while(scanf("%f%f",&number1,&number2) == 2 )
    {
        total =  number1 + number2;
        printf("The sum of %.2f and %.2f = %.2f\n",number1,number2,total);
        printf("Another set (q to quit) : " );
    }
    getfirst();
    return total;
} // end function addition

/*------------------------------------------------------------------------*/
float substraction(void)
{
    float number1 , number2;
    float total = 0 ;

    printf("Enter the numbers you would like to sum (q to quit) : ");
    while(scanf("%f%f",&number1,&number2) == 2 )
    {
        total =  number1 - number2;
        printf("The Difference of %.2f and %.2f = %.2f\n",number1,number2,total);
        printf("Another set (q to quit) : " );

    }
    getfirst();
    return total;
} // end function addition

/*------------------------------------------------------------------------*/
float division()
{
    float number1 , number2;
    float total = 0 ;

    printf("Enter the numbers you would like to sum (q to quit) : ");
    while(scanf("%f%f",&number1,&number2) == 2 )
    {
        if(number2 == 0){
            printf("Math Error");
            continue;
        }
        total =  number1 / number2;
        printf("The division of %.2f and %.2f = %.2f\n",number1,number2,total);
        printf("Another set (q to quit) : " );
    }
    getfirst();
    return total;
} // end function addition

/*------------------------------------------------------------------------*/
float multiplication()
{
    float number1 , number2;
    float total = 0 ;

    printf("Enter the numbers you would like to sum (q to quit) : ");
    while(scanf("%f%f",&number1,&number2) == 2 )
    {
        if(number2 == 0 ){
            total = 0;
        }
        total =  number1 * number2;
        printf("The product of %.2f and %.2f = %.2f\n",number1,number2,total);
        printf("Another set (q to quit) : " );
    }
    getfirst();
    return total;
} // end function addition
