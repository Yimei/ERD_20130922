#include <string>
#include "Entity.h"
using namespace std;

Entity::Entity(){

}
void Entity::connectTo(Component* component){

}
bool Entity::canConnectTo(Component* component){
	return true;
}
Entity::~Entity(){

}