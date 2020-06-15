#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDate>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QTextBrowser;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow();

public slots:
    void setFontSize(int size);
    void setMonth(int month);
    void setYear(QDate date);

private:
    void insertCalendar();

    int fontSize;
    QDate selectedDate;
    QTextBrowser *editor;
};

#endif // MAINWINDOW_H
