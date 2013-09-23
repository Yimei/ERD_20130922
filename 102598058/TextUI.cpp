#include <string>
#include <iostream>
#include "TextUI.h"
#include "ERModel.h"
using namespace std;
#define MENU_ONE "1. Add a node\n";
#define MENU_TWO "2. Connect two nodes\n";
#define MENU_THREE "3. Display the current diagram\n";
#define MENU_FOUR "4. Set a primary key\n";
#define MENU_FIVE "5. Display the table\n";
#define MENU_SIX "6. Exit\n> ";
#define WKONDYWTA "What kind of node do you want to add?\n[A]Attribute [E]Entity [R]Relation\n> ";
TextUI::TextUI(){
	eRModel = new ERModel();
}
void TextUI::displayMenu(){
	cout << MENU_ONE
	cout << MENU_TWO;
	cout << MENU_THREE;
	cout << MENU_FOUR;
	cout << MENU_FIVE;
	cout << MENU_SIX;
	processCommand();
}
//enum Type{
//	A, E, R, 
//};
void TextUI::processCommand(){
	int _command;
	//enum Type _typeChangeToNum;
	string _typeName;
	string _type;
	
	//ERModel eRModel;
	cin >> _command;
	switch (_command){
	case 1: 
		cout << "What kind of node do you want to add?\n[A]Attribute [E]Entity [R]Relation" << endl<<"> ";
		cin >> _type;
		while ((_type != "A")&&(_type != "E")&&(_type != "R"))
		{
			cout << "You entered an invalid node. Please enter a valid one again.\n[A]Attribute [E]Entity [R]Relation" << endl<<"> ";
			cin >> _type;
		}
		eRModel->addNode(_type);
		displayMenu();
	case 2:
		cout << "Please enter the first node ID "<< endl << "> ";
		eRModel->checkFirstNodeId();
		cout << "Please enter the second node ID "<< endl << "> ";
		eRModel->checkSecondNodeId();
		//eRModel->checkConnection();
		eRModel->addConnection(eRModel->getFirstNode(),eRModel->getSecondNode());
		displayMenu();
	default:
		cout << "Please enter the number again." << endl;
		//system("pause");
		displayMenu();
	}
}
TextUI::~TextUI(){

}

