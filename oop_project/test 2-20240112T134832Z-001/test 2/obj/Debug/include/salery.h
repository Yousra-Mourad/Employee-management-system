
#ifndef SALARY_H
#define SALARY_H

#include "employee.h"  // Include the necessary header file for the employee class

class Salary : public Employee {
private:
    float basicSalary, specialAllowance, houseRAllowance, bonus,
          daysOfAbsence, providentFund, incomeTax, netSalary, overtimeHours;

public:
    double NetSalary(float hours, string job, Employee e[], int i);
};

#endif
