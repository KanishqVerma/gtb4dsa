#include <stdio.h>

int main(void)
{
    int num[10];
    int n;

    // Writing elements in array
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number : ");
        scanf("%i", &n);
        num[i] = n;
    }

    // Reading elements in array
    printf("Entered elements are : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%i\t", num[i]);
    }
    printf("\n");
    return 0;
}