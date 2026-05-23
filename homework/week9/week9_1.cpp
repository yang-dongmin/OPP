// 2023564058 양동민
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
    virtual ~Employee(){}; // 소멸자는 virtual이 안전
    virtual double calculatePay() = 0; // 순수함수
    void printInfo(){
        cout.setf(ios::fixed); // 소수점 고정 (지수 표기법 해제) (Gemini)
        cout.precision(0); // 소수점 아래로는 출력 X (Gemini)
        cout << "이름 : " << name << ", 급여 : " << calculatePay() << endl;
    }
};
class FullTimeEmployee : public Employee{
public:
    FullTimeEmployee(string name, double baseSalary) : Employee(name, baseSalary){};
    double calculatePay(){ // 실제 구현
        return baseSalary;
    }
};
class PartTimeEmployee : public Employee{
    int hoursWorked;
    int hourlyRate;
public:
    PartTimeEmployee(string name, int hoursWorked, int hourlyRate) : Employee(name, hoursWorked*hourlyRate){
        this -> hoursWorked = hoursWorked;
        this -> hourlyRate = hourlyRate;
    };
    double calculatePay(){ // 실제 구현
        return hoursWorked*hourlyRate;
    }
};

int main(){

    //추상 클래스 포인터
    Employee* e1 = new FullTimeEmployee("홍길동", 3000000);
    Employee* e2 = new PartTimeEmployee("김파트", 40, 20000);

    e1 -> printInfo();
    e2 -> printInfo();

    // 메모리 해제 필수
    delete e1;
    delete e2;
}