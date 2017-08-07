#ifndef ABSTRACT_OBJECT_H
#define ABSTRACT_OBJECT_H

#include <iostream>
#include <string>

class abstractObject {

protected:	
	std::string _name;
	// A linked list way of finding other objects in the chain.
	abstractObject* _listLink;
public:
	abstractObject(std::string);
	std::string getInfo();	
	void appendObject(abstractObject*);
	void dumpObjectsInfo();
};

#endif
