#include <string>
#include <iostream>
#include "Relationship.h"
using namespace std;

Relationship::Relationship():Node(){

}
void Relationship::connectTo(Component* component){
	this->setConnections();
	component->setConnections();
}
bool Relationship::canConnectTo(Component* component){
	
	if (component->getType() == this->getType())
	{
		return false;
	}
	if((component->getType()=="E") && (this->getConnections()<2))
	{
		return true;
	}
	else
	{
		return false;
	}
}
Relationship::~Relationship(){

}