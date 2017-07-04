#include <QtTest/QtTest>
#include <QList>

#include "qparseobjecttest.h"
#include "qparseusertest.h"
#include "qparsequerytest.h"

int main(int argc, char *argv[])
{
    QList<QObject *> tests = QList<QObject *>()
            << new QParseObjectTest()
            << new QParseUserTest()
            << new QParseQueryTest();

    for (int i = 0; i < tests.length(); ++i) {
        int result = QTest::qExec(tests.at(i), argc, argv);
        if (result != 0) {
            return result;
        }
    }

    return 0;
}
