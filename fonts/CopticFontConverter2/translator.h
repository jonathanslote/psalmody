#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <QString>
#include <QMap>


class Translator
{
public:
    Translator();
    virtual QString ToUnicode(QString text);
    virtual QString FromUnicode(QString text);
    virtual int Load(QString fname);

private:
    QMap<ushort,ushort> _toUnicodeMap;
    QMap<ushort,ushort> _fromUnicodeMap;
};

#endif // TRANSLATOR_H
