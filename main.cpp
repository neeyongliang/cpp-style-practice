//
// Copyright 2017 XXX Inc.co
// This file is main function.
// create by wiki
//
// 文件开头信息，主要包括一下内容：
// Copyright版权, [Time]创建时间
// Introduce功能说明
// Coder负责人
// Fixer修复过这个文件的人写这里
//
// 此外，
// 优先使用单行注释.
// 首尾部各有一行空注释, 注释与代码之间有一行空行
// 单行宽度最好不要超过80,虽然现在屏幕比以前大
// 但是目前大多数C/C++开源项目依旧保持这条规则
//

// include顺序：
// 1.同名文件头文件
// 2.C库头文件
// 3.C++库头文件
// 4.其他库头文件
// 5.本项目的其他文件
#include <stdio.h>
#include "src/func.h"

using MyNamespace::TestFriend;
using MyNamespace::TestStyle;

int main(void) {
  TestStyle* t = new TestStyle();
  TestFriend* f = new TestFriend();
  f->sayHello(t);
  return 0;
}  // 这里空格是前二后一， 结尾留空一行
