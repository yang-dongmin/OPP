#include <iostream>
using namespace std;

class Employee{
protected:
    string name;
    double baseSalary;
public:
    Employee(string name, double baseSalary){
        this -> name = name;
        this -> baseSalary = baseSalary;
    };
    virtual ~Employee(){};
    virtual double calculatePay() = 0;
    void printInfo(){
        cout << "이름 : [" << name << "], 급여 : [" << calculatePay() << "]";
    }
};
class FullTimeEmployee : public Employee{
public:
    FullTimeEmployee(string name, double baseSalary) : Employee(name, baseSalary){};
    double calculatePay(){
        return baseSalary;
    }
};
class PartTimeEmployee : public Employee{

};

int main(){
    FullTimeEmployee f("asdf", 50);
    f.calculatePay();
}