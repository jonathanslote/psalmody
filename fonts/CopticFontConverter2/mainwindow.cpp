#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "translator.h"
#include "translatorcs.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    _from = CS;
    _to = UNICODE;

    ui->setupUi(this);

    setWindowTitle(tr("Coptic Font Converter Version 0.2 Alpha"));

    ui->fromComboBox->setCurrentIndex(_from);
    ui->toComboBox->setCurrentIndex(_to);
    ui->outputTextEdit->setFont( QFont("FreeSerifAvvaShenouda",12));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_convertPushButton_clicked()
{
    if (_to==_from)
    {
        QMessageBox::warning(this, tr("Coptic Font Converter"),
                                        tr("Please select different source and destination fonts."),
                                        QMessageBox::Ok);
        return;

    }

    QString text= ui->inputTextEdit->toPlainText();
    QString unicodeText;

    if (_from != UNICODE)
    {
        Translator transFrom;
       switch(_from)
       {
       case CS:
           {

            transFrom.Load("/Developer/cs.csv");

           }
           break;
       default:
           QMessageBox::warning(this, tr("Coptic Font Converter"),
                                           tr("Selected source font is not yet supported."),
                                           QMessageBox::Ok);
           return;
       }
       //if (transFrom == NULL)
       //    QMessageBox::warning(this, tr("Coptic Font Converter"),
       //                                    tr("Error creating source translator."),
       //                                    QMessageBox::Ok);
       unicodeText = transFrom.ToUnicode(text);
    }

    QString destText;

    if(_to != UNICODE)
    {
        //convert from unicode
    }
    else
        destText = unicodeText;

    ui->outputTextEdit->setText(destText);
    ui->outputTextEdit->selectAll();
    ui->outputTextEdit->setFont( QFont("FreeSerifAvvaShenouda",22));
}

void MainWindow::on_fromComboBox_currentIndexChanged(int index)
{
    _from=index;
}

void MainWindow::on_toComboBox_currentIndexChanged(int index)
{
    _to=index;
}
