#include <iostream>
#include "worldstate.h"

Worldstate::Worldstate(std::string name) {
	std::cout << "Constructing Worldstate..." << std::endl;
	_name = name;
	_rootObject = new abstractObject("root");	
}

std::string Worldstate::getInfo() {
	std::string info = "";
	info += "WorldState:\n";
	info += "	name: " + _name + "\n";
	return info;
}

std::string Worldstate::getObjectsInfo() {
	std::cout << "Get object info" << std::endl;
}

void Worldstate::appendObject(abstractObject* object) {
	// Find the last element of the object chain and append the
	// new object to it.
}
