/*

#include "QtOpenGL.h"

QtOpenGL::QtOpenGL(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

*/

#include "QtOpenGL.h"
#include <iostream>

QtOpenGL::QtOpenGL(QWidget *parent) : QMainWindow(parent)
{
	this->ui.setupUi(this);
}

void QtOpenGL::onPushButton()
{
	std::cout << "Hello There Push Button!" << std::endl;
}
