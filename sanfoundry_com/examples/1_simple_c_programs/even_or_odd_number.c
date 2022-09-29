#include <stdio.h>

// If-Else way

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d is a even number.\n", n);
    }
    else
    {
        printf("%d is a odd number.\n", n);
    }
    return 0;
}

// - - - - - - - - -

// Ternary way

// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     (n % 2 == 0) ? printf("%d is a even number.\n", n) : printf("%d is a odd number.\n", n);
//     return 0;
// }