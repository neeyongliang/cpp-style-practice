//
// Copyright 2017 create by wiki
// test for class define.
//

#include "func.h"

MyNamespace::TestStyle::TestStyle() {
  m_type = g_msg;
}

std::string MyNamespace::TestStyle::getStyleType() {
  std::cout << m_type << std::endl;
  return m_type;
}

void MyNamespace::TestFriend::sayHello(MyNamespace::TestStyle* t) {
  t->getStyleType();
}
