#include "main.h"


class Human {
private:
    string name;
    bool gender;
    int age;

public:
    
    Human();
    Human(string name, bool gender, int age);
    Human(const Human& human);
    ~Human();

    
    string getName() ;
    int getAge() ;
    bool isGender();  
    void setName();
    void setAge();
    void setGender();

   
    string toString() ;
};
