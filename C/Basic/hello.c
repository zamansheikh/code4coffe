#include <stdio.h>
struct employee {
    char name[20];
    int ID;
    float work_point;
    float _last_3_month_work_point[3];
    float basic_salary;
};

typedef struct employee Employee;



int main()
{
    printf("Number of employee: ");
    int n;
    scanf("%d", &n);
    Employee employeeList[n];
    for (int i = 0; i < n; i++) {
        printf("Employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", employeeList[i].name);
        printf("ID: ");
        scanf("%d", &employeeList[i].ID);
        printf("Work point: ");
        scanf("%f", &employeeList[i].work_point);
        printf("Last 3 month work point: ");
        for (int j = 0; j < 3; j++) {
            scanf("%f", &employeeList[i]._last_3_month_work_point[j]);
        }
        printf("Basic salary: ");
        scanf("%f", &employeeList[i].basic_salary);
    } 

    // Print employee list
    for ( int i = 0; i < n; i++) {
        printf("Employee Name: %s\n", employeeList[i].name);
        if (employeeList[i].work_point > 5 && employeeList[i]._last_3_month_work_point[0] > 3 && employeeList[i]._last_3_month_work_point[1] > 3 && employeeList[i]._last_3_month_work_point[2] > 3) {
            employeeList[i].basic_salary += employeeList[i].basic_salary * 0.2;
        }
        else if (employeeList[i].work_point > 3 && employeeList[i]._last_3_month_work_point[0] > 2 && employeeList[i]._last_3_month_work_point[1] > 2 && employeeList[i]._last_3_month_work_point[2] > 2) {
            employeeList[i].basic_salary += employeeList[i].basic_salary * 0.1;
        }
        else if (employeeList[i].work_point > 3 && employeeList[i]._last_3_month_work_point[0] > 0 && employeeList[i]._last_3_month_work_point[1] > 0 && employeeList[i]._last_3_month_work_point[2] > 0) {
            employeeList[i].basic_salary += employeeList[i].basic_salary * 0.05;
        }

        printf("Salary to be paid: %f\n", employeeList[i].basic_salary);
    }

    return 0;

}