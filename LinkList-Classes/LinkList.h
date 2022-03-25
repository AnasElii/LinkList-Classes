#pragma once
#ifndef LINKLIST_H
#define LINKLIST_H

#include "Node.h"

class LinkList
{
	node* head ;
	node* tail ;
public:
	LinkList();
	~LinkList();

	node* GetHead()
	{
		return head;
	}

	void Add(std::string name);
	void Update(int key, std::string name);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAt(int key);
	void ResetKeys();
	void Display();
};

#endif
