//小练习
#pragma once
#include <iostream>

namespace namespace_Class01
{
    class class01
    {
    private:
        std::string name = "zhanghg";
        int age = 23;
        float height = 175;

    public:
        void hw()
        {
            std::string myText = "HelloWorld";
            std::cout << myText << std::endl;
        }

        void getName()
        {
            std::cout << name <<std::endl;
        }

        void getAge()
        {
            std::cout << age;
        }

        void getHeight()
        {
            std::cout << height;
        }
    };
}
