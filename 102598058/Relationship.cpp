#include <string>
#include "Relationship.h"
using namespace std;

Relationship::Relationship():Node(){

}
void Relationship::connectTo(Component* component){

}
bool Relationship::canConnectTo(Component* component){
	if(component->getType()=="E")
		return true;
	else
		return false;
}
Relationship::~Relationship(){

}