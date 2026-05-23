#ifndef TESTGITHELPER_H
#define TESTGITHELPER_H


#include <QObject>

class TestGitHelper : public QObject
{
    Q_OBJECT
public:
    explicit TestGitHelper(QObject *parent = nullptr);

    void doSomething();
    int calculate(int a, int b);
};

#endif // TESTGITHELPER_H
