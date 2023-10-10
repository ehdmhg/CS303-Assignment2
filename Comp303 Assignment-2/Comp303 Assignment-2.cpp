// Comp303 Assignment-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Employee.h"
#include "Nonprofessional.h"
#include "ProfEmployee.h"
#include <iostream>

int main()
{
    //Creating instances for ProfEmployee class and NonProfessional class
    ProfEmployee professional("Brandon", 2, 34000, 5);
    NonProfessional nonprof("Abby", 47, 25.50, 40, 3);

    //Testing ProfEmployee class and its derived functions
    cout << "Details for Professional Employee" << endl;
    cout << endl;
    cout << "Weekly Salary for Professional: " << professional.calculateWeeklySalary() << endl;
    cout << "HealthCare for Professional: " << professional.calculateHealthCare() << endl;
    cout << "Accumlated Vacation Days for Professional: " << professional.calculateVacationDays() << endl;
    
    //Testing NonProfessional class and its derived functions
    cout << "Details for Nonprofessional Employee" << endl;
    cout << endl;
    cout << "Weekly Salary for Nonprofessional Employee: " << nonprof.calculateWeeklySalary() << endl;
    cout << "HealthCare for Nonprofessional: " << nonprof.calculateHealthCare() << endl;
    cout << "Accumlated Vacation Days For Nonprofessional: " << nonprof.calculateVacationDays() << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
