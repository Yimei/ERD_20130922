#ifndef _Node_H_ 
#define _Node_H_

#include <string>
#include "Component.h"

using namespace std;

class Node:public Component
{
public:
	Node();
	
	~Node();
	virtual void connectTo(Component* component);
	virtual bool canConnectTo(Component* component); 
private:
	string type;

protected:
private:
};
#endif