#include <stdio.h>

int main()
{
    int p, c, m;
    float avg;

    printf("Enter Physics marks: ");
    scanf("%d", &p);

    printf("Enter Chemistry marks: ");
    scanf("%d", &c);

    printf("Enter Maths marks: ");
    scanf("%d", &m);

    avg = (p + c + m) / 3.0;

    printf("\nAverage marks = %.2f", avg);

    (avg >= 50) ?
    printf("\nEligible for admission") :
    printf("\nNot eligible for admission");

    return 0;
}