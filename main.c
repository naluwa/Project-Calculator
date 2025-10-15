#include <stdio.h>
#include <stdlib.h>

int functionadd(int a, int b);
int functionsub(int a, int b);
int functionmulti(int a, int b);
int functiondivision(int a, int b);
int functionexpo(int a, int b);
int functionFact(int a);

int main()
{
    int choice,result,a,b;
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

    do {
            switch(choice){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        default:
            printf("Invalid choice.. Try again");

            }

    }while(choice != 7);
    return 0;
}
