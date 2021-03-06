#ifndef _ERModel_H_ 
#define _ERModel_H_
#include "string"
#include <vector>

#include "Component.h"
#include "ComponentFactory.h"
#include <iostream>
using namespace std;
class ERModel{
public:
	ERModel();
	virtual ~ERModel();
	void addNode(string);
	string getWholeName(string);
	void showTable();
	void setPrimaryKey();
	void checkFirstNodeId();
	void checkSecondNodeId();
	void checkEntity();
	void showAttributeTable(string);
	void checkPrimaryKey();
	vector<string> splitString(string,string);
	
	void showPrimary();
	Component* getFirstNode();
	Component* getSecondNode();
	void addConnection(Component* nodeOne, Component* nodeTwo);
	void getTable();
	
	void exit();
	vector<Component*> getVector();
	void displayTable();
	void removePKfromAttribute();


	void loadFile();
	void saveFile();
	void addComponentsFromFile(vector<string>);
	void addConnectionFromFile(vector<string>);
	void addPrimaryKey(vector<string>);
	
	int getPresentID();
	void initialPresentID();
	void displayComponentTable();
	void displayConnectionTable();
	void updateID();
private:
	vector<Component*> _components;
	vector<vector<int>> _connections;

	int _id;
	string _firstNodeId;
	string _secondNodeId;
	int _nodeOne;
	int _nodeTwo;
	ComponentFactory* _componentFactory;
	int _cardinality;
	string _entityId;
	Component* _entityTemp;
	Component* _entityAttribute;
	string _primaryKey;
	vector<int> _attributesId;
	vector<string> _primaryKeyVector;
	int thisKey;
	vector<Component*> _entityHasPrimaryKey;
	vector<vector<string>> _pkOfEntities;
	vector<Component*> _attributeWithOutPK;

	vector<string> splitStringItem;
	int _presentID;
	int id;
};
#endif