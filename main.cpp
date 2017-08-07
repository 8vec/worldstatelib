#include <iostream>
#include "worldstate.h"
#include "abstractobject.h"

int main(void) {
	std::cout << "Starup..." << std::endl;
	// Test creation of abstract object.
	abstractObject root("root");
	root.getInfo();
	abstractObject* one = new abstractObject("one");
	abstractObject* two = new abstractObject("two");
	root.appendObject(one);
	root.appendObject(two);
	root.dumpObjectsInfo();	
	// Test creation of world state.	
	Worldstate w("testworld");
	std::cout << w.getInfo() << std::endl;
	return 0;
}
