#include <iostream>
class Box{
    private:
        float length,width,height;
        std::string name;        
    public:
        float getVolume();
        std::string getName();
        void set(std::string name,float len,float wid,float hei);
};

float Box::getVolume(){
    return length*width*height;
}
std::string Box::getName(){
    return name;
}
void Box::set(std::string nam,float len,float wid,float hei){
    name = nam;
    length = len;
    width = wid;
    height = hei;
}