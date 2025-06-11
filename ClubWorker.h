#include "Human.h"

class ClubWorker : public Human {
public:
	string company;
	double salary;
	string name;

	ClubWorker();
    ClubWorker(string name, int age, bool gender, string company, double salary);
	ClubWorker(const ClubWorker& worker);	   
	~ClubWorker();

	string getCompany();
	void setCompany(string company);
	double getSalary();
	void setSalary(double salary);
	string toString();

};