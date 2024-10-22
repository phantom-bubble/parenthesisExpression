#include<parenthesisMatch.h>
#include<iostream>
#include<stdlib.h>
#include<string>
#include<sstream>

#define ASSERT(var1, var2) if(var1 != var2) { std::cerr << var1 << var2 << "\n"; exit(-1); }

int main() {
  for(int i = 0; i < 2048; ++i) {
    for(int j = 0; j < 2048; ++j) {
      std::string sum = "";
      std::string var1 = "";
      std::string var2 = "";
      std::stringstream ss;
      ss << i;
      ss >> var1;
      ss << j;
      ss >> var2;
      ss << i + j;
      ss >> sum;
      ASSERT(sum, additionCut(var1 + "+" + var2))
    }
  }
  return 0;
}
