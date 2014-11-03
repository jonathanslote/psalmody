#include "translator.h"
#include <QFile>
#include <QTextStream>

Translator::Translator()
{
}

QString Translator::ToUnicode(QString text)
{
    QString str = "";
    return str;
}

QString Translator::FromUnicode(QString text)
{
    QString str = "";
    return str;
}

int Translator::Load(QString fname)
{
    QFile file(fname);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QFile::FileError err = file.error();
        return -1;
    }

    QTextStream in(&file);
    QString temp = file.readLine(); //name
    temp = in.readLine(); //whether to reorder connectives
    while (!file.atEnd())
    {
        QString line = in.readLine();
        QString one;
        QString two;
        int oneStart = 0;
        int oneEnd = 0;
        int twoStart = 0;
        int twoEnd = 0;
        int i = 0;

        while (line[i] != ',') i++;
        oneStart = i+1; i++;
        while (line[i] != ',') i++;
        oneEnd = i-1; i++;
        while (line[i] != ',') i++;
        twoStart = i+1; i++;
        while (line[i] != ',') i++;
        twoEnd = i-1;

        for (int i = oneStart; i<=oneEnd; i++)
            one.append(line[i]);
        for (int i = twoStart; i< twoEnd; i++)
            two.append(line[i]);

        ushort oneCode = one.toInt(0,16);
        ushort twoCode = two.toInt(0,16);


        _fromUnicodeMap.insert(oneCode,twoCode);

        _toUnicodeMap.insert(twoCode,oneCode);



    }
    return 0;
}
