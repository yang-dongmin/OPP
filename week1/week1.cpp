// 이름 : 양동민
// 학번 : 2023564058

#include <iostream>

int main()
{
    std::cout << "이름을 입력하세요 : ";
    std::string name;
    std::cin >> name;

    std::cout << "학번을 입력하세요 : ";
    int no;
    std::cin >> no;

    std::cout << "전공을 입력하세요 : ";
    std::string major;
    std::cin >> major;

    std::cout << "나이을 입력하세요 : ";
    int age;
    std::cin >> age;

    std::cout << "취미을 입력하세요 : ";
    std::string hobby;
    std::cin >> hobby;

    std::cout << "===자기소개===" << std::endl;
    std::cout << "이름  : " << name << std::endl;
    std::cout << "학번  : " << no << std::endl;
    std::cout << "전공  : " << major << "학과" << std::endl;
    std::cout << "나이  : " << age << "세" << std::endl;
    std::cout << "취미  : " << hobby << std::endl;
    std::cout << "==============" << std::endl;
    return 0;
}