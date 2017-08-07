#include <iostream>
#include <string>
#include "abstractobject.h"

abstractObject::abstractObject(std::string name) {
	std::cout << "Constructing abstractObject..." << std::endl;
	_name = name;	
}

std::string abstractObject::getInfo() {
	std::string info = "";
	info += "abstractObject:\n";
	info += "	name: " + _name + "\n";
	return info;
}

void abstractObject::appendObject(abstractObject* object) {
	if (_listLink == NULL) {
		_listLink = object;
	} else {
		_listLink->appendObject(object);
	}
}

void abstractObject::dumpObjectsInfo() {
	std::cout << getInfo() << std::endl;
	if (_listLink != NULL) {
		_listLink->dumpObjectsInfo();
	}
}
