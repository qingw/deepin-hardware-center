#ifndef SUMMARYPAGE_H
#define SUMMARYPAGE_H

#include <QWidget>
#include <QPaintEvent>

class SummaryPage : public QWidget 
{
    Q_OBJECT
    
public:
    SummaryPage(QWidget *parent = 0);
    
protected:
    void paintEvent(QPaintEvent *);
    
private:
    int titleFontSize;
    int titlePadding;
    int contentFontSize;
    int contentPadding;
};

#endif
