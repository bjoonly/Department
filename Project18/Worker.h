#pragma once
#include<iostream>
using namespace std;

enum  WorkerType { NONE, DIRECTOR, ADMIN, PROGRAMMER, DESIGNER };
class Worker{
	char name[50];
	int startYear;
	double salary;
	WorkerType type;
	void PrintType()const;
public:
	Worker(const char* name = "No name", int startYear = 0, double salary = 0, WorkerType type = NONE);
	
	void SetName(const char* name);
	void SetStartYear(int startYear);
	void SetSalary(double salary);
	void SetType(WorkerType type);
	void SetAll(const char* name, int startYear, double salary, WorkerType type);
	
	const char* GetName()const;
	int GetStartYear()const;
	double GetSalary()const;
	WorkerType GetType()const;
	
	void PrintShortInfo()const;
	void PrintFullInfo()const;
	
};
