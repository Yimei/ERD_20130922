#include <string>
#include <iostream>
#include "Entity.h"
using namespace std;

Entity::Entity():Node(){

}
void Entity::connectTo(Component* component){
	this->setConnections();
	component->setConnections();
}
bool Entity::canConnectTo(Component* component){
	
	if (component->getType() == this->getType())
	{
		return false;
	}
	if (component->getType() == "A" || component->getType()=="R")
	{
		return true;
	}
	else
	{
		return false;
	}
}
Entity::~Entity(){

}