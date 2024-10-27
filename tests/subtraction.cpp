#include <parenthesisExpression.h>
#include <string>

#define ASSERT(var) if(!(var)) return -1

int main() {
    ASSERT("0" == subtraction("0 - 0"));
    ASSERT("-1" == subtraction("0 - 1"));
    ASSERT("1" == subtraction("1 - 0"));
    ASSERT("7777776" == subtraction("7777777 - 1"));
    ASSERT("-1" == subtraction("1 - 2"));
    ASSERT("-65536" == subtraction("-1 - 65535"));
    for (int i = 2048; i > 0; --i) {
        for (int j = 0; j < 2048; ++j) {
            std::string sum = "";
            std::string var1 = "";
            std::string var2 = "";
            var1 = std::to_string(i);
            var2 = std::to_string(j);
            sum = std::to_string(i + j);
            ASSERT(sum == subtraction(var1 + " - " + var2));
        }
    }
	return 0;
}