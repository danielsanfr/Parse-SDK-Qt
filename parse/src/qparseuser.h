#ifndef QPARSEUSER_H
#define QPARSEUSER_H

#include <QObject>

#include "qparseobject.h"

namespace org {
namespace parseplatform {

class QParseUser : public QParseObject
{
    Q_OBJECT
public:
    explicit QParseUser(QObject *parent = nullptr);
};

}
}

#endif // QPARSEUSER_H
