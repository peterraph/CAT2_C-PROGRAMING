#include <stdio.h>

struct Employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    // Declare and initialize an Employee structure variable with specified data
    struct Employee emplo = {
        "John Doe",             // name
        12345,                  // id
        "Human resources",      // department
        55000.50,               // salary
        "johndoe@company.com"   // email
    };

    // Display the employee information
    printf("Employee Information:\n");
    printf("Name: %s\n", emplo.name);
    printf("ID: %d\n", emplo.id);
    printf("Department: %s\n", emplo.department);
    printf("Salary: %.2f\n", emplo.salary);
    printf("Email: %s\n", emplo.email);

    return 0;
}
