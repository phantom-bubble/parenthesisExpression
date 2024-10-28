#include<parenthesisExpression.h>
#include<iostream>

int main() {
	int a(1);
	std::string test = "(1$我锟斤拷-jab2(*烫烫烫dhidoaozzzZzw)-;2(&iwh）中文括号（72))()";
	std::cout << findDeepestParenthesisIndex(test) << std::endl;
	std::cout << findDeepestParenthesisIndex("((1+2)*3)") << std::endl;
	std::cout << evaluateString("1+2+3+(4+5)*6") << std::endl;
	std::cout << subtraction("10 - 5") << std::endl;
	std::cout << subtraction("10-5") << std::endl;
//	std::cout << replaceDeepestParenthesisByString("1+2*(3+4)", additionCut(findDeepestParenthesis("(1+2*(3+4))"))) << std::endl;
	// if(subtraction("5-1") != "4") exit(-1);
	if(true != isAdditionExpression("1 + 1")) return -1;
}
