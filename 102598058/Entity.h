#ifndef _Entity_H_ 
#define _Entity_H_

#include <string>
#include "Node.h"

using namespace std;
class Entity:public Node{
public:
	Entity();
	~Entity();
	void connectTo(Component* component);
	bool canConnectTo(Component* component);
};
#endif