#include "ProfEmployee.h"
//default constructor using the derived class Employee
ProfEmployee::ProfEmployee(const char* name, int id) : Employee(name, id) {}
//constructor for monthly salary, and years at company
ProfEmployee::ProfEmployee(const char* name, int id, int monthSalary, int companyYears) : 
	Employee(name, id), monthSalary(monthSalary), companyYears(companyYears) {}
//member function for calculating weekly salary
double ProfEmployee::calculateWeeklySalary() {
	return (monthSalary / 4);
}
//member function for calculating health care
double ProfEmployee::calculateHealthCare() {
	return (75.00 * companyYears);
}
//member function to determine number of vacation days.
int ProfEmployee::calculateVacationDays() {
	return (companyYears * 15);
}