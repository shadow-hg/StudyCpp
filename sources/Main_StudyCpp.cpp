#include <iostream>
using namespace std;
#include "class01.cpp"
#include "Box.h"

class011 saaa;
void NewBox();

int main()
{
    //saaa.my01();
    //cout << endl;
    //class011::my01();

    NewBox();
}


//类，面向对象
void NewBox(){
    Box box01;
    Box box02;
    Box box03;
    float volume;

    box01.set("正方体01",10.0,10.0,10.0);
    volume = box01.getVolume();
    cout << box01.getName()<<"体积为："<< volume<<endl;

    box02.set("正方体02",2.0,10.0,5.0);
    volume = box02.getVolume();
    cout << box02.getName()<<"体积为："<< volume<<endl;

    box03.set("正方体03",10.0,5.0,1.0);
    volume = box03.getVolume();
    cout << box03.getName() <<"体积为："<< volume<<endl;

}