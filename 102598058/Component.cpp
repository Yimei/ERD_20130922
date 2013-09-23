#include "Component.h"
#include <string>
using namespace std;



Component::Component(){
	_id = 0;
	_text = "";
	_type = "";
	_connections = 0;
}
void Component::setID(int id){
	_id = id;
}
void Component::setType(string type){
	_type = type;
}
void Component::setText(string name){
	_text = name;
}
void Component::setConnections()
{
	_connections++;
}
int Component::getID(){
	return _id;
}
string Component::getText(){
	return _text;
}
string Component::getType(){
	return _type;
}
int Component::getConnections(){
	return _connections;
}
void Component::connectTo(Component* component){

}
bool Component::canConnectTo(Component *component){
	return true;
}
Component::~Component(){

}
