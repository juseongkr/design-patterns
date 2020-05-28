#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include <unordered_set>

class Subject {
private:
	std::unordered_set<Observer*> observers;

public:
	Subject() { }

	void subscribe(Observer *ob) {
		this->observers.insert(ob);
	}

	void unsubscribe(Observer *ob) {
		if (this->observers.count(ob)) {
			observers.erase(ob);
		}
	}

	void nofity(const std::string cmd) const {
		for (auto &ob : this->observers) {
			ob->update(cmd);
		}
	}

	void printObservers() const {
		for (auto &ob : this->observers) {
			std::cout << ob->getState() << std::endl;
		}
	}

	~Subject() {
		for (auto &ob : this->observers) {
			delete ob;
		}
		this->observers.clear();
	}
};

#endif /* __SUBJECT_H__ */
