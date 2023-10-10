#pragma once
#include "Employee.h"
class ProfEmployee : public Employee {
private:
	int monthSalary = 0;
	int vacationDays = 0;
	int companyYears = 0;
public: 
	//default constructor 
	ProfEmployee(const char* name, int id);
	//constructor for the monthSalary and companyYears to use for the member functions from Employee class
	ProfEmployee(const char* name, int id, int monthSalary, int companyYears);
	
	//overriding these functions to ensure there is no confliction for the other dervied class using the abstract class functions. 
	double calculateWeeklySalary() override;
	double calculateHealthCare() override;
	int calculateVacationDays() override;
};