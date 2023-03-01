#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    int a, b;
    printf("Select an arithmetic operation you want to perform:\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Reminder of division\n");
    scanf("%d", &choice);
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    switch(choice)
    {
      case 1:
        printf("Result of addition is %d", a+b);
        break;
      case 2:
        printf("Result of subtraction is %d", a-b);
        break;
      case 3:
        printf("Result of multiplication is %d", a*b);
        break;
      case 4:
        printf("Result of division is %d", a/b);
        break;
      case 5:
        printf("Reminder of division is %d", a%b);
        break;
    }
    return 0;
}
