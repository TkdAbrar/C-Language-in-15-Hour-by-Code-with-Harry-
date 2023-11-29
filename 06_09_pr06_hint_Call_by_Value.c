#include <stdio.h>
// CODE by BLACK Box AI
void wrong_Swap(int *a, int *b);
void Swap(int *a, int *b);
int main()
{
    int x = 3, y = 4;
    printf("The value of x and y before swap is %d and %d\n", x, y);
    wrong_Swap(&x, &y); // Now it will work due to call by pointer
    printf("The value of x and y after swap is %d and %d\n", x, y);
    return 0;
}
void wrong_Swap(int *a, int *b) // int * to get the address
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void Swap(int *a, int *b) // int * store the value of the address
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}