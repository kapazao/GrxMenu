#include "usuario.h"
#include "ui_usuario.h"
#include "QProcess"
#include "QtDebug"

Usuario::Usuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Usuario)
{
    ui->setupUi(this);
}

Usuario::~Usuario()
{
    delete ui;
}

void Usuario::on_pushButton_clicked()
{
    QString s;
    QProcess process;
    s="(samAccountName="+ui->lineEdit_15->text()+")";
    process.start("sh", QStringList()<<"-c"<<"ldapsearch -QLLL -o ldif-wrap=no -b \'dc = grx\' \'"+s+"\'");
    process.waitForFinished(-1);
    qDebug() << process.readAll();

}
