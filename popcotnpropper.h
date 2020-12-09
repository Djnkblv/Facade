#ifndef POPCOTNPROPPER_H
#define POPCOTNPROPPER_H

#include <QString>
#include <iostream>

using namespace std;

class PopcornPopper
{
private:
    QString description;
public:
    PopcornPopper(QString description);
    void on();
    void off();
    void pop();
    QString toString();
};
#endif // POPCOTNPROPPER_H
