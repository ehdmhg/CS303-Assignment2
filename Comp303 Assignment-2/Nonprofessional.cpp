#include "Nonprofessional.h"

//default constructor using the derivied class
NonProfessional::NonProfessional(const char* name, int id) : Employee(name, id){}
//constructor for private member functions of Nonprofessional class
NonProfessional::NonProfessional(const char* name, int id, double hourlyRate, int hoursWorked, int companyYears) :
	Employee(name, id), hourlyRate(hourlyRate), hoursWorked(hoursWorked), companyYears(companyYears) {}

//function that calculates weekly salary
double NonProfessional::calculateWeeklySalary() {
	return(hourlyRate * hoursWorked);
}

//function that calculates company health care
double NonProfessional::calculateHealthCare() {
	return (7 * hoursWorked);
}

//function that calculates vacation days 
int NonProfessional::calculateVacationDays() {
	if ((hoursWorked >= 50) && (companyYears >= 1)) {//if true, vacation days is equal to companyYears * 20
		return (companyYears * 20);
	}
	else {//else, vacation days is equal to companyYears * 10
		return (companyYears * 10);
	}
}