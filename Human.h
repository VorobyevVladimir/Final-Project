#include "main.h"


class Human {
private:
    string name;
    bool gender;
    int age;
    string nation;
    bool isAlive;

public:
    
    Human();
    Human(string name, bool gender, int age,string nation , bool isAlive);
    Human(const Human& human);
    ~Human();

    
    string getName() ;
    int getAge() ;
    bool isGender();  
    void setName();
    void setAge();
    void setGender();
    bool isAlive();
    void setAlive();
    string getNation();
    void setNation();

   
    string toString() ;
};
