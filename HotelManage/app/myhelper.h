
#ifndef MYHELPER_H
#define MYHELPER_H

#include <QTextCodec>
#include <QMessageBox>
#include <QInputDialog>
#include <QFile>
#include <QTranslator>

#include <QObject>

class myHelper : public QObject
{
    Q_OBJECT
public:
    static void SetGBK2312Code();//设置编码为GB2312
    static void SetUTF8Code();//设置编码为UTF8
    static void SetStyle(const QString &StyleName);//设置皮肤样式
    static void SetChinese();//加载中文字符

    static void Sleep(int sec);//延时

    static void SetMessage(const QString &msg,int type);//设置消息框的参数，样式……

    static void ShowMessageBoxInfo(QString info);//显示信息框
    static void ShowMessageBoxError(QString info);//显示错误框
    static int ShowMessageBoxQuesion(QString info);//显示询问框
    static QString ShowInputBox(QWidget *frm,QString info);//显示标准输入框
    static int ShowMessageBoxPayInfo(QString info);//显示付款信息框

    static bool FileIsExist(QString strFile);
    static bool CopyFile(QString sourceFile,QString targetFile);//复制文件

    static void SetSystemDateTime(int year,int month,int day,int hour,int min,int sec);//设置系统时间

    //写操作日志
//    static void MyLoginBlog(QString tablename,QString Trigger,
//                            QString BlogContent,QString UserName);
    static void MyLoginBlog(QString tablename = "",QString Trigger= "",
                                QString BlogContent="",QString UserName="");

public:
    explicit myHelper(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // MYHELPER_H
