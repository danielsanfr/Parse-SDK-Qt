#ifndef QPARSEQUERYTEST_H
#define QPARSEQUERYTEST_H

#include <QtTest/QtTest>

#include <QParseQuery>

#include "autotest.h"

class QParseQueryTest : public QObject
{
    Q_OBJECT
private slots:
    void test();
private:
    org::parseplatform::QParseQuery parseQuery;
};

#if defined(ALL_TESTS) || defined(TEST_PARSE_QUERY)
DECLARE_TEST(QParseQueryTest)
#endif

#endif // QPARSEQUERYTEST_H
