#include "string"
#include <vector>
#ifndef _ERModel_H_ 
#define _ERModel_H_
#endif
#include "Component.h"
using namespace std;

class ERModel{
public:
	ERModel();
	~ERModel();
	void addNode(string type);
	void addConnection(Component* nodeOne, Component* nodeTwo);
	void getTable();
private:
	vector<Component*> components;
};