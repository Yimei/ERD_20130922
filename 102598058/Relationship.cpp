#include <string>
#include "Relationship.h"
using namespace std;

Relationship::Relationship(){

}
void Relationship::connectTo(Component* component){

}
bool Relationship::canConnectTo(Component* component){
	return true;
}
Relationship::~Relationship(){

}