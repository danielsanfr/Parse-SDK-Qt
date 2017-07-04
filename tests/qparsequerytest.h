#ifndef QPARSEQUERYTEST_H
#define QPARSEQUERYTEST_H

#include <QtTest/QtTest>

#include <QParseQuery>

//using namespace org::parseplatform;

class QParseQueryTest : public QObject
{
    Q_OBJECT
private slots:
    void test();
private:
    org::parseplatform::QParseQuery parseQuery;
};

#endif // QPARSEQUERYTEST_H
