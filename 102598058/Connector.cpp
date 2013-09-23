#include <string>
#include "Connector.h"
using namespace std;

Connector::Connector():Component(){

}
void Connector::connectTo(Component* component){

}
bool Connector::canConnectTo(Component* component){
	return true;
}
Connector::~Connector(){

}