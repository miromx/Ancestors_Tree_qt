#ifndef ANCESTOR_H
#define ANCESTOR_H

#include <QObject>
#include <QWidget>
#include <QDate>
#include <QPixmap>

class Ancestor : public QWidget
{
    Q_OBJECT
public:
    explicit Ancestor(QWidget *parent = nullptr);
    virtual ~Ancestor();
protected:
    static int id;
    QString firstName,lastName, middleName;
    QString placeOfBorn, liveNow;
    QString workName;
    QDate dateBorn;
    QDate dateDeath;
    bool isAlive = true;
    bool isFemale = true;
    int age;
    QPixmap avatar;

protected:
    virtual void setAncName(QString f_name, QString l_name, QString m_name) = 0;
    virtual void getAncName() = 0;
    virtual int setAncDate(int x, int y, int z) = 0;
    virtual void getAncDate() = 0;
    bool male(bool isFemale);
    bool female(bool isFemale);
    void setAvatar(QPixmap pic);
    QPixmap getAvatar(){return avatar;}



signals:

};

#endif // ANCESTOR_H
