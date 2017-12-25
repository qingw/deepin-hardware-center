#ifndef SLIDEBARITEM_H
#define SLIDEBARITEM_H

#include <DSimpleListItem>

DWIDGET_USE_NAMESPACE

class SlidebarItem : public DSimpleListItem 
{
    Q_OBJECT
    
public:
    SlidebarItem(QString iconName, QString name);
    
    bool sameAs(DSimpleListItem *item);
    void drawBackground(QRect rect, QPainter *painter, int index, bool isSelect);
    void drawForeground(QRect rect, QPainter *painter, int column, int index, bool isSelect);
    
private:
    QString itemIconName;
    QString itemName;
    
    QString selectColor;
    double selectOpacity;
    QPixmap iconPixmap;
    int iconSize;
    int iconPadding;
};

#endif
