#include <iostream>
#include <WS2tcpip.h>
#include <string>

#pragma comment (lib, "ws2_32.lib")

using namespace std;

void enviarInfo(int port, string mensaje) {

	string ipAddress = "127.0.0.1";

	// INICIAMOS WINSOCK
	WSAData data;
	WORD ver = MAKEWORD(2, 2);
	int wsResult = WSAStartup(ver, &data);
	if (wsResult != 0) {
		cerr << "No se pudo iniciar el Winsock. Error: #" << wsResult << endl;
		return;
	}

	// CREAMOS EL SOCKET
	SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock == INVALID_SOCKET) {
		cerr << "No se pudo crear el socket. Error: #" << WSAGetLastError() << endl;
		WSACleanup();
		return;
	}

	// LLENAR EL HINT
	sockaddr_in hint;
	hint.sin_family = AF_INET;
	hint.sin_port = htons(port);
	inet_pton(AF_INET, ipAddress.c_str(), &hint.sin_addr);

	// CONECTAR AL SERVIDOR
	int connResult = connect(sock, (sockaddr*)&hint, sizeof(hint));
	if (connResult == SOCKET_ERROR) {
		cerr << "No se pudo conectar con el servidor. Error: #" << WSAGetLastError() << endl;
		closesocket(sock);
		WSACleanup();
		return;
	}

	// ENVIA EL MENSAJE AL SERVIDOR
	int sendResult = send(sock, mensaje.c_str(), mensaje.size() + 1, 0);

	// CERRAR TODO EL PROGRAMA

	closesocket(sock);
	WSACleanup();
}