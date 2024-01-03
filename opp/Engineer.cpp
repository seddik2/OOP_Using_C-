#include "Engineer.h"
#include<iostream>
float Engineer::get_Total_salary()
{
    return salary+(OverTimeHoures*OverTimeHouresRate);
}

void Engineer::print()
{
    Employee::print();
    cout << "\nSpeciality= " << speciality << "\nExperienc= " << experience << "" << "\nOvertime Houres= " << OverTimeHoures << "\nOverTime Houres Rate = " << OverTimeHouresRate << endl;
}
