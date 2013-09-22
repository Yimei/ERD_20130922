#include "ERModel.h"
//#include "Component.h"
#include <string>
#include <iostream>
using namespace std;
ERModel::ERModel(){

}
void ERModel::addNode(string type){
	string _text;
	
	cout<< "Enter the name of this node:" << endl<<"> ";
	cin >> _text;
	int _id=0;
	/*switch (){
	case 1:
	_typeName = "Attribute";
	break;
	case 2:
	_typeName = "Entity";
	break;
	case 3:
	_typeName = "Relation";
	break;
	default:
	_typeName = "None";
	}		*/
	cout << "A node [" << type << "]" << " has been added. ID: " << _id << ", Name: " << _text << endl;
	cout << "Components:" << endl;
	cout << "------------------------------------" << endl;
	cout << "Type | ID | Name  " << endl;
	cout << "--------+----+----------------------" << endl;
	cout << "  " << type << "  |  " << _id << "  |  " << _text	<< endl;
	cout << "------------------------------------" << endl;
	//system("pause");
	_id++;
}

ERModel::~ERModel(){

}