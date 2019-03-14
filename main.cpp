#include <QtCore/QCoreApplication>
#include "QtUdpSocket.h"
int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	QtUdpServer* qtUdpServer = new QtUdpServer;
	QtUdpClient* qtUdpClient = new QtUdpClient;

	//qtUdpServer->dataReceived();
	return a.exec();
}
