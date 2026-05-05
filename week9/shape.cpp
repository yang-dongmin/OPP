#include <iostream>
using namespace std;

class Shape
{
    Shape* next;
public:
    Shape(){
        next = NULL;
    }
    virtual ~Shape(){};
    virtual void draw() {
        cout << "---Shape---" << endl;
    } // 인터페이스 역할 (파생 클래스에서 구현)
    void paint();
    Shape* add(Shape* p);
    Shape* getNext() { return next; }
};

class Circle : public Shape
{
protected:
    virtual void draw() { cout << "draw Circle" << endl; }
};

class Rect : public Shape
{
protected:
    virtual void draw() { cout << "draw Rect" << endl; }
};

class Line : public Shape
{
protected:
    virtual void draw() { cout << "draw Line" << endl; }
};

// 핵심: Shape* 하나로 모든 도형을 다룰 수 있다
void Shape::paint()
{
    draw(); // 동적 바인딩
}
Shape* Shape::add(Shape* p){
    this -> next = p;
    return p;
}

int main()
{
    Shape* pStart = NULL;
    Shape* pLast;

    pStart = new Circle();
    pLast = pStart;
    pLast = pLast->add(new Rect());
    pLast = pLast->add(new Line());
    pLast = pLast->add(new Circle());
    pLast = pLast->add(new Rect());

    // 모든 도형 그리기
    Shape* p = pStart;
    while(p!=NULL){
        p->paint();
        p = p->getNext();
    }

    //메모리 해제하기
    p = pStart;
    while(p!=NULL){
        Shape* q = p->getNext();
        delete p;
        p = q;
    }

    // paint(new Circle()); // Circle::draw() 호출
    // paint(new Rect());   // Rect::draw() 호출
    // paint(new Line());   // Line::draw() 호출
}