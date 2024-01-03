#include "Sales.h"
#include <iostream>
float Sales::get_Total_salary()
{
return 	salary + (commission_rate*gross_sales);

}

void Sales::print()
{
	Employee::print();
	cout << "\nGross Sales = "<<gross_sales<<"\nComission = "<<commission_rate<<endl;
}
