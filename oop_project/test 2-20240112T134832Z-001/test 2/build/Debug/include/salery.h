
#ifndef SALARY_H
#define SALARY_H
#include"employee.h"

#include <iostream>
#include <string>


class Salary  {
private:
    float basicSalary, specialAllowance, houseRAllowance, bonus, daysOfAbsence, providentFund, incomeTax, netSalary, overtimeHours;

public:
    Salary();  // Constructor declaration

    double NetSalary(float hours, std::string job,Employee e[] , int i);
};

#endif // SALARY_H
