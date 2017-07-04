#ifndef QPARSEOBJECT_H
#define QPARSEOBJECT_H

#include <QObject>

namespace org {
namespace parseplatform {

class QParseObject : public QObject
{
    Q_OBJECT
public:
    explicit QParseObject(QObject *parent = nullptr);

signals:

public slots:
};

}
}

#endif // QPARSEOBJECT_H
