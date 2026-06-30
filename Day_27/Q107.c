#include <stdio.h>

int main() {
    int empId;
    char empName[50];
    float basicSalary, hra, da, deduction, grossSalary, netSalary;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf("%s", empName);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    // Salary Components
    hra = basicSalary * 0.20;      // 20% HRA
    da = basicSalary * 0.10;       // 10% DA

    grossSalary = basicSalary + hra + da;

    printf("Enter Deductions: ");
    scanf("%f", &deduction);

    netSalary = grossSalary - deduction;

    printf("\n========== SALARY SLIP ==========\n");
    printf("Employee ID   : %d\n", empId);
    printf("Employee Name : %s\n", empName);
    printf("Basic Salary  : %.2f\n", basicSalary);
    printf("HRA (20%%)     : %.2f\n", hra);
    printf("DA (10%%)      : %.2f\n", da);
    printf("Gross Salary  : %.2f\n", grossSalary);
    printf("Deductions    : %.2f\n", deduction);
    printf("Net Salary    : %.2f\n", netSalary);
    printf("=================================\n");

    return 0;
}