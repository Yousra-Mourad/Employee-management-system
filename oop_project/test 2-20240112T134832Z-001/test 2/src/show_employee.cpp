#include "show_employee.h"
#include <iostream>
#include"salery.h"

void ShowEmployee::show_all_data(Employee e[]) {
    if (total == 0) {
        cout << "No employee data to display" << endl;
    } else {
        cout << "Employee Data:\n";
        for (int i = 0; i <Employee::total; i++) {
            cout << "Name: " << e[i].set_name << "\n";
            cout << "ID: " << e[i].set_ID << "\n";
            cout << "Department: " << e[i].set_department << "\n";
            cout << "Designation: " << e[i].set_designation << "\n";
            cout << "----------------------\n";
        }
    }
}
void ShowEmployee:: showsalary( Employee emp[], Salary sa[])
{
     bool found = 0;
    if (total == 0)
    {
        cout << " No Such Employee In The System "<< endl;
    }
    else
    {
        cout << " Enter The ID Of Employee you Want To Display His\\her Salary "<<endl ;
    int id ;
    cin >>id ;
    for (int i = 0; i < Employee::total; i++)
    {
        if (id == emp[i].set_ID)
        {
            cout <<" Enter The Number Of overtime Hours "<<emp[i].set_name << " Worked : "<<endl ;
            float otHours ;
            cin>>otHours ;
            cout << " The Net Salary Is : "<<sa[i].NetSalary(otHours , emp[i].set_designation ,emp ,i) <<endl;
            found = 1;

        }
    }
    }
    if (found == 0)
    {
        cout << "ID Is Not Correct "<<endl ;
    }
};


