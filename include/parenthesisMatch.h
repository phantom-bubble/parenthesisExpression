#pragma once

#include<string>
#include<sstream>

/**
 * @brief  匹配括号
 * @param  tmpstr 待匹配的字符串
 * @return bool   匹配成功返回true，否则返回false
 */
bool parenthesisMatch(std::string tmpstr);

/**
 * @brief 寻找最深层括号
 * @param  tmpstr 待匹配的字符串
 * @param  option 0表示保留括号 1表示删除括号
 * @return std::string 最深层括号内的字符串
 */
std::string findDeepestParenthesis(std::string tmpstr, bool option=1);

/**
 * @brief 把字符串的加法表达式计算成结果
 * @param  tmpstr 待计算的字符串
 * @return string 计算结果（字符串）
 */
std::string additionCut(std::string tmpstr);

std::string subtractionCut(std::string tmpstr);

//删除空格
std::string removeSpace(std::string tmpstr);

//找到最深层括号的索引
int findDeepestParenthesisIndex(std::string tmpstr);

std::string replaceDeepestParenthesisByString(std::string tmpstr1, std::string tmpstr2);

std::string evaluateString(std::string tmpstr);
