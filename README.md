# CS303-Assignment2
CS303-Assignment2 Part 1:
1. Created the SingleLinkedList class and assign the data members head, tail, and num_items to private before creating the node for member functions
2. Created the following member functions using the class struct Node: push_front, push_back, pop_front, pop_back, front, back, empty, void insert(size_t index, const Item_Type& item), bool remove(size_t index), and size_t find(const Item_Type& item).

CS303-Assignment2 Part 2:
1. Created the abstract Employee class to store name and id for the derivied classes putting them as protected members.
2. After that, created the member functions(double calculate weeklySalary(), double calculateHealthCare(), and int calculateVacationDays()) and made them virtual functions so the derived classes, ProfEmployee and Nonprofessional, can use them but not change the functions.
3. After finishing the creation and implmentation of the Employee class, created the derived classes,ProfEmployee and Nonprofessional.
4. The Nonprofessional class uses the same functions from its derived class but Nonprofessional's members are int hoursWorked, int vacationEarned, int companyYears, and double hourlyRate.
5. The ProfEmployee class uses the derived class functiosn from Employee but has the data members, int monthSalary, int vacationDays, and  int companyYears.
6. After the implementation of the derivied classes, created instances of the ProfEmployee class and Nonprofessional class and their own data members.
7. After the created instances, began testing the instances to ensure that the function logic is correct based on logic.
