#ifndef SSH_H
#define SSH_H



extern "C"
{
#include "libssh2_config.h"
#include <libssh2.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/time.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#include <sys/types.h>
#ifdef HAVE_SYS_SELECT_H
#include <sys/select.h>
#endif
}
#include <QThread>
#include <QString>
#include "qdebug.h"

class Tunel : public QObject
{
Q_OBJECT
private:

    enum {
        AUTH_NONE = 0,
        AUTH_PASSWORD,
        AUTH_PUBLICKEY
    };

    int rc, i, auth = AUTH_NONE;
    struct sockaddr_in sin;
    socklen_t sinlen;
    const char *fingerprint;
    char *userauthlist;
    LIBSSH2_SESSION *session;
    LIBSSH2_CHANNEL *channel = NULL;
    const char *shost;
    unsigned int sport;
    fd_set fds;
    struct timeval tv;
    ssize_t len, wr;
    char buf[16384];
    int sockopt, sock = -1;
    int listensock = -1, forwardsock = -1;



public:


    const char *keyfile1 = "/home/usuario/.ssh/id_rsa.pub";
    const char *keyfile2 = "/home/usuario/.ssh/id_rsa";
    const char *username = "usuario";
    const char *password = "password";
    const char *server_ip = "10.10.10.10";
    const char *local_listenip = "127.0.0.1";
    unsigned int remote_port = 22;
    unsigned int local_listenport = 2223;
    const char *remote_desthost = "localhost";
    unsigned int remote_destport = 3306;//mysql


    explicit Tunel();
    ~Tunel();

    /*
     * Hace todo el proceso
     * Usa los datos de arriba
     */
   void crea_fordwarding();
    /*
     * Inicializa la libreria libssh2
     * Devuelve -1 en caso de error();
     * Es el primer paso para conectar por ssh
    */
    int inicia_libssh2();

    /*
     * Crea un socket con la ip y el puerto como parametro
     * Devuelve -1 en caso de error();
     * Es el segundo paso para conectar por ssh
    */
    int crea_socket(char *server_ip, unsigned int remote_port);

    /*
     * Crea una sesion con el socket creado en crea_socket
     * Devuelve -1 en caso de error();
     * Es el tercer paso para conectar por ssh
    */
    int crea_sesion();
    /*
     * Muestra el fingerprint (hostkey hash) de la conexion
     * Devuelve -1 en caso de error();
     * Este paso es el cuarto (*?no es obligatorio)
    */
    int muestra_fingerprint();

    /*
     * Muestra los metodos de autentificacion del servidor y nos autentifica
     * Devuelve -1 en caso de error();
     * Paso quinto
     */
    int autenticacion(char *username,char *password);

    int escucha(unsigned int local_listenport,char *local_listenip,unsigned int remote_destport);

    int cierra_conexion();
};

#endif 


