#ifndef QPARSEUSERTEST_H
#define QPARSEUSERTEST_H

#include <QtTest/QtTest>

#include <QParseUser>

#include "autotest.h"

class QParseUserTest : public QObject
{
    Q_OBJECT
private slots:
    void test();
private:
    org::parseplatform::QParseUser parseUser;
};

#if defined(ALL_TESTS) || defined(TEST_PARSE_USER)
DECLARE_TEST(QParseUserTest)
#endif

#endif // QPARSEUSERTEST_H
