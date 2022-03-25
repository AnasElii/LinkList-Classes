#pragma once
#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>

struct node
{
	int key = 0;
	std::string data;
	node* next = NULL;
};

#endif
