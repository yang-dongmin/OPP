#ifndef TEST
#define TEST
#include <string>
class Employee {
    std::string name;
    int salary;
public:
    Employee(std::string n, int s);
    void raise(int amount);
    void print();
};
#endif