#pragma once
#include<string>
using namespace std;
#include "Employee.h"
class Engineer :public Employee
{
private:
	string speciality;
	int experience;
	int OverTimeHoures;
	float OverTimeHouresRate;
public:
	Engineer(string n, int id, float s, string sp, int ex, int oh, float ohr) :Employee(n, id, s) {
		speciality = sp;
		experience = ex;
		OverTimeHoures = oh;
		OverTimeHouresRate = ohr;
	}
	float get_Total_salary();
	void print();
};

