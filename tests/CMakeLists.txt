# CMakeList.txt: CMakeProject1 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

# 如果支持，请为 MSVC 编译器启用热重载。
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("TestProject")

# 将源代码添加到此项目的可执行文件。
add_executable (addition_test "addition.cpp")
target_link_libraries(addition_test parenthesisExpression)
target_include_directories(addition_test PRIVATE
  ${PROJECT_SOURCE_DIR}/../include
)

add_executable (subtraction_test "subtraction.cpp")
target_link_libraries(subtraction_test parenthesisExpression)
target_include_directories(subtraction_test PRIVATE
  ${PROJECT_SOURCE_DIR}/../include
)

add_executable (parenthesisMatch_test "parenthesisMatch.cpp")
target_link_libraries(parenthesisMatch_test parenthesisExpression)
target_include_directories(parenthesisMatch_test PRIVATE
  ${PROJECT_SOURCE_DIR}/../include
)

add_executable (findDeepestParenthesis_test "findDeepestParenthesis.cpp")
target_link_libraries(findDeepestParenthesis_test parenthesisExpression)
target_include_directories(findDeepestParenthesis_test PRIVATE
  ${PROJECT_SOURCE_DIR}/../include
)

add_executable (removeSpace_test "removeSpace.cpp")
target_link_libraries(removeSpace_test parenthesisExpression)
target_include_directories(removeSpace_test PRIVATE
  ${PROJECT_SOURCE_DIR}/../include
)

add_executable (findDeepestParenthesisIndex_test "findDeepestParenthesisIndex.cpp")
target_link_libraries(findDeepestParenthesisIndex_test parenthesisExpression)
target_include_directories(findDeepestParenthesisIndex_test PRIVATE
  ${PROJECT_SOURCE_DIR}/../include
)

add_executable (evaluateString_test "evaluateString.cpp")
target_link_libraries(evaluateString_test parenthesisExpression)
target_include_directories(evaluateString_test PRIVATE
  ${PROJECT_SOURCE_DIR}/../include
)

# 启用测试
enable_testing()
add_test(NAME addition_test COMMAND addition_test)
add_test(NAME subtraction_test COMMAND subtraction_test)
add_test(NAME parenthesisMatch_test COMMAND parenthesisMatch_test)
add_test(NAME findDeepestParenthesis_test COMMAND findDeepestParenthesis_test)
add_test(NAME removeSpace_test COMMAND removeSpace_test)
add_test(NAME findDeepestParenthesisIndex_test COMMAND findDeepestParenthesisIndex_test)
add_test(NAME evaluateString_test COMMAND evaluateString_test)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET addition_test PROPERTY CXX_STANDARD 20)
  set_property(TARGET subtraction_test PROPERTY CXX_STANDARD 20)
  set_property(TARGET parenthesisMatch_test PROPERTY CXX_STANDARD 20)
  set_property(TARGET findDeepestParenthesis_test PROPERTY CXX_STANDARD 20)
  set_property(TARGET removeSpace_test PROPERTY CXX_STANDARD 20)
  set_property(TARGET findDeepestParenthesisIndex_test PROPERTY CXX_STANDARD 20)
  set_property(TARGET evaluateString_test PROPERTY CXX_STANDARD 20)
endif()

# TODO: 如有需要，请添加测试并安装目标。
