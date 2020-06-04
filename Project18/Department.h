#pragma once
#include"Worker.h"

class Department {
	Worker* workers;
	int workerCount;
	bool CheckIndex(int index)const;
public:
	Department();
	Department(const Department& depart);
	~Department();

	void ShowWorkers()const;

	void AddWorker(const Worker&newWorker);

	void PrintByName(const char* name)const;
	void PrintByType(const WorkerType type)const;
	void PrintByExperience(const int exp)const;
	
	double GetAverageSalary()const;
	int GetWorkerCount()const;
	const char* GetWorkerName(int index)const;
	int GetStartYear(int index)const;
	double GetSalary(int index)const;
	WorkerType GetWorkerType(int index)const;

	void SetNameWorker(const char* name, int index);
	void SetStartYearWorker(int startYear,int index);
	void SetSalaryWorker(double salary,int index);
	void SetWorkerType(WorkerType type, int index);
	void SetWorker(const char* name, int startYear, double salary, WorkerType type,int index);
	void SetWorkerCount(int count);
};

