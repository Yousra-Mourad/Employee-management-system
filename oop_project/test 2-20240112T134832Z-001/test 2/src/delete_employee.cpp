#include "delete_employee.h"
#include"employee.h"

void deleteEmployee::set_id() {
    cout << "Please enter ID you want to delete: ";
    cin >> id_delete;
}

void deleteEmployee::delete_employee_by_id(Employee e[]) {
    if (Employee::total == 0) {
        cout << "No employee to delete" << endl;
    } else {
        for (int i = 0; i < Employee::total; i++) {
            if (e[i].set_ID == id_delete) {
                for (int j = i; j < Employee::total - 1; j++) {
                    e[j].set_name = e[j + 1].set_name;
                    e[j].set_ID = e[j + 1].set_ID;
                    e[j].set_department = e[j + 1].set_department;
                    e[j].set_designation = e[j + 1].set_designation;
                }
                Employee::total--;
                cout << "Employee with ID " << id_delete << " deleted successfully" << endl;
                return;
            }
        }
        cout << "Employee with ID " << id_delete << " not found" << endl;
    }
}
