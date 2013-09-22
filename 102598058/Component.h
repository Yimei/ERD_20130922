#include <string>
#ifndef _Component_H_ 
#define _Component_H_
#endif
using namespace std;

class Component{
public:
	Component();
	~Component();
	void getID();
	void getType();
	void getText();
	virtual void connectTo(Component *component);
	virtual bool canConnectTo(Component *component);
};