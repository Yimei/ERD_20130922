#include <string>
#include "Attribute.h"
//#include "ERModel.h"
using namespace std;

Attribute::Attribute():Node(){

}
void Attribute::connectTo(Component* component){

}
bool Attribute::canConnectTo(Component* component){
	/*for (int i = 0; i < )
	if (component->getType()=="E")
		return true;
	else*/
		return false;
	
}
Attribute::~Attribute(){

}