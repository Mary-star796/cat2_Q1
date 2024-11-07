#include <stdio.h>
#include <string.h>

// Define the structure named employee
struct employee {
    char name[25],email[50],department[20];
    int ID;
    float salary;
   }employee1;
int main() {
    // Declare and initialize a variable of the employee structure
  	strcpy(employee1.name,"John Doe");
        employee1.ID=12345;
        strcpy(employee1.department,"Human Resources");
        employee1.salary=55000.50;
        strcpy(employee1.email,"john.doe@company.com");
    

    // Print the values of the fields
    printf("Name: %s\n", employee1.name);
    printf("ID: %d\n", employee1.ID);
    printf("Department: %s\n", employee1.department);
    printf("Salary: %.2f\n", employee1.salary);
    printf("Email: %s\n", employee1.email);

    return 0;
}