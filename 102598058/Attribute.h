#ifndef _Attribute_H_ 
#define _Attribute_H_
#include <string>
#include "Node.h"
using namespace std;
class Attribute:public Node{
public:
	Attribute();
	~Attribute();
	void connectTo(Component* component);
	bool canConnectTo(Component* component);
};
#endif