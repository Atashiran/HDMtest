#include "TestGitHelper.h"
#include <QDebug>

TestGitHelper::TestGitHelper(QObject *parent) : QObject(parent)
{
}

void TestGitHelper::doSomething()
{
    qDebug() << "این یک تابع تست برای تمرین Git است";
}

int TestGitHelper::calculate(int a, int b)
{
    return a + b;
}
