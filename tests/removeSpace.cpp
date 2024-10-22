#include <parenthesisMatch.h>
#include <string>
#include <assert.h>

int main() {
  assert(removeSpace("1000 0000") == "10000000");
  assert(removeSpace("         ") == "");
  return 0;
}
