#include <QCoreApplication>
#include <QDebug>
#include <QTest>
#include "dog.h"

//Update .Pro file:  QT += testlib

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Dog dog;
    QTest::qExec(&dog);

    return a.exec();
}
