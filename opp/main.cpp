#include <iostream>
#include"Employee.h"
#include"Engineer.h"
#include"Sales.h"
int main()
{
	Employee* emp_ptr;
	Sales s1("Ahmed", 120, 5000, 50000, 0.10);
	Engineer r1("Hassan", 150, 7000, "SW Engineer", 5, 10, 50);
	emp_ptr = &s1;
	emp_ptr->get_Total_salary();
	emp_ptr->print();
	emp_ptr = &r1;
	emp_ptr->get_Total_salary();
	emp_ptr->print();
	return 0;
}
