#ifndef QPARSEUSERTEST_H
#define QPARSEUSERTEST_H

#include <QtTest/QtTest>

#include <QParseUser>

class QParseUserTest : public QObject
{
    Q_OBJECT
private slots:
    void test();
private:
    org::parseplatform::QParseUser parseUser;
};

#endif // QPARSEUSERTEST_H
