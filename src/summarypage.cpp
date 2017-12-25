#include "summarypage.h"
#include "utils.h"
#include <QPen>
#include <QPainter>

SummaryPage::SummaryPage(QWidget *parent) : QWidget(parent)
{
    titleFontSize = 16;
    titlePadding = 32;
    contentFontSize = 14;
    contentPadding = 64;
}

void SummaryPage::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    
    int titleLineHeight = 80;
    int contentLineOffset = 40;

    Utils::setFontSize(painter, titleFontSize);
    painter.setPen(QPen(QColor("#2CA7F8")));
    painter.drawText(QRect(rect().x() + titlePadding, rect().y(), rect().width(), titleFontSize * 2), Qt::AlignLeft, "操作系统");
    
    Utils::setFontSize(painter, contentFontSize);
    painter.setPen(QPen(QColor("#000000")));
    painter.drawText(QRect(rect().x() + contentPadding, rect().y() + contentLineOffset, rect().width(), contentFontSize * 2), Qt::AlignLeft, 
                     "Deepin 15.5 桌面版");

    Utils::setFontSize(painter, titleFontSize);
    painter.setPen(QPen(QColor("#2CA7F8")));
    painter.drawText(QRect(rect().x() + titlePadding, rect().y() + titleLineHeight, rect().width(), titleFontSize * 2), Qt::AlignLeft, "处理器");

    Utils::setFontSize(painter, contentFontSize);
    painter.setPen(QPen(QColor("#000000")));
    painter.drawText(QRect(rect().x() + contentPadding, rect().y() + titleLineHeight + contentLineOffset, rect().width(), contentFontSize * 2), Qt::AlignLeft, 
                     "Intel(R) Core(TM) i7-4710MQ @ 2.50GHz x 8");
    
    Utils::setFontSize(painter, titleFontSize);
    painter.setPen(QPen(QColor("#2CA7F8")));
    painter.drawText(QRect(rect().x() + titlePadding, rect().y() + titleLineHeight * 2, rect().width(), titleFontSize * 2), Qt::AlignLeft, "内存");
    
    Utils::setFontSize(painter, contentFontSize);
    painter.setPen(QPen(QColor("#000000")));
    painter.drawText(QRect(rect().x() + contentPadding, rect().y() + titleLineHeight * 2 + contentLineOffset, rect().width(), contentFontSize * 2), Qt::AlignLeft, 
                     "8GB DDR3");

    Utils::setFontSize(painter, titleFontSize);
    painter.setPen(QPen(QColor("#2CA7F8")));
    painter.drawText(QRect(rect().x() + titlePadding, rect().y() + titleLineHeight * 3, rect().width(), titleFontSize * 2), Qt::AlignLeft, "主板");
    
    Utils::setFontSize(painter, contentFontSize);
    painter.setPen(QPen(QColor("#000000")));
    painter.drawText(QRect(rect().x() + contentPadding, rect().y() + titleLineHeight * 3 + contentLineOffset, rect().width(), contentFontSize * 2), Qt::AlignLeft, 
                     "LENOVO ThinkPad T440p");

    Utils::setFontSize(painter, titleFontSize);
    painter.setPen(QPen(QColor("#2CA7F8")));
    painter.drawText(QRect(rect().x() + titlePadding, rect().y() + titleLineHeight * 4, rect().width(), titleFontSize * 2), Qt::AlignLeft, "显卡");
    
    Utils::setFontSize(painter, contentFontSize);
    painter.setPen(QPen(QColor("#000000")));
    painter.drawText(QRect(rect().x() + contentPadding, rect().y() + titleLineHeight * 4 + contentLineOffset, rect().width(), contentFontSize * 2), Qt::AlignLeft, 
                     "NVIDIA Corporation GK208M [GeForce GT 730M]");

    Utils::setFontSize(painter, titleFontSize);
    painter.setPen(QPen(QColor("#2CA7F8")));
    painter.drawText(QRect(rect().x() + titlePadding, rect().y() + titleLineHeight * 5, rect().width(), titleFontSize * 2), Qt::AlignLeft, "存储");
    
    Utils::setFontSize(painter, contentFontSize);
    painter.setPen(QPen(QColor("#000000")));
    painter.drawText(QRect(rect().x() + contentPadding, rect().y() + titleLineHeight * 5 + contentLineOffset, rect().width(), contentFontSize * 2), Qt::AlignLeft, 
                     "ATA 1TB");

    Utils::setFontSize(painter, titleFontSize);
    painter.setPen(QPen(QColor("#2CA7F8")));
    painter.drawText(QRect(rect().x() + titlePadding, rect().y() + titleLineHeight * 6, rect().width(), titleFontSize * 2), Qt::AlignLeft, "光驱");
    
    Utils::setFontSize(painter, contentFontSize);
    painter.setPen(QPen(QColor("#000000")));
    painter.drawText(QRect(rect().x() + contentPadding, rect().y() + titleLineHeight * 6 + contentLineOffset, rect().width(), contentFontSize * 2), Qt::AlignLeft, 
                     "未检测到");
    
    Utils::setFontSize(painter, titleFontSize);
    painter.setPen(QPen(QColor("#2CA7F8")));
    painter.drawText(QRect(rect().x() + titlePadding, rect().y() + titleLineHeight * 7, rect().width(), titleFontSize * 2), Qt::AlignLeft, "声卡");
    
    Utils::setFontSize(painter, contentFontSize);
    painter.setPen(QPen(QColor("#000000")));
    painter.drawText(QRect(rect().x() + contentPadding, rect().y() + titleLineHeight * 7 + contentLineOffset, rect().width(), contentFontSize * 2), Qt::AlignLeft, 
                     "Intel Corporation 8 Series/C220 Series Chipset High Definition Audio Controller");

    Utils::setFontSize(painter, titleFontSize);
    painter.setPen(QPen(QColor("#2CA7F8")));
    painter.drawText(QRect(rect().x() + titlePadding, rect().y() + titleLineHeight * 8, rect().width(), titleFontSize * 2), Qt::AlignLeft, "外接设备");
    
    Utils::setFontSize(painter, contentFontSize);
    painter.setPen(QPen(QColor("#000000")));
    painter.drawText(QRect(rect().x() + contentPadding, rect().y() + titleLineHeight * 8 + contentLineOffset, rect().width(), contentFontSize * 2), Qt::AlignLeft, 
                     "ThinkPad keyboard");


    Utils::setFontSize(painter, titleFontSize);
    painter.setPen(QPen(QColor("#2CA7F8")));
    painter.drawText(QRect(rect().x() + titlePadding, rect().y() + titleLineHeight * 9, rect().width(), titleFontSize * 2), Qt::AlignLeft, "网卡");
    
    Utils::setFontSize(painter, contentFontSize);
    painter.setPen(QPen(QColor("#000000")));
    painter.drawText(QRect(rect().x() + contentPadding, rect().y() + titleLineHeight * 9 + contentLineOffset, rect().width(), contentFontSize * 2), Qt::AlignLeft, 
                     "Intel Corporation Wireless 7260");
}
