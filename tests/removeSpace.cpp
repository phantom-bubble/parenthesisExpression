#include <parenthesisMatch.h>
#include <string>

#define ASSERT(var) if(!(var)) return -1

int main() {
  ASSERT(removeSpace("1000 0000") == "10000000");
  ASSERT(removeSpace("         ") == "");
  ASSERT(removeSpace("a b c d") == "abcd");
  ASSERT(removeSpace(" a  b c  d ") == "abcd");
  //for (int i = 0; i < 25; i++) {
	 // std::string a="vda"
  //}
  return 0;
}
