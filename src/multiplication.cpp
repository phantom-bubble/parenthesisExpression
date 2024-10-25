#include <string>
#include <parenthesisExpression.h>

std::string multiplication(std::string multiplication_expression) {
	auto multiplication_operator_index = multiplication_expression.find(" * ");
	std::string first_num = multiplication_expression.substr(0, multiplication_operator_index);
	std::string second_num = multiplication_expression.substr(multiplication_operator_index + 3);
	auto outputstring = std::to_string(std::stoi(first_num) * std::stoi(second_num));
	return outputstring;
}