#include <iostream>
#include <QtWidgets/QApplication>
// #include "qtcmake.h"
#include "mainwindow.h"
int main(int argc, char** argv)
{
  std::cout << "hello world" << std::endl;
  QApplication a(argc, argv);
  // QtCmake qc;
  // qc.show();
 MainWindow c;
 c.show();
  a.exec();
  return 0;
}
