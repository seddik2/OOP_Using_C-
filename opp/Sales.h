#pragma once
#include "Employee.h"
class Sales :public Employee
{
private:
	float gross_sales;
	float commission_rate;
public:
	Sales(string n, int id, float s, float gs, float cr) :Employee(n, id, s) {
		gross_sales = gs;
		commission_rate = cr;
	}
	float get_Total_salary();
	void print();
};

