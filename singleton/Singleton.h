#ifndef __SINGLETON_H__
#define __SINGLETON_H__

class Singleton;

Singleton *instance = nullptr;

class Singleton {
private:
	std::string data;

	Singleton(const std::string str) : data(str) { }

public:
	Singleton() = delete;

	static Singleton* createInstance(const std::string str) noexcept {
		if (!instance)
			instance = new Singleton(str);

		return instance;
	}

	std::string getData() const {
		return this->data;
	}
};

#endif /* __SINGLETON_H__ */
