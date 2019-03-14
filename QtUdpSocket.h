#pragma once
#include <qthread.h>
#include <qudpsocket.h>
#include <qtimer.h>

class QtUdpServer :
	public QThread
{
	Q_OBJECT
public:
	QtUdpServer();
	~QtUdpServer();

private:
	QUdpSocket *udpServer;
public:
	void initSocket();
public slots:
	void dataReceived();
};

class QtUdpClient :
	public QThread
{
	Q_OBJECT
public:
	QtUdpClient();
	~QtUdpClient();

private:
	QUdpSocket *udpClient;
	QTimer* timer;
public slots:
	void dataSend();
};