#include <stdio.h>
int stack[10];
int top = -1;

int push(int stack[]);
int pop(int stack[]);
int peak(int stack[]);

int main(void)
{
    int choice;
    while (1)
    {
        printf("Choose an operation :\n");
        printf("1 to push, 2 to pop, 3 to peak, 4 to end\n");
        scanf("%i", &choice);
        if (choice == 1)
        {
            push(stack);
        }
        else if (choice == 2)
        {
            pop(stack);
        }
        else if (choice == 3)
        {
            peak(stack);
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            printf("Enter a valid choice!");
        }
    }
}

int push(int stack[])
{
    int n;
    if (top == 10)
    {
        printf("Stack Overflow\n");
        return 1;
    }
    printf("Enter a number : ");
    scanf("%i", &n);
    stack[top+1] = n;
    top+=1;
    return 0;
}



int pop(int stack[])
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return 1;
    }
    printf("Popped : %i\n", stack[top]);
    top-=1;
    return 0;
}


int peak(int stack[])
{
    if (top == -1)
    {
        printf("Stack Empty");
        return 1;
    }
    printf("Top element : %i\n", stack[top]);
}