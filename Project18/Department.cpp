#include "Department.h"

bool Department::CheckIndex(int index)const{
	return (index>=0 && index<workerCount);
}

Department::Department():workerCount(0), workers(nullptr) {}

Department::Department(const Department& department) {
	workerCount = department.workerCount;
	workers = new Worker[workerCount];

	for (int i = 0; i < workerCount; i++) 
		workers[i] = department.workers[i];
		
	
}
Department::~Department() {
	delete[]workers;
}

void Department::ShowWorkers()const {
	for (int i = 0; i < workerCount; i++) {
		workers[i].PrintShortInfo();
		cout << endl;
	}
}

void Department::AddWorker(const Worker&newWorker) {
	Worker* NewWorkers = new Worker[++workerCount];
	for (int i = 0; i<workerCount - 1; i++) 
		NewWorkers[i] = workers[i];
	
	NewWorkers[workerCount - 1] = newWorker;
	delete[]workers;
	workers = NewWorkers;
}

void Department::PrintByName(const char* name)const {
	bool res = false;
	for (int i = 0; i < workerCount; i++) {
		if (!strcmp(workers[i].GetName(), name)) {
			workers[i].PrintFullInfo();
			cout << endl;
			res = true;
		}
	}
	if (res == false)
		cout << "No workers with the entered name.\n";
}

void Department::PrintByType(const WorkerType type)const {
	bool res = false;
	for (int i = 0; i < workerCount; i++) {
		if (workers[i].GetType() == type) {
			workers[i].PrintFullInfo();
			cout << endl;
			res = true;
		}
	}
	if (res==false)
		cout << "No workers with the entered worker type.\n";
}
void Department::PrintByExperience(const int exp)const{
	bool res = false;
	for (int i = 0; i < workerCount; i++) {
		if (2020 - workers[i].GetStartYear() > exp && workers[i].GetStartYear() != 0) {
			workers[i].PrintFullInfo();
			cout << endl;
			res = true;
		}
	}
	if (res==false)
		cout << "No workers with more than "<<exp<<" years of experience.";
}
double Department::GetAverageSalary()const {
	if (workerCount > 0) {
		double sum = 0;
		for (int i = 0; i < workerCount; i++) 
			sum += workers[i].GetSalary();
		
		return sum / double(workerCount);
	}
	return 0;
}

int Department::GetWorkerCount() const{
	return workerCount;
}

const char* Department::GetWorkerName(int index) const{
	if (CheckIndex(index))
		return workers[index].GetName();
	return "Incorrect index.";
}

int Department::GetStartYear(int index) const{
	if (CheckIndex(index))
		return workers[index].GetStartYear();
	return 0;
}

double Department::GetSalary(int index) const{
	if (CheckIndex(index))
		return workers[index].GetSalary();
	return 0.0;
}

WorkerType Department::GetWorkerType(int index) const{
	if (CheckIndex(index))
		return workers[index].GetType();
	return WorkerType();
}

void Department::SetNameWorker(const char* name, int index){
	if (CheckIndex(index))
		workers[index].SetName(name);
}

void Department::SetStartYearWorker(int startYear, int index){
	if (CheckIndex(index))
		workers[index].SetStartYear(startYear);
}

void Department::SetSalaryWorker(double salary, int index){
	if (CheckIndex(index))
		workers[index].SetSalary(salary);
}

void Department::SetWorkerType(WorkerType type, int index){
	if (CheckIndex(index))
		workers[index].SetType(type);
}

void Department::SetWorker(const char* name, int startYear, double salary, WorkerType type,int index){
	if (CheckIndex(index))
	workers[index].SetAll(name,startYear,salary,type);
}

void Department::SetWorkerCount(int workerCount){
	if (workerCount > 0)
		this->workerCount = workerCount;
}
