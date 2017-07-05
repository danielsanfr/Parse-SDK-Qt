#ifndef QPARSEOBJECTTEST_H
#define QPARSEOBJECTTEST_H

#include <QtTest/QtTest>

#include <QParseObject>

#include "autotest.h"

class QParseObjectTest : public QObject
{
    Q_OBJECT
private slots:
    void test();
private:
    org::parseplatform::QParseObject parseObject;
};

#if defined(ALL_TESTS) || defined(TEST_PARSE_OBJECT)
DECLARE_TEST(QParseObjectTest)
#endif

#endif // QPARSEOBJECTTEST_H
