#include "slidebaritem.h"
#include <QApplication>
#include "utils.h"
#include <QDebug>
#include <QIcon>

SlidebarItem::SlidebarItem(QString iconName, QString name)
{
    itemIconName = iconName;
    itemName = name;

    selectColor = "#2CA7F8";
    selectOpacity = 1.0;
}

bool SlidebarItem::sameAs(DSimpleListItem *item)
{
    return itemName == ((static_cast<SlidebarItem*>(item)))->itemName;
}

void SlidebarItem::drawBackground(QRect rect, QPainter *painter, int index, bool isSelect)
{
    if (isSelect) {
        QPainterPath path;
        path.addRect(QRectF(rect));
        painter->setOpacity(0.5);
        painter->fillPath(path, QColor("#D5EDFE"));

        QPen framePen;
        framePen.setColor("#2CA7F8");
        painter->setOpacity(0.5);
        painter->setPen(framePen);
        painter->drawPath(path);
        
        int rightPathWidth = 5;
        QPainterPath rightPath;
        rightPath.addRect(QRectF(rect.x() + rect.width() - rightPathWidth, rect.y(), rightPathWidth, rect.height()));
        painter->setOpacity(0.8);
        painter->fillPath(rightPath, QColor("#2CA7F8"));
    }
}

void SlidebarItem::drawForeground(QRect rect, QPainter *painter, int column, int, bool isSelect)
{
    // Init opacity and font size.
    painter->setOpacity(1);

    // Draw icon and process name.
    if (column == 1) {
        if (isSelect) {
            painter->setPen(QPen(QColor("#2CA7F8")));
        } else {
            painter->setPen(QPen(QColor("#000000")));
        }
        painter->setOpacity(1);

        Utils::setFontSize(*painter, 11);
        painter->drawText(QRect(rect.x(), rect.y(), rect.width(), rect.height()), Qt::AlignLeft | Qt::AlignVCenter, itemName);
    }
}
