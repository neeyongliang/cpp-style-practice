//
// Copyright [2017] create by wiki
// This file created for explain head file style
//

#ifndef SRC_FUNC_H_  // <PATH_IN_PROJECT>_<FILE_BASE_NAME>_H_
#define SRC_FUNC_H_  // 此处需配合CPPLINT.cfg文件

#include<iostream>
#include<string>

// 静态(s_)、成员(m_)、全局(g_)
const char g_msg[] = "Wiki Style";

namespace MyNamespace {  // 最外层的namespace内容里，上下各空一行。

// 多个namespace不缩进
class TestStyle {  // 类名的单词首字母全部要大写，是AbcDef不是abcDef!
friend void sayHello(TestStyle* t);  // friend集中写在类最开始

 public:  // 一个空格
  TestStyle();
  std::string getStyleType();  // 函数与左括号之间没有空格

 private:
  std::string m_type;  // 成员m_开头
};

class TestFriend {
 public:
  void sayHello(TestStyle* t);  // 指针与引用左对齐
};

}  // namespace MyNamespace
// 命名空间结束，需要注释说明

#endif  // SRC_FUNC_H_
