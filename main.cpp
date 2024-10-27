#include<parenthesisExpression.h>
#include<iostream>

#define ASSERT(var) if(!(var)) return -1

int main() {
	int a(1);
	std::string test = "(1$我锟斤拷-jab2(*烫烫烫dhidoaozzzZzw)-;2(&iwh）中文括号（72))()";
	std::cout << findDeepestParenthesisIndex(test) << std::endl;
	std::cout << findDeepestParenthesisIndex("((1+2)*3)") << std::endl;
	std::cout << evaluateString("1+2+3+(4+5)*6") << std::endl;
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
            sum = std::to_string(i - j);
            ASSERT(sum == subtraction(var1 + " - " + var2));
        }
    }
    return 0;
}
