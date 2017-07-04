#ifndef QPARSEOBJECTTEST_H
#define QPARSEOBJECTTEST_H

#include <QtTest/QtTest>

#include <QParseObject>

class QParseObjectTest : public QObject
{
    Q_OBJECT
private slots:
    void test();
private:
    org::parseplatform::QParseObject parseObject;
};

#endif // QPARSEOBJECTTEST_H
