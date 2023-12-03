#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define PI 3.14
double main()
{
    int choice,choice2;
    double number1,number2,result,val;

     printf("\n\n \t\t\t!!!  Welcome to the CALCULATOR program.  !!!\n");

     //Loop so that program will not terminate after 1 operation.
     //It allows us to perform various operation so that
    while (1 ){

    // Menu of functions that are included in this calculator program.
    printf("\n\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Percentage\n 6. Square root\n 7. Cube Root\n");
    printf(" 8. Power of a number\n 9. Exponential function\n 10. Sine of an angle\n 11. Cosine of an angle\n 12. Tangent of an angle\n");
    printf(" 13. Inverse of sin\n 14. Inverse of cos\n 15. Inverse of tan\n 16. Natural logarithm\n 17. Logarithm of base 10\n\n ");
    // Enter the number associated with the desired function.
    printf("\nEnter your choice: ");
    scanf("%d",&choice);

        //Use of switch statement to make various cases.
        switch(choice)
        {

            //Case for addition of two numbers.
        case 1:
            printf("\nEnter the numbers:\n");
            scanf("%lf %lf",&number1,&number2);
            result=number1+number2;
            printf("Sum= %0.2lf",result);
            break;

            //Case for subtraction of two numbers.
        case 2:
             printf("\nEnter the numbers:\n");
            scanf("%lf %lf",&number1,&number2);
            result=number1-number2;
            printf("Difference= %0.2lf",result);
            break;

            //Case for product of two numbers.
        case 3:
             printf("\nEnter the numbers:\n");
            scanf("%lf %lf",&number1,&number2);
            result=number1*number2;
            printf("Product= %0.2lf",result);
            break;

            //Case for Division of two numbers.
        case 4:
             printf("1. x/y\n2. y/x");
             printf("\n1 or 2\n");
             scanf("%d",&choice2);

             switch(choice2)
             {
             case 1:
                printf("Enter the numbers:\n");
                scanf("%lf %lf",&number1,&number2);
                if (number2==0)
                {
                    printf("\nDivisor cannot be zero. Enter valid number");
                }
                else
                {
                    result=number1/number2;
                    printf("\nDivision= %lf",result);
                }
                break;
             case 2:
                printf("Enter the numbers:\n");
                scanf("%lf %lf",&number1,&number2);
                if (number1==0)
                {
                    printf("\nDivisor cannot be zero. Enter valid number");
                }
                else
                {
                    result=number2/number1;
                    printf("\nDivision= %lf",result);
                }
             }
             break;

            //Case for Percentage
        case 5:
            printf("\nEnter numbers:\n ");
            scanf("%lf %lf",&number1,&number2);
            result=(number1*100)/number2;
            printf("%0.2lf is %0.2lf percent of %0.2lf",number1,result,number2);
            break;

            //Case for square root of a number.
        case 6:
            printf("\nEnter the number: ");
            scanf("%lf",&number1);
            result=sqrt(number1);
            printf("Square root of %0.2lf is %lf",number1,result);
            break;

            //Case for Cube root of a number.
        case 7:
            printf("\nEnter the number: ");
            scanf("%lf",&number1);
            number2=(1/3.0);
            result=pow(number1,number2);
            printf("Cube root of %0.2lf is %lf",number1, result);
            break;

            //Case for power of a number.
        case 8:
            printf("\nEnter base and power: ");
            scanf("%lf %lf",&number1,&number2);
            result= pow(number1,number2);
            printf("%0.2lf raised to %0.2lf is %0.2lf",number1,number2,result);
            break;

            //Case for exponential function(e^x)
        case 9:
             printf("\nEnter number: ");
            scanf("%lf",&number1);
            result=exp(number1);
            printf("%lf",result);
            break;

            //Sine function(sin(x))
        case 10:
            printf("\nEnter the angle in degrees: ");
            scanf("%lf",&number1);
            val=PI/180;
            result=sin(number1*val);
            printf("Sine of %0.2lf is %0.2lf",number1,result);
            break;

            //Cosine function(cos(x))
        case 11:
             printf("\nEnter the angle in degrees: ");
            scanf("%lf",&number1);
            val=PI/180;
            result=cos(number1*val);
            printf("cosine of %0.2lf is %0.2lf",number1,result);
            break;

            //Tangent function(tan(x))
        case 12:
             printf("\nEnter the angle in degrees: ");
            scanf("%lf",&number1);
            val=PI/180;
            result=tan(number1*val);
            if (number1==90 && number1==270)
            {
                printf("Result is infinity.");
            }
            else
            {
                printf("Tangent of %0.2lf is %0.2lf",number1,result);
            }
            break;

            //Inverse of sine(Sin^(-1)(x))
        case 13:
            printf("\nEnter the number: ");
            scanf("%lf",&number1);
            result=(asin(number1)*180)/PI;
            if (number1<(-1) && number1>1)
            {
                printf("Not in domain of the function");
            }
            else
            {
                printf("Sine Inverse of %lf in degrees is %lf",number1,result);
            }
            break;

             //Inverse of Cosine(Cos^(-1)(x))
        case 14:
            printf("\nEnter the number: ");
            scanf("%lf",&number1);
            result=(acos(number1)*180)/PI;
            if (number1<(-1) && number1>1)
            {
                printf("Not in domain of the function");
            }
            else
            {
                printf("Cosine Inverse of %lf in degrees is %lf",number1,result);
            }
            break;

             //Inverse of tangent(Tan^(-1)(x))
        case 15:
            printf("\nEnter the number: ");
            scanf("%lf",&number1);
            result=(asin(number1)*180)/PI;
            printf("Tangent Inverse of %lf in degrees is %lf",number1,result);
            break;

            //Natural Logarithm(ln(x))
        case 16:
            printf("\nEnter the number: \n");
            scanf("%lf",&number1);
            if(number1<0)
            {
                printf("Domain Error!!!");
            }
            else
            {
                result=log(number1);
                printf("Natural logarithm of %0.2lf is %lf",number1,result);
            }
            break;
            // Logarithm of base 10 (log(x))
        case 17:
            printf("\nEnter the number: \n");
            scanf("%lf",&number1);
            if(number1<0)
            {
                printf("Domain Error!!!");
            }
            else
            {
                result=log10(number1);
                printf("Base 10 logarithm of %0.2lf is %lf",number1,result);
            }
            break;

        default:
            printf("\nInvalid value!!!\nPlease enter a number between 1 and 17.");

        }

  }
}
