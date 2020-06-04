#include<iostream>
#include"Department.h"

using namespace std;


int main() {
	cout << "Create department.\n\n";
	Department dp1;
	cout << "\nAdd 4 workers to department:\n\n";
	dp1.AddWorker(Worker( "Anna", 2017, 2900, PROGRAMMER ));
	dp1.AddWorker(Worker("Nastya", 2016, 2500, DESIGNER));
	dp1.AddWorker(Worker("Dima", 2018, 3300, DESIGNER));
	dp1.AddWorker(Worker("Roma", 2019, 3000, PROGRAMMER));
	dp1.ShowWorkers();
	
	cout << "\nAverage salary: " << dp1.GetAverageSalary() << endl;
	cout << "\nInformation by worker type:\n\n";
	dp1.PrintByType(DESIGNER);
	cout << "\nInformation by worker type:\n\n";
	dp1.PrintByType(PROGRAMMER);
	cout << "\nInformation by name:\n\n";
	dp1.PrintByName("Nastya");
	cout << "\nInformation by years of experience:\n\n";
	dp1.PrintByExperience(2);
	return 0;
}