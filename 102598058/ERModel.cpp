#include "ERModel.h"

//#include "Component.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;


ERModel::ERModel(){
	_id = 0;
	_nodeOne = 0;
	_nodeTwo = 0;
}
void ERModel::addNode(string type){
	string _text;
	
	cout<< "Enter the name of this node:" << endl<<"> ";
	cin >> _text;
	
	ComponentFactory* _componentFactory = new ComponentFactory();

	
	cout << "A node [" << type << "]" << " has been added. ID: " << _id << ", Name: " << _text << endl;
	
	
	Component* component = _componentFactory->createComponent(type);
	component->setID(_id);
	component->setText(_text);
	component->setType(type);
	_components.push_back(component);
	_id++;
	showTable();

	//system("pause");
	
	
}
void ERModel::showTable()
{
	cout << "Components:" << endl;
	cout << "------------------------------------" << endl;
	cout << "Type | ID | Name  " << endl;
	cout << "--------+----+----------------------" << endl;
	for (int i = 0; i < _components.size();i++)
	{
		cout << i;
		cout << "  " << _components[i]->getType() << "  |  " << _components[i]->getID() << "  |  " << _components[i]->getText()	<< endl;
	}
	
	cout << "------------------------------------" << endl;
}
void ERModel::checkFirstNodeId(){
	
	cin >> _firstNodeId;
	//cout << atoi(_firstNodeId.c_str());
	if(_firstNodeId == "0")
	{
		_nodeOne = 0;
	}
	else if (atoi(_firstNodeId.c_str()) >= _components.size() || atoi(_firstNodeId.c_str())==0)//不在vector內或輸入string
	{
		cout << "The node ID you entered does not exist. Please enter a valid one again." << endl << "> ";
		checkFirstNodeId();
	}
	else
	{
		_nodeOne = atoi(_firstNodeId.c_str());
	}
	
}

void ERModel::checkSecondNodeId()
{
	cin >> _secondNodeId;

	if(_secondNodeId == "0") // secondNodeId = 0
	{
		 _nodeTwo = 0;
	}
	else if (atoi(_secondNodeId.c_str()) >= _components.size() || atoi(_secondNodeId.c_str())==0)//不在vector內或輸入string
	{
		cout << "The node ID you entered does not exist. Please enter a valid one again." << endl << "> ";
		checkSecondNodeId();
	}
	else
	{
		_nodeTwo = atoi(_secondNodeId.c_str());
	}
	
}
void ERModel::checkConnection()
{
	//if (atoi(_secondNodeId.c_str()) == atoi(_firstNodeId.c_str())) //不可自連
	//{
	//	cout << "The node '" << atoi(_secondNodeId.c_str()) << "' " << "cannot be connected to itself." << endl;
	//}
	/*if (_components[atoi(_secondNodeId.c_str())]->getType() == _components[atoi(_firstNodeId.c_str())]->getType())
	{
	cout << "The node '"<< atoi(_secondNodeId.c_str()) << "' cannot be connected by the node '" << atoi(_firstNodeId.c_str()) << "'." << endl;
	}*/
	
}
void ERModel::addConnection(Component* nodeOne, Component* nodeTwo)
{
	if (nodeOne->getID() == nodeTwo->getID())
	{
		cout << "node1 id =" << nodeOne->getID() << "  node2 id =" << nodeTwo->getID() <<endl;
		cout <<" ~~~ " <<endl;
		cout << "The node '" << nodeTwo->getID() <<"' cannot be connected to itself."<<endl;
	}		
	else if (nodeOne->canConnectTo(nodeTwo))
	{
		nodeOne->connectTo(nodeTwo);
	}
	else
	{
		cout << "The node '"<< nodeOne->getID() << "' cannot be connected by the node '" << nodeTwo->getID() << "'." << endl;
	}
		
}
Component* ERModel::getFirstNode()
{
	return _components[_nodeOne];
}
Component* ERModel::getSecondNode()
{
	return _components[_nodeTwo];
}
vector<Component*> ERModel::getVector()
{
	return _components;
}


ERModel::~ERModel(){

}