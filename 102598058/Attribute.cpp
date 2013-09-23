#include <string>
#include <iostream>
#include "Attribute.h"
//#include "ERModel.h"
using namespace std;

Attribute::Attribute():Node(){

}
void Attribute::connectTo(Component* component){
	component->setConnections();
	this->setConnections();
}
bool Attribute::canConnectTo(Component* component){
	
	if (component->getType() == this->getType())
	{
		cout << "@@@" <<endl;
		return false;
	}
	if ((component->getType()=="E") && (this->getConnections()==0))
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
Attribute::~Attribute(){

}