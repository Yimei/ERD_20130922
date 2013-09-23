#include <string>
#include "Node.h"
using namespace std;

Node::Node():Component(){

}
void Node::connectTo(Component* component){

}
bool Node::canConnectTo(Component* component){
	return true;
}
Node::~Node(){

}