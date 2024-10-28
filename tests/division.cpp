#include <parenthesisExpression.h>
#include <string>

#define ASSERT(var) if(!(var)) return -1

int main() {
	ASSERT("2" == division("4 / 2"));
	return 0;
}
