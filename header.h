#include <iostream>
#include <string>
using namespace std;

class Person{
    string name;
    string surname;
public:
    Person(string nameValue = "", string surnameValue = "") : name{nameValue}, surname{surnameValue} {};
    string getName();
    string getSurname();
};

