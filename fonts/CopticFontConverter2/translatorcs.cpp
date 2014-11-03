#include "translatorcs.h"
#include <QChar>
#include <QMessageBox>

TranslatorCS::TranslatorCS()
{
}

QString TranslatorCS::ToUnicode(QString text)
{
    QString unicodeText;
    QString unknownChars;
    unicodeText.resize(text.length());
    for (int i = 0; i<text.length(); i++)
    {
        ushort code = text[i].unicode();
        switch(code)
        {
        //case 0x0041: unicodeText[i]=0x2C80; break;

           case 0x0021: unicodeText[i]=	0x0021; break;
           case 0x0022: unicodeText[i]=	0x2CAE; break;
           case 0x0023: unicodeText[i]=	0x0023; break;
           case 0x0024: unicodeText[i]=	0x0024; break;
           case 0x0025: unicodeText[i]=	0x0025; break;
           case 0x0026: unicodeText[i]=	0x003B; break;
           case 0x0027: unicodeText[i]=	0x2CAF; break;
           case 0x0028: unicodeText[i]=	0x0028; break;
           case 0x0029: unicodeText[i]=	0x0029; break;
           case 0x002A: unicodeText[i]=	0x002A; break;
           case 0x002B: unicodeText[i]=	0x002B; break;
           case 0x002C: unicodeText[i]=	0x2CAD; break;
           case 0x002D: unicodeText[i]=	0x002D; break;
           case 0x002E: unicodeText[i]=	0x002E; break;
           case 0x002F: unicodeText[i]=	0x002F; break;
           case 0x0030: unicodeText[i]=	0x0030; break;
           case 0x0031: unicodeText[i]=	0x0031; break;
           case 0x0032: unicodeText[i]=	0x0032; break;
           case 0x0033: unicodeText[i]=	0x0033; break;
           case 0x0034: unicodeText[i]=	0x0034; break;
           case 0x0035: unicodeText[i]=	0x0035; break;
           case 0x0036: unicodeText[i]=	0x0036; break;
           case 0x0037: unicodeText[i]=	0x0037; break;
           case 0x0038: unicodeText[i]=	0x0038; break;
           case 0x0039: unicodeText[i]=	0x0039; break;
           case 0x003A: unicodeText[i]=	0x2C90; break;
           case 0x003B: unicodeText[i]=	0x2C91; break;
           case 0x003C: unicodeText[i]=	0x2CAC; break;
           case 0x003D: unicodeText[i]=	0x0305; break;
           case 0x003E: unicodeText[i]=	0x002C; break;
           case 0x003F: unicodeText[i]=	0x003F; break;
           case 0x0040: unicodeText[i]=	0x003A; break;
           case 0x0041: unicodeText[i]=	0x2C80; break;
           case 0x0042: unicodeText[i]=	0x2C82; break;
           case 0x0043: unicodeText[i]=	0x2CA4; break;
           case 0x0044: unicodeText[i]=	0x2C86; break;
           case 0x0045: unicodeText[i]=	0x2C88; break;
           case 0x0046: unicodeText[i]=	0x03E5; break;
           case 0x0047: unicodeText[i]=	0x2C84; break;
           case 0x0048: unicodeText[i]=	0x03E8; break;
           case 0x0049: unicodeText[i]=	0x2C92; break;
           case 0x004A: unicodeText[i]=	0x03EA; break;
           case 0x004B: unicodeText[i]=	0x2C94; break;
           case 0x004C: unicodeText[i]=	0x2C96; break;
           case 0x004D: unicodeText[i]=	0x2C98; break;
           case 0x004E: unicodeText[i]=	0x2C9A; break;
           case 0x004F: unicodeText[i]=	0x2C9E; break;
           case 0x0050: unicodeText[i]=	0x2CA0; break;
           case 0x0051: unicodeText[i]=	0x03E6; break;
           case 0x0052: unicodeText[i]=	0x2CA2; break;
           case 0x0053: unicodeText[i]=	0x03E2; break;
           case 0x0054: unicodeText[i]=	0x2CA6; break;
           case 0x0055: unicodeText[i]=	0x2CA8; break;
           case 0x0056: unicodeText[i]=	0x2CAA; break;
           case 0x0057: unicodeText[i]=	0x2CB0; break;
           case 0x0058: unicodeText[i]=	0x2C9C; break;
           case 0x0059: unicodeText[i]=	0x2C8E; break;
           case 0x005A: unicodeText[i]=	0x2C8C; break;
           case 0x005B: unicodeText[i]=	0x03ED; break;
           case 0x005C: unicodeText[i]=	0x2CE3; break;
           case 0x005D: unicodeText[i]=	0x03EF; break;
           case 0x005E: unicodeText[i]=	0x2C8B; break;
           case 0x005F: unicodeText[i]=	0x003D; break;
           case 0x0060: unicodeText[i]=	0x0300; break;
           case 0x0061: unicodeText[i]=	0x2C81; break;
           case 0x0062: unicodeText[i]=	0x2C83; break;
           case 0x0063: unicodeText[i]=	0x2CA5; break;
           case 0x0064: unicodeText[i]=	0x2C87; break;
           case 0x0065: unicodeText[i]=	0x2C89; break;
           case 0x0066: unicodeText[i]=	0x03E5; break;
           case 0x0067: unicodeText[i]=	0x2C85; break;
           case 0x0068: unicodeText[i]=	0x03E9; break;
           case 0x0069: unicodeText[i]=	0x2C93; break;
           case 0x006A: unicodeText[i]=	0x03EB; break;
           case 0x006B: unicodeText[i]=	0x2C95; break;
           case 0x006C: unicodeText[i]=	0x2C97; break;
           case 0x006D: unicodeText[i]=	0x2C99; break;
           case 0x006E: unicodeText[i]=	0x2C9B; break;
           case 0x006F: unicodeText[i]=	0x2C9F; break;
           case 0x0070: unicodeText[i]=	0x2CA1; break;
           case 0x0071: unicodeText[i]=	0x03E7; break;
           case 0x0072: unicodeText[i]=	0x2CA3; break;
           case 0x0073: unicodeText[i]=	0x03E3; break;
           case 0x0074: unicodeText[i]=	0x2CA7; break;
           case 0x0075: unicodeText[i]=	0x2CA9; break;
           case 0x0076: unicodeText[i]=	0x2CAB; break;
           case 0x0077: unicodeText[i]=	0x2CB1; break;
           case 0x0078: unicodeText[i]=	0x2C9D; break;
           case 0x0079: unicodeText[i]=	0x2C8F; break;
           case 0x007A: unicodeText[i]=	0x2C8D; break;
           case 0x007B: unicodeText[i]=	0x03ED; break;
           case 0x007C: unicodeText[i]=	0x2CC9; break;
           case 0x007D: unicodeText[i]=	0x03EE; break;
           case 0x007E: unicodeText[i]=	0x0323; break;
           case 0x00C7: unicodeText[i]=	0x0308; break;
           case 0x00C9: unicodeText[i]=	0x0307; break;
           case 0x00C8: unicodeText[i]=	0x0301; break;
           //case 0x00CD: unicodeText[i]=	;  break;
           case 0x00B7: unicodeText[i]=	0x00B7; break;
           case 0x00A1: unicodeText[i]=	0x2CEA; break;
           //case 0x00BF: unicodeText[i]=	; break;
           case 0x00A5: unicodeText[i]=	0x2CE9; break;
           case 0x00A8: unicodeText[i]=	0x2CED; break;
           case 0x00A3: unicodeText[i]=	0x2CEB; break;
           case 0x00A2: unicodeText[i]=	0x2CE5; break;


        default: unknownChars.append(text[i]); unicodeText[i]=text[i];
        }

        //QString msg = "The following characters were not recognized and were passed as is:\n"+unknownChars;

        //QMessageBox::warning(this, QString("Coptic Font Converter"),
       //                                 msg,
       //                                 QMessageBox::Ok);
    }


    //switch connective orders. place in method when figure out structure of convertors

    for (int i = 0; i<unicodeText.length()-1; i++)
    {

        if (IsConnector(unicodeText[i]))
        {
           ushort connector = unicodeText[i].unicode();
           ushort letter = unicodeText[i+1].unicode();

           unicodeText[i]=letter;

           unicodeText[i+1]=connector;

           i++; //skip over it so we don't keep moving it until it's at the end!
        }
    }

    return unicodeText;
}

bool TranslatorCS::IsConnector(QChar aChar)
{
    if (aChar.unicode() == 0x0300) return true;
    if (aChar.unicode() == 0x0301) return true;
    if (aChar.unicode() == 0x0302) return true;
    if (aChar.unicode() == 0x0304) return true;
    if (aChar.unicode() == 0x0305) return true;
    if (aChar.unicode() == 0x0307) return true;
    if (aChar.unicode() == 0x0308) return true;
    if (aChar.unicode() == 0x0311) return true;
    if (aChar.unicode() == 0x0323) return true;
    if (aChar.unicode() == 0x035E) return true;
    if (aChar.unicode() == 0x0361) return true;
    return false;
}

QString TranslatorCS::FromUnicode(QString text)
{
    return 0;
}
