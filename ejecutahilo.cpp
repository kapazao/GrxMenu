#include "ejecutahilo.h"
#include "qdebug.h"
#include "nmap_xml.h"
#include "qdebug.h"
ejecutaHilo::ejecutaHilo(QString ip_servidor){
     ip=ip_servidor;
}

void ejecutaHilo::ejecuta() {
    QString resultado;
    NMap* nmap = new NMap();
    QList<QString> puertos;
    nmap->nmap_run_scan("-vvv -p22,80,8080,9100,443,139",ip);
    puertos= nmap->nmap_ports_open(ip);
    if (!puertos.isEmpty()){
      foreach( ip, puertos )
        qDebug()<<"Puerto abierto: "<<ip;
    } else{
       qDebug()<<"No se han encontrado puertos abiertos.";
    }
    delete nmap;

    resultado = "por aqui si";
    //emit resultadoListo(resultado);
    emit resultadoListo(puertos);
}



