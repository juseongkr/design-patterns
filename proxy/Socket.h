#ifndef __SOCKET_H__
#define __SOCKET_H__

#include <iostream>

class Socket {
public:
	virtual void request() const = 0;
};

class NetworkSocket : public Socket {
public:
	NetworkSocket() {
		std::cout << "Socket created" << std::endl;
	}

	void request() const override {
		std::cout << "Network requested" << std::endl;
	}
};

class Proxy : public Socket {
private:
	NetworkSocket *network;

	bool connect() const {
		if (network) {
			std::cout << "Connecting..." << std::endl;
			return true;
		}
		return false;
	}

	bool disconnect() const {
		if (this->network) {
			std::cout << "Disconnecting..." << std::endl;
			delete this->network;
			return true;
		}
		return false;
	}

public:
	Proxy() {
		this->network = new NetworkSocket();
	}

	void request() const override {
		if (this->connect()) {
			this->network->request();
		}
	}

	~Proxy() {
		this->disconnect();
	}
};

#endif /* __SOCKET_H__ */
