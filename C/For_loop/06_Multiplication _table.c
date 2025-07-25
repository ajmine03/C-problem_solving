/*6. Multiplication Table for a Given Integer

Write a program in C to display the multiplication table for a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    return 0;
}