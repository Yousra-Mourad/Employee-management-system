#include "search_employee.h"
#include"employee.h"
#include"delete_employee.h"

int SearchEmployee::found = 0;

void SearchEmployee::search_by_id(Employee e[]) {
if(Employee::total==0)
{
    cout<<"NO data to change \n";
}
else{
    int search_id;
    cout << "Enter the ID you want to search about: ";
    cin >> search_id;

    found = 0;

    for (int i = 0; i < total; i++) {
        if (e[i].set_ID == search_id) {
            found = 1;
            cout << "The employee is found" << endl;
            cout << "Name: " << e[i].set_name << "\n";
            cout << "ID: " << e[i].set_ID << "\n";
            cout << "Department: " << e[i].set_department << "\n";
            cout << "Designation: " << e[i].set_designation << "\n";
            cout << "----------------------\n";
            return;
        }
    }

    cout << "The employee is not found" << endl;
}
}
