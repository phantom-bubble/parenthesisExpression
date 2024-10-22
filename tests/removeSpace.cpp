#include <parenthesisMatch.h>
#include <string>

#define ASSERT(var) if(!(var)) exit(-1)

int main() {
  ASSERT(removeSpace("1000 0000") == "10000000");
  ASSERT(removeSpace("         ") == "");
  return 0;
}
