#pragma once
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
class Employee {
public:
	//setting up these member functions with a default constructor so the derived classes can access them. 
	Employee(const char* name, int id) {
		name = name;
		id = id;
	}
	//declaring these functions as virtual so the dervied classes can use these functions
	virtual double calculateWeeklySalary() = 0;
	virtual double calculateHealthCare() = 0;
	virtual int calculateVacationDays() = 0;
protected:
	//by setting these members as protected, the dervied classes can access them but do not change the item type. 
	string name;
	string id;
};