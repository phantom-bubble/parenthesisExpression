#include <parenthesisExpression.h>
#include <string>
#include <stdlib.h>

#define ASSERT(var) if(!(var)) return -1

int main() {
  ASSERT("0" == addition("0 + 0"));
  ASSERT("1" == addition("0 + 1"));
  ASSERT("1" == addition("1 + 0"));
  ASSERT("7777778" == addition("1 + 7777777"));
  ASSERT("65536" == addition("1 + 65535"));
  for(int i = 0; i < 2048; ++i) {
    for(int j = 0; j < 2048; ++j) {
      std::string sum = "";
      std::string var1 = "";
      std::string var2 = "";
      var1 = std::to_string(i);
      var2 = std::to_string(j);
      sum = std::to_string(i + j);
      ASSERT(sum == addition(var1 + " + " + var2));
    }
  }
  for(int i = 0; i < 10000000; ++i) {
    int var1 = rand();
    int var2 = rand();
    ASSERT(std::to_string(var1 + var2) == addition(std::to_string(var1) + " + " + std::to_string(var2)));
  return 0;
}
