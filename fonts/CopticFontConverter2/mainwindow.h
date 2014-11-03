#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

#define UNICODE 0
#define COPTICSTANDARD  1
#define CS  1
#define AVVASHENOUDA    2
#define COPT    3
#define COPTMS  4
#define COPTOMS 5
#define KOPTOSMS    6
#define PISHOI  7
#define ATHANASIUS  8

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    char _from;
    char _to;

private slots:
    void on_toComboBox_currentIndexChanged(int index);
    void on_fromComboBox_currentIndexChanged(int index);
    void on_convertPushButton_clicked();
};

#endif // MAINWINDOW_H
