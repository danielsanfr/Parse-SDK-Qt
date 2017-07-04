#ifndef QPARSEQUERY_H
#define QPARSEQUERY_H

#include <QObject>

void tst();

namespace org {
namespace parseplatform {

class QParseQuery : public QObject
{
    Q_OBJECT
public:
    explicit QParseQuery(QObject *parent = nullptr);

signals:

public slots:
};

}
}

#endif // QPARSEQUERY_H
