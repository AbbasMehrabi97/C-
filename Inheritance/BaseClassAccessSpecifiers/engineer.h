#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"
using namespace std;


class Engineer : private Person
{
      friend ostream& operator<<(ostream& out, const Engineer& operand);
private:
      int contract_count{0};
public:
      Engineer();
      ~Engineer();

      void build_something(){
            m_fullname = "Mahmud";
            m_age = 19;
            //m_address = "Shanli urfa"; // Compiler error
      }

};

#endif

