#include "Employee.h"
#include<iostream>
Employee::Employee():name("unkown"),emp_ID(0),salary(0.0)
{
	
}
Employee::Employee(string n, int id, float s)
{
	name = n;
	emp_ID = id;
	salary = s;
}

void Employee::print()
{
	cout << "Name = " << name << "\nEmployee ID =  " << emp_ID << "\nSalary = " << salary << endl;
}
