#include <stdio.h>

struct employee {
    char name[50];
    int hireDate;
    float salary;
};

int main() {
     struct employee emp1 = {"John Doe", 20210101, 50000.50};

    struct employee emp2;

    // Print the employee details
    printf("Employee Name: %s\n", emp1.name);
    printf("Hire Date: %d\n", emp1.hireDate);
    printf("Salary: %.2f\n", emp1.salary);

    printf("Write employee name: \n");

    scanf("%[^\n]", emp2.name);
    
    if (emp2.name != 

    printf("Write hire date:\n");

    scanf("%d", &emp2.hireDate);

    printf("Write salary:\n");

    scanf("%f", &emp2.salary);

    printf("\nEmployee Information:\n");
    printf("Name: %s\n", emp2.name);
    printf("Hire Date: %d\n", emp2.hireDate);
    printf("Salary: %.2f\n", emp2.salary);

    return 0;
}
