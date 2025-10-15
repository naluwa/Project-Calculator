#include <stdio.h>
#include <stdlib.h>

int functionAdd(int a, int b);
int functionSub(int a, int b);
int functionMulti(int a, int b);
int functionDiv(int a, int b);
int functionExpo(int a, int b);
int functionFact(int a);

int main()
{
    int choice,result,a,b;
    do{
    printf("------Calculator Menu------\n\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exponentiation\n");
    printf("6.Factorial\n");
    printf("7.Exit\n\n");
    printf("---------------------------\n\n");
    printf("Enter your choice :");
    scanf("%d", &choice);


            switch(choice){
        case 1:
           printf("\nEnter the number 1 : ");
           scanf("%d",&a);
           printf("Enter the number 2 : ");
           scanf("%d",&b);
           result = functionAdd(a,b);
           printf("Addition of %d and %d is %d\n\n",a,b,result);
            break;

        case 2:
           printf("\nEnter the number 1 : ");
           scanf("%d",&a);
           printf("Enter the number 2 : ");
           scanf("%d",&b);
           result = functionSub(a,b);
           printf("Subtraction of %d and %d is %d\n\n",a,b,result);

            break;

        case 3:
           printf("\nEnter the number 1 : ");
           scanf("%d",&a);
           printf("Enter the number 2 : ");
           scanf("%d",&b);
           result = functionMulti(a,b);
           printf("Multiplication of %d and %d is %d\n\n",a,b,result);

            break;
        case 4:
           printf("\nEnter the number 1 : ");
           scanf("%d",&a);
           printf("Enter the number 2 : ");
           scanf("%d",&b);
           result = functionDiv(a,b);
           printf("Division of %d and %d is %d\n\n",a,b,result);
            break;
        case 5:
           printf("\nEnter the base : ");
           scanf("%d",&a);
           printf("Enter the exponent : ");
           scanf("%d",&b);
           result = functionExpo(a,b);
           printf("%d into the power %d is %d\n\n",a,b,result);
            break;
        case 6:
           printf("\nEnter the number  : ");
           scanf("%d",&a);
           result = functionFact(a);
           printf("Factorial of %d is %d\n\n",a,result);

            break;
        case 7:
            printf("\nExiting...");

            break;
        default:
            printf("\nInvalid choice.. Try again");

            }

    }while(choice != 7);
    return 0;
}

int functionAdd(int a, int b){
int result = a + b;
return result;
}

int functionSub(int a, int b){
int result = a - b;
return result;
}

int functionMulti(int a, int b){
int result = a * b;
return result;
}

int functionDiv(int a, int b){
int result = a / b;
return result;
}

int functionExpo(int a, int b){
int result = 1;
for(int i=1;i<=b;i++){
    result *= a;
}
return result;
}

int functionFact(int a){
int fact = 1;
for(int i=1; i<=a ;i++){
    fact *= i;
}
return fact;
}
