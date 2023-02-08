#include "class01.h"
#include <iostream>
using namespace namespace_Class01;

class new_peo
{
public:
    void my01()
    {
        class01 people01;
        std::cout << "姓名：" << std::endl;
        people01.getName();
        std::cout << "年龄：" << std::endl;
        people01.getAge();std::cout << "岁" << std::endl;
        std::cout << "身高：" << std::endl;
        people01.getHeight();std::cout << "cm" <<std::endl;
    }
};
