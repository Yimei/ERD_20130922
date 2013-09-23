#ifndef _Component_H_ 
#define _Component_H_

#include <string>

using namespace std;

class Component{
public:
	Component();
	~Component();
	void setID(int id);
	void setType(string type);
	void setText(string name);
	void setConnections();

	int getID();
	string getType();
	string getText();
	int getConnections();
	virtual void connectTo(Component *component);
	virtual bool canConnectTo(Component *component);

private:
	int _id;
	string _type;
	string _text;
	int _connections;
};
#endif