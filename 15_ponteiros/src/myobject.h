#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QObject>

class MyObject : public QObject
{
    Q_OBJECT
public:
    explicit MyObject(QObject *parent = nullptr)
        : QObject(parent)
        , obj(new QObject(this)) {}

    ~MyObject() { qDebug("Objeto %p destruído", this); }

private:
    QObject *obj;
};

#endif // MYOBJECT_H
