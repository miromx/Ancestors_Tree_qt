#ifndef HUMAN_H
#define HUMAN_H

#include <QObject>
#include <QObject>
#include <QWidget>
#include <QDate>
#include <QPixmap>
#include <QLabel>
#include <QVBoxLayout>
#include <QGraphicsItem>
#include <QDebug>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QCursor>
#include <QApplication>

class Human: public QWidget, public QGraphicsItem
{
    Q_OBJECT
public:
     explicit Human(QObject *parent = nullptr);
    ~Human();

//    QPixmap avatar, circ;
    QVBoxLayout *queryLayout;
    QLabel* pic, label;
    QLabel* l_fName;
    QLabel* l_lName;
    QLabel* l_mName;

//    void setAvatar(QPixmap pic);
//    QPixmap getAvatar(){return avatar;}

private:
    Human* father = nullptr;
    std::vector<Human *> children;
//    Human* mother = nullptr;
//    Human* sister = nullptr;
//    Human* brother = nullptr;
protected:
    static int id;
    QString firstName, lastName, middleName;
    QString placeOfBorn, liveNowAt;
    QString mobile_number;
    QString workName;
    QDate dateBorn;
    QDate dateDeath;
    bool isAlive = true;
    bool isFemale = true;
    int age=33;

    void setName(QString f_name, QString l_name, QString m_name);
    void getName();
    int setDate(int x, int y, int z);
    void getDate();

//    bool male(bool isFemale);
//    bool female(bool isFemale);

    void addFather(Human* father_t);
    void addChild(Human* child);

private:
//    QRectF boundingRect() const;
//    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
//    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
//    void mousePressEvent(QGraphicsSceneMouseEvent *event);
//    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif // HUMAN_H
