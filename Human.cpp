#include "Human.h"
//base class
Human::Human() : Human("", false , 0 , "no nation", false){
	cout << "Human default constractor"<< endl;
}
Human::Human(string name, bool gender, int age, string nation, bool isAlive){
	this->name = name;
	this->age = age;
	this->gender = gender;
	this->nation = nation;
	this->isAlive = isAlive;
}
Human::Human(const Human& human) : Human(human.name , human.age , human.gender , human.nation , human.isAlive){}

Human::~Human() {
    cout << "Human destructor" << endl;
}

string Human::getName() {
	return name;
}
void Human::setName(){
	this->name = name;
}
int Human::getAge(){
	return age;
}
void Human::setAge(){
	this->age = age;
}
bool Human::isGender(){
	return gender;
}
void Human::setGender(){
	this->gender = gender;
}
bool Human::isAlive(){
	return isAlive;
}
void Human::setAlive(){
	this->isAlive = isAlive;
}
string Human::getNation(){
	return nation;
}
void Human::setNation(){
	this->nation = nation;
}


string Human::toString(){
	string s = "";
	s += name + ", "
		+ to_string(age) + ", "
		+ (gender ? "male" : "female");
		 return s;
}