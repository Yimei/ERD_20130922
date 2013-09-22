#include <string>
#include "Node.h"
using namespace std;
#ifndef _Connector_H_ 
#define _Connector_H_
#endif
class Connector:public Node{
public:
	Connector();
	~Connector();
	void connectTo(Component* component);
	bool canConnectTo(Component* component);
};