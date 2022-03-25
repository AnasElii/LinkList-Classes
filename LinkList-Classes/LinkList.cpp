#include "LinkList.h"

using namespace std;

LinkList::LinkList(){
	head = NULL;
	tail = NULL;
}
LinkList::~LinkList(){
	
}

void LinkList::Add(string name)
{
	node* temp = new node;
		
	temp->data = name;
	temp->next = NULL;
	if (head == NULL)
	{
		temp->key = 1;
		head = temp;
		tail = temp;
	}
	else
	{
		temp->key = tail->key + 1;
		tail->next = temp;
		tail = tail->next;
	}
}

void LinkList::Update(int key, std::string name)
{
	node* temp = new node;
	temp = head;
	while(temp != NULL)
	{
		if(temp->key == key)
		{
			temp->data = name;
			return;
		}
		temp = temp->next;
	}
}

void LinkList::DeleteFirst()
{
	cout << "============== / / ==============\n";
	cout << "The 1th Key\n";

	node* temp = head;	
	head = head->next;

	delete temp;
}

void LinkList::DeleteLast()
{
	cout << "============== / / ==============\n";
	cout << "The Last Key\n";

	node* temp = head;
	node* temp2 = tail;
		
	while (temp != NULL)
	{
		if (temp->key == (tail->key - 1))
		{			
			temp->next = NULL;
			tail = temp;
			delete temp2;			
			return;
		}
		temp = temp->next;

	}
}

void LinkList::DeleteAt(int key)
{
	node* temp = new node;
	node* temp2 = new node;
	temp = head;	
	
	if(key == head->key)
	{
		DeleteFirst();
		
	}
	else if (key == tail->key)
	{
		
		DeleteLast();
		
	}
	else
	{
		
		node* temp2 = NULL;
		while (temp != NULL)
		{
			if (temp->key == (key-1))
			{
				temp2 = temp->next;
				temp->next = temp->next->next;
				temp2->next = NULL;
				delete temp2;
				return;
			}
			temp = temp->next;

		}
	}
}

void LinkList::ResetKeys()
{
	node* temp = head;	
	int key = 1;

	while (temp != NULL)
	{
		temp->key = key;
		key++;
		temp = temp->next;
	}
}

void LinkList::Display()
{
	node* temp = new node;
	temp = head;
	cout << "============== / / ==============\n";

	while(temp != NULL)
	{
		cout << "- [" << temp->key << "] Name: " << temp->data << "\n";
		temp = temp->next;
	}
}