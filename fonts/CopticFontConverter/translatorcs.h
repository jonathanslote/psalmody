#ifndef TRANSLATORCS_H
#define TRANSLATORCS_H

#include "translator.h"
#include <QChar>

class TranslatorCS : public Translator
{
public:
    TranslatorCS();
    virtual QString ToUnicode(QString text);
    virtual QString FromUnicode(QString text);
    virtual bool IsConnector(QChar aChar);
};

#endif // TRANSLATORCS_H
