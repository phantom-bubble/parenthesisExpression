#include<parenthesisMatch.h>
#include<iostream>
#include<stdlib.h>
#include<string>
#include<sstream>

#define ASSERT(var1, var2) if(var1 != var2) { std::cout << var1 << var2 << "\n"; exit(-1); }

int main() {
  for(int i = 0; i < 65536; ++i) {
    for(int j = 0; j < 65535; ++j) {
      std::string sum;
      std::string var1;
      std::string var2;
      std::ostringstream os1(var1);
      os1 << i << std::flush;
      var1 = os1.str();
      std::ostringstream os2(var2);
      os2 << j << std::flush;
      var2 = os2.str();
      std::ostringstream ossum(sum);
      ossum << i + j << std::flush;
      sum = ossum.str();
      ASSERT(sum, additionCut(var1 + "+" + var2))
    }
  }
  return 0;
}
