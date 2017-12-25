/* -*- Mode: C++; indent-tabs-mode: nil; tab-width: 4 -*-
 * -*- coding: utf-8 -*-
 *
 * Copyright (C) 2011 ~ 2017 Deepin, Inc.
 *               2011 ~ 2017 Wang Yong
 *
 * Author:     Wang Yong <wangyong@deepin.com>
 * Maintainer: Wang Yong <wangyong@deepin.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "mainwindow.h"
#include <DTitlebar>
#include <QLabel>
#include <QDebug>
#include <QSvgWidget>
#include "dthememanager.h"
#include "utils.h"
#include "slidebaritem.h"

MainWindow::MainWindow(DMainWindow *parent) : DMainWindow(parent)
{
    DThemeManager::instance()->setTheme("light");

    installEventFilter(this);   // add event filter

    layoutWidget = new QWidget();
    layout = new QHBoxLayout(layoutWidget);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);

    this->setCentralWidget(layoutWidget);

    QPixmap iconPixmap = QPixmap(Utils::getQrcPath("logo_24.svg"));
    QLabel *iconLabel = new QLabel();
    iconLabel->setPixmap(iconPixmap);
    iconLabel->setFixedSize(24, 40);

    this->titlebar()->setSeparatorVisible(true);
    
    listViewWidget = new QWidget();
    listViewWidget->setStyleSheet("background-color: #F9F9FA");
    listViewLayout = new QVBoxLayout(listViewWidget);
    listViewLayout->setContentsMargins(0, 0, 0, 0);
    listViewLayout->setSpacing(0);
    
    listView = new DSimpleListView();
    listView->setRowHeight(36);
    listView->setFixedWidth(180);
    
    QList<QString> titles;
    titles << "icon" << "application";
    QList<int> widths;
    widths << 24 << -1;
    listView->setColumnTitleInfo(titles, widths, 0);
    
    QStringList slidebarItemNames;
    slidebarItemNames << "总览" << "操作系统" << "处理器" << "内存" << "主板" << "显卡" << "存储" << "光驱" << "声卡" << "外接设备" << "网卡";
    for (QString slidebarItemName : slidebarItemNames) {
        SlidebarItem *item = new SlidebarItem(slidebarItemName, slidebarItemName);
        items << item;
    }
    listView->addItems(items);

    summaryPage = new SummaryPage();
    
    listViewLayout->addWidget(listView);
    
    layout->addWidget(listViewWidget, 0);
    layout->addWidget(summaryPage, 1);
}

MainWindow::~MainWindow()
{
    // We don't need clean pointers because application has exit here.
}

void MainWindow::keyPressEvent(QKeyEvent *keyEvent)
{
}

void MainWindow::resizeEvent(QResizeEvent*)
{
}
