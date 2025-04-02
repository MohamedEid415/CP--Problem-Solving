//
// Created by meid on 1/2/25.
//

#include "calc.h"
#include <iostream>
using namespace std;

int add(int a, int b){
  return a + b;
}
int add(int a, int b, int c) {
  return a + b + c;
}
float add(float a, float b) {
  return a + b;
}
string add(string a, string b) {
  return a +" " + b;
}