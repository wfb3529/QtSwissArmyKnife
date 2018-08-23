﻿/*******************************************************************************
* The file is encoding with utf-8 (with BOM)
*
* I write the comment with English, it's not because that I'm good at English,
* but for "installing B".
*
* Copyright (C) 2018-2018 wuhai persionnal. All rights reserved.
*******************************************************************************/
#ifndef OUTPUTWINDOW_H
#define OUTPUTWINDOW_H

#include <QWidget>
#include <QDate>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QDebug>

namespace Ui{
class OutputWindow;
}

class OutputWindow : public QWidget
{
    Q_OBJECT
public:
    OutputWindow(QWidget *parent = Q_NULLPTR);
    ~OutputWindow();

private:
    Ui::OutputWindow *ui;
private slots:
    /// 重置计数
    void ResetCount();
    /// 输出数据（串口，网络接收到的数据）
    void OutputData(QByteArray data);
    /// 输出普通信息
    void OutputInfo(QString info, QString color = "black");
    /// 保存输出
    void SaveOutputData();
};

#endif  /// OUTPUTWINDOW_H