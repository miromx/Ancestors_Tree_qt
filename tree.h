#ifndef TREE_H
#define TREE_H

#include <QObject>
#include <QWidget>
#include <map>
#include "human.h"

class Tree : public QWidget
{
    Q_OBJECT
public:
    explicit Tree(QWidget *parent = nullptr);
protected:

    std::map<int, Human*> familyList;

    void addFather(Human*);
//    void addMother(Human*);
//    void addSister(Human*);
//    void setBrother(Human*);


signals:

};

#endif // TREE_H
