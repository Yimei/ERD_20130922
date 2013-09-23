#ifndef _ERModel_H_ 
#define _ERModel_H_

#include "string"
#include <vector>
#include "Component.h"
#include "ComponentFactory.h"

using namespace std;

class ERModel{
public:
	ERModel();
	~ERModel();
	void addNode(string type);

	void showTable();

	void checkFirstNodeId();
	void checkSecondNodeId();
	void checkConnection();
	Component* getFirstNode();
	Component* getSecondNode();
	void addConnection(Component* nodeOne, Component* nodeTwo);
	void getTable();
	vector<Component*> getVector();
	
private:
	vector<Component*> _components;
	int _id;
	string _firstNodeId;
	string _secondNodeId;
	int _nodeOne;
	int _nodeTwo;
};
#endif