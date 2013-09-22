#include <string>
using namespace std;
#include "Component.h"
#ifndef _ComponentFactory_H_ 
#define _ComponentFactory_H_
#endif
class ComponentFactory{
public: 
	ComponentFactory();
	~ComponentFactory();
	Component* createComponent(string type);
};