#include <parenthesisExpression.h>
#include <string>
#include <stdlib.h>

#define ASSERT(var) if(!(var)) return -1

int main() {
	ASSERT(multiplication("1 * 2") == "2");
	ASSERT(multiplication("1 * 0") == "0");
	ASSERT(multiplication("0 * 2") == "0");
	ASSERT(multiplication("1 * 2") == multiplication("-2 * -1"));
	for(int i = 0; i < 10000000; ++i) {
		int var1 = rand() % 100000;
		int var2 = rand() % 10000;
		int result = var1 * var2;
		ASSERT(std::to_string(result) == multiplication(std::to_string(var1) + " * " + std::to_string(var2)));
	}
	return 0;
}
