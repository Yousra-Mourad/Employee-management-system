#include "employee.h"

int Employee::total = 0;


void Employee::setdata() {
    cout << "Enter Employee Name: ";
    cin >> set_name;
    cout << "Enter The ID: ";
    cin >> set_ID;
    cout << "Enter Department: ";
    cin >> set_department;
    cout<<"Enter Designation: ";
    cin>>set_designation;
    name = set_name;
    ID = set_ID;
    department = set_department;
    designation=set_designation;
    total++;
}
