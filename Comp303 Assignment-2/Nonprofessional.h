#pragma once
#include "Employee.h"
class NonProfessional : public Employee {
private:
	int hoursWorked;
	int vacationEarned;
	int companyYears;
	double hourlyRate;
public:
	NonProfessional(const char* name, int id); //constructor for derivied class members
	NonProfessional(const char* name, int id, double hourlyRate, 
		int hoursWorked, int companyYears); //constructor for initalizing private members of class
	//overriding these functions to ensure there is no confliction for the other dervied class using the abstract class functions. 
	double calculateWeeklySalary() override;
	double calculateHealthCare() override;
	int calculateVacationDays() override;
};