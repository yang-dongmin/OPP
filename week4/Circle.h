//원 클래스 만들기

class Circle{
private:
    //선언부
    int radius=1; //멤버 변수
public:
    Circle();   //기본 생성자
    Circle(int r);  //매개변수 있는 생성자
    ~Circle();  //소멸자
    void setRadius(int r);
    int getRadius();
    double getArea();   //멤버 함수 선언(프로토타입, 원형)
};