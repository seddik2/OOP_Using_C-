#pragma once
#include<string>
using namespace std;
class Employee
{
protected:
	string name;
	int emp_ID;
	float salary;
public:
	Employee();
	Employee(string n, int id, float s);
	virtual float get_Total_salary()=0;
	virtual void print();
};

