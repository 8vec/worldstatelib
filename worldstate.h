#ifndef WORLDSTATE_H
#define WORLDSTATE_H

#include "abstractobject.h"
#include <string>

class Worldstate {
private:
	std::string _name;
	abstractObject* _rootObject;
public:
	Worldstate(std::string);
	std::string getInfo();
	std::string getObjectsInfo();
	void appendObject(abstractObject*);
};

#endif
