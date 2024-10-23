#include <string>

std::string addition(std::string addition_expression) {
	std::string outputstring1 = "";
	std::string outputstring2 = "";
	bool addFind = false;
	for (int i = 0; i < tmpstr.size(); i++) {
		if (tmpstr[i] != '+' && addFind == false) {
			outputstring1 += tmpstr[i];
		}
		if (tmpstr[i] == '+') {
			addFind = true;
		}
		if (tmpstr[i] != '+' && addFind == true) {
			outputstring2 += tmpstr[i];
		}
	}
	int outputint1 = std::stoi(outputstring1);
	int outputint2 = std::stoi(outputstring2);
	std::string outputstring = std::to_string(outputint1 + outputint2);
	return outputstring;
}
