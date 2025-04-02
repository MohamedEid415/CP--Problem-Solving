//
// Created by meid on 1/2/25.
//

#ifndef CALC_H
#define CALC_H
#include <iostream>
using namespace std;


class calc {
    public:
      int add(int a, int b); // overloading methods
      int add(int a, int b, int c);
      float add(float a, float b);
      string add(string a, string b);
      calc();
      ~calc();
};



#endif //CALC_H
