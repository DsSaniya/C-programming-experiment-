#include <stdio.h>

int main()
{
    int choice, roll, m1, m2, m3, total;
    float per;

    printf("\n--- STUDENT RESULT MANAGEMENT ---");

    menu:
    printf("\n\n1. Enter Student Details");
    printf("\n2. Calculate Result");
    printf("\n3. Display Grade");
    printf("\n4. Exit");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &roll);

            printf("Enter marks of 3 subjects: ");
            scanf("%d %d %d", &m1, &m2, &m3);

            goto menu;

        case 2:
            total = m1 + m2 + m3;
            per = total / 3.0;

            printf("Total Marks = %d", total);
            printf("\nPercentage = %.2f", per);

            goto menu;

        case 3:
            if(per >= 75)
                printf("Grade A");
            else if(per >= 60)
                printf("Grade B");
            else if(per >= 50)
                printf("Grade C");
            else if(per >= 35)
                printf("Grade D");
            else
                printf("Fail");

            goto menu;

        case 4:
            printf("Thank You!");
            break;

        default:
            printf("Invalid Choice!");
            goto menu;
    }

    return 0;
}