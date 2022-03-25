#include <iostream>
#include "LinkList.h"

using namespace std;


string AddtoList()
{
	
	string name;
	cout << "Product name: ";
	getline(cin, name);	
	return name;
}

string UpdateItem(LinkList* link)
{
	string name;
	cout << "New product name: ";
	getline(cin, name);	
	return name;
}


void Menu(LinkList* link)
{
	
	system("cls");
	cout << "============== / Menu / ==============\n";
	cout << "[1] - Add to the list\n";
	cout << "[2] - Update an item of the list\n";
	cout << "[3] - Delete from list with key\n";
	cout << "[4] - Delete First item of the list\n";
	cout << "[5] - Delete Last item of the list\n";
	cout << "[6] - Reset list keys\n";
	cout << "[7] - Display List\n";
	cout << "[0] - Exit\n";

	int num = 0;

	cout << "Choose a number to start the operation: ";
	cin >> num;

	cin.ignore();
	cin.clear();
	int key = 0;
	switch(num)
	{
		case 1:
		link->Add(AddtoList());
		break;

		case 2:
			if(link->GetHead() == NULL)
			{
				cout << "The list empty\n";
				break;
			}
			link->Display();
			cout << "Product key: ";
			cin >> key;
			cin.ignore();
			cin.clear();
			link->Update(key, UpdateItem(link));
			system("cls");
			link->Display();
			cin.get();
			break;

		case 3:
			link->Display();
			cout << "Product key: ";
			cin >> key;
			link->DeleteAt(key);
			link->Display();
			cin.get();
			break;

		case 4:
			link->DeleteFirst();
			link->Display();
			cin.get();
			break;

		case 5:
			link->DeleteLast();
			link->Display();
			cin.get();
			break;

		case 6:
			link->ResetKeys();
			link->Display();
			cin.get();
			break;

		case 7:
			link->Display();
			cin.get();
			break;

		case 0:
			exit(0);
			break;

		default:
			cout << "Wronk Choice\n";

	}
}

int main()
{
	
	LinkList link;
	
	while (true)
	{
		Menu(&link);
		if(link.GetHead()->key == 3)
		{
			break;
		}
	}

	
	/*
	LinkList link;
	link.Add("Cola");
	link.Add("Soda");
	link.Add("Tea");
	link.Add("Coffe");
	link.Add("Fanta");
	link.Display();

	link.Update(3, "Anas");
	link.Update(1,"Ikram");
	link.Display();

	link.DeleteFirst();
	link.DeleteLast();

	link.Display();

	link.ResetKey();
	link.Display();*/
	
	return 0;
}