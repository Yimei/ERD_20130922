#include <string>
#include "Node.h"
using namespace std;
#ifndef _Relationship_H_ 
#define _Relationship_H_
#endif
class Relationship:public Node{
public:
	Relationship();
	~Relationship();
	void connectTo(Component* component);
	bool canConnectTo(Component* component);
};