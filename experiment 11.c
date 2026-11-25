#include <stdio.h>

int main()
{
    FILE *fp;
    int id;
    char name[20];
    float salary;

    fp = fopen("employee.txt", "w");

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Employee Salary: ");
    scanf("%f", &salary);

    fprintf(fp, "%d %s %.2f", id, name, salary);

    fclose(fp);

    fp = fopen("employee.txt", "r");

    fscanf(fp, "%d %s %f", &id, name, &salary);

    printf("\nEmployee Details\n");
    printf("ID = %d\n", id);
    printf("Name = %s\n", name);
    printf("Salary = %.2f\n", salary);

    fclose(fp);

    return 0;
}