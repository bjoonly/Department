#include "Worker.h"

Worker::Worker(const char* name, int startYear, double salary, WorkerType type):startYear(0),salary(0){
	SetAll(name, startYear, salary, type);
}
void Worker::SetName(const char* name) {
	strcpy_s(this->name, name);
}
void Worker::SetStartYear(int startYear) {
	if(startYear>0)
	this->startYear = startYear;
}

void Worker::SetSalary(double salary) {
	if(salary>0)
	this->salary = salary;
}

void Worker::SetType(WorkerType type) {
	this->type = type;
}

void Worker::SetAll(const char* name, int startYear, double salary, WorkerType type) {
	SetName(name);
	SetStartYear(startYear);
	SetSalary(salary);
	SetType(type);
}

const char* Worker::GetName()const {
	return name;
}

int Worker::GetStartYear()const {
	return startYear;
}

double Worker::GetSalary()const {
	return salary;
}

WorkerType Worker::GetType()const {
	return type;
}

void Worker::PrintShortInfo()const {
	cout << "Name: " << name << endl << "Salary: " << salary << endl;
}

void Worker:: PrintFullInfo()const {
	cout << "Name: " << name << endl << "Start Year: " << startYear << endl <<
		"Salary: " << salary << endl << "Worker type: ";
	PrintType();
	cout << endl;
}

void Worker::PrintType() const{
	if (type == 0)
		cout << "None";
	else if (type == 1)
		cout << "Director";
	else if (type == 2)
		cout << "Admin";
	else if (type == 3)
		cout << "Programmer";
	else
		cout << "Designer";

}



