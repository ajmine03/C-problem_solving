#include <stdio.h>
int main()
{
    float A, B;
    scanf("%f", &A);
    scanf("%f", &B);
    // float C = (A * 3.5 + B * 7.5) / (3.5 + 7.5);
    printf("MEDIA = %.5f\n", ((A * 3.5 + B * 7.5) / ( 3.5 + 7.5 )));

    return 0;
}