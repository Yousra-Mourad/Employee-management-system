#include "Salery.h"


double Salary:: NetSalary(float hours , string job ,Employee e[], int i)
    {
        overtimeHours = hours ;
        job = e[i].set_designation ;


        if (job == "department_manager")
        {
            basicSalary = 20000;
        }
        else if (job == "engineer")
        {
            basicSalary=10000;
        }
        else if (job == "senior_engineer")
        {
            basicSalary=8000;
        }
        else
        {
            basicSalary=4000;
        }

        specialAllowance = 0.1 * basicSalary ;
        houseRAllowance = 0.5 * basicSalary ;
        bonus = 200 * overtimeHours ;
        providentFund = 0.1 * basicSalary ;

        if (basicSalary < 6000)
        {
            incomeTax = .02 * basicSalary;
        }
        else if (basicSalary >=6000 && basicSalary <=10000)
        {
            incomeTax = .03 * basicSalary ;
        }
        else if (basicSalary >10000)
        {
            incomeTax = .04 * basicSalary ;

        }

        netSalary = ( basicSalary + specialAllowance + houseRAllowance + bonus ) - (providentFund + incomeTax) ;
        return(netSalary);
    }


