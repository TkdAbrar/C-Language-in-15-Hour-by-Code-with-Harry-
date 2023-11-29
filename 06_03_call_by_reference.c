#include <stdio.h>

void wrong_Swap(int a, int b);
void Swap(int *a, int *b);
int main()
{
    int x = 3, y = 4;
    printf("The value of x and y before swap is %d and %d\n", x, y);
    // wrong_Swap(x, y); // Will not work due to call by value
    Swap(&x, &y); // Will  work due to call by reference
    printf("The value of x and y after swap is %d and %d\n", x, y);
    return 0;
}
void wrong_Swap(int a, int b) // Address
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void Swap(int *a, int *b) // int * store the value of the address
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Logic of Swap
// Example by Table
// [a = 3]   [b = 4]    [temp]
// [a = 3]   [b = 4]    [temp = 3]
// [a = 4]   [b = 4]    [temp = 3]
// [a = 4]   [b = 3]    [temp = 3]