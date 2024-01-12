#include "update_employee.h"
#include"employee.h"
#include"delete_employee.h"

void UpdateEmployee::set_data() {
    cout << "If you want to add a new employee press1: \n---------------\nIf you want to change data press2: \n";
    cin >> num;

    if (num == 2) {
      if(Employee::total==0)
      {
        cout<<"No data to change\n";
      }
      else{

        cout << "Please enter the id of the employee to change: ";
        cin >> id_of_employee_change;
         }

    } else {
        use_e1.setdata();

    }
}

void UpdateEmployee::change_data(Employee e[]) {
 if(Employee::total==0)
 {

 } else{
    if(num==2){
       cout<<"please enter new data\n";
         use_e2.setdata();
    for (int j = 0; j < Employee::total; j++) {
        if (e[j].set_ID == id_of_employee_change) {
            e[j].set_name = use_e2.set_name;
            e[j].set_ID = use_e2.set_ID;
            e[j].set_department = use_e2.set_department;
            e[j].set_designation = use_e2.set_designation;
            cout << "Employee data changed successfully" << endl;
            Employee::total--;
            return;
        }
    }
    cout << "Employee with ID " << id_of_employee_change << " not found" << endl;
    }
    else{

    }
 }
}
void UpdateEmployee::Add_employee(Employee e[])
{
    if(num==1)
    {

 for (int j = Employee::total-1; j < Employee::total; j++) {

            e[j].set_name = use_e1.set_name;
            e[j].set_ID = use_e1.set_ID;
            e[j].set_department = use_e1.set_department;
            e[j].set_designation = use_e1.set_designation;
            cout << "Employee data add successfully" << endl;
        }
    }
    else{}
  }

