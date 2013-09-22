#include <string>
#include "Component.h"
using namespace std;
#ifndef _Node_H_ 
#define _Node_H_
#endif
class Node:public Component
{
public:
	Node();
	~Node();
	virtual void connectTo(Component* component);
	virtual bool canConnectTo(Component* component); 

protected:
private:
};