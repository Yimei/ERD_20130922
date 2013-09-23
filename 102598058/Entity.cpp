#include <string>
#include "Entity.h"
using namespace std;

Entity::Entity():Node(){

}
void Entity::connectTo(Component* component){

}
bool Entity::canConnectTo(Component* component){
	if (component->getType() == "E" || component->getType()=="R")
		return true;
	else
		return false;
}
Entity::~Entity(){

}