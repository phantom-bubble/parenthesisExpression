#include<parenthesisExpression.h>
#include<iostream>

#define ASSERT(var) if(!(var)) return -1

int main() {
	int a(1);
	std::string test = "(1$我锟斤拷-jab2(*烫烫烫dhidoaozzzZzw)-;2(&iwh）中文括号（72))()";
	std::cout << findDeepestParenthesisIndex(test) << std::endl;
	std::cout << findDeepestParenthesisIndex("((1+2)*3)") << std::endl;
    return 0;
}
