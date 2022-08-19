#include "human.h"
#include <QPainter>
#include <QLabel>
#include<QBitmap>

Human::Human(QObject *parent) : QObject(parent)
{
    l_fName = new QLabel(this);
    l_lName = new QLabel(this);
    pic = new QLabel(this);
    pic->setGeometry(0, 0, 120, 120);
    QPixmap pix("/home/kleo/Pictures/cat.png");
    int w = pic->width();
    int h = pic->height();
    pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    queryLayout = new QVBoxLayout(this);
    this->l_fName->setText("Jonh");
    this->l_lName->setText("Dou");
    queryLayout->addWidget(pic);
    queryLayout->addWidget(l_fName);
    queryLayout->addWidget(l_lName);
    this->setLayout(queryLayout);

}

Human::~Human(){

}

void Human::setName(QString f_name, QString l_name, QString m_name)
{
    firstName= f_name;
    lastName=l_name;
    middleName= m_name;
}

void Human::addFather(Human *father_t)
{
    if(father_t == this){
        return; //
    }
    father = father_t;

}

void Human::addChild(Human *child)
{
    if (child == this){
        return;
    }
    children.push_back(child);
}

void Human::getName()
{
    qDebug()<<"done";
}

int Human::setDate(int x, int y, int z)
{
    qDebug()<<"done";
    return 1;
}

void Human::getDate()
{
    qDebug()<<"done";
}

void Human::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    /* Set the position of the graphical element in the graphic scene,
     * translate coordinates of the cursor within the graphic element
     * in the coordinate system of the graphic scenes
     * */
    this->setPos(mapToScene(event->pos()));
}

void Human::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (QApplication::mouseButtons() == Qt::LeftButton){
    this->setCursor(QCursor(Qt::ClosedHandCursor));
    Q_UNUSED(event);}
    if (QApplication::mouseButtons() == Qt::RightButton){
        this->deleteLater();
    }
}

void Human::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(QCursor(Qt::ArrowCursor));
    Q_UNUSED(event);
}






