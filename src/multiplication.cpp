#include <string>
#include <parenthesisExpression.h>

std::string multiplication(std::string tmpstr) {
	auto multiplication_operator_index = tmpstr.find(" * ");
	std::string first_num = tmpstr.substr(0, multiplication_operator_index);
	std::string second_num = tmpstr.substr(multiplication_operator_index + 3);
	auto outputstring = std::to_string(std::stoi(first_num) * std::stoi(second_num));
	return outputstring;
}