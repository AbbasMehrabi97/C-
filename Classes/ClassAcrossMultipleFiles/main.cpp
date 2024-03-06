#include <iostream>
#include "constants.h"
#include "cylinder.h"
#include "cylinder.cpp"



int main(){
     
     Cylinder cylinder1(10,10);
     std::cout << "volume() : " << cylinder1.volume() << std::endl;
     
     //Modify our object
     cylinder1.set_base_radius(100);
     cylinder1.set_height(10);
     std::cout << "volume() : " << cylinder1.volume() << std::endl;

     return 0;
     
}