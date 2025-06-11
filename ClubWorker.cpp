#include "ClubWorker.h"

ClubWorker::ClubWorker() : ClubWorker("", 0, false, "", 0.0) {
	cout << "Worker default constructor." << endl;
}

ClubWorker::ClubWorker(string name, int age, bool gender, string company, double salary) :
	Human(name, age, gender) {
	this->company = company;
	this->salary = salary;
}

ClubWorker::ClubWorker(const ClubWorker& worker) :
	ClubWorker(worker.name, worker.age, worker.gender, worker.company, worker.salary) { }

ClubWorker::~ClubWorker() {
	cout << "Worker destructor." << endl;
}


string ClubWorker::getCompany() {
	return company;
}

void ClubWorker::setCompany(string company) {
	this->company = company;
}

double ClubWorker::getSalary() {
	return salary;
}

void ClubWorker::setSalary(double salary) {
	this->salary = salary;
}

string ClubWorker::toString() {
	string s = Human::toString();
	s += ", name = " + Human::age;
	s += ", salary = " + to_string(salary)
		+ ", company = " + company;

	return s;
}