#include<parenthesisMatch.h>
#include<iostream>
#include<stdlib.h>
#include<string>

#define ASSERT(var1, var2) if(var1 != var2) { std::cerr << var1 << var2 << "\n"; exit(-1); }

int main() {
  for(int i = 0; i < 2048; ++i) {
    for(int j = 0; j < 2048; ++j) {
      std::string sum = "";
      std::string var1 = "";
      std::string var2 = "";
      var1 = std::to_string(i);
      var2 = std::to_string(j);
      sum = std::to_string(i + j);
      ASSERT(sum, additionCut(var1 + "+" + var2))
    }
  }
  return 0;
}
