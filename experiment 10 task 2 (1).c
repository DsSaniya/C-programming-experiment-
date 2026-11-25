#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p;
    int i;

    p = &a[4];

    printf("Array in reverse order:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", *p);
        p--;
    }

    return 0;
}