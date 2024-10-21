#pragma once

#include<string>
#include<sstream>

/**
 * @brief  匹配括号
 * @param  tmpstr 待匹配的字符串
 * @return bool   匹配成功返回true，否则返回false
 */
bool parenthesisMatch(std::string tmpstr);

std::string FindDeepestParenthesis(std::string tmpstr, bool option=1);

std::string additionCut(std::string tmpstr);

//删除空格
std::string removeSpace(std::string tmpstr);

//找到最深层括号的索引
int findDeepestParenthesisIndex(std::string tmpstr);

std::string ReplaceDeepestParenthesisByString(std::string tmpstr1, std::string tmpstr2);

std::string EvaluateString(std::string tmpstr);
