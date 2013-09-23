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

	int getID();
	string getType();
	string getText();
	virtual void connectTo(Component *component);
	virtual bool canConnectTo(Component *component);

private:
	int _id;
	string _type;
	string _text;
};
#endif