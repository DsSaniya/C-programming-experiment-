#include <stdio.h>

int main()
{
    int a[5] = {10, 25, 7, 40, 15};
    int i, max;

    max = a[0];

    for(i = 1; i < 5; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    printf("Largest element = %d\n", max);

    return 0;
}