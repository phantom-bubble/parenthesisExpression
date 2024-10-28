#include <parenthesisExpression.h>
#include <string>

#define ASSERT(var) if(!(var)) return -1

int main() {
	ASSERT(multiplication("1 * 2") == "2");
	ASSERT(multiplication("1 * 0") == "0");
	ASSERT(multiplication("0 * 2") == "0");
	ASSERT(multiplication("1 * 2") == multiplication("-2 * -1"));
	return 0;
}
