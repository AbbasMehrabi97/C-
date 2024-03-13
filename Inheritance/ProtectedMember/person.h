#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;

class Person
{
      friend ostream& operator<<(ostream& out, const Person& person);
protected:
      string first_name{"Mysterious"};
      string last_name{"Person"};
public:
      Person();
      Person(string& first_name_param, string& last_name_param);
      //Getters
      string get_first_name() const{
            return first_name;
      }
      string get_last_name() const{
            return last_name;
      }
      //Setters
      void set_first_name(string_view fn){
            first_name = fn;
      }
      void set_last_name(string_view ln){
            last_name = ln;
      }
};

#endif // PERSON_H