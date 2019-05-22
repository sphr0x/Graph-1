#pragma once
#include <string>
#include <sstream>
#include <iomanip>
#include <cctype>
#include <iostream>

class Node
{
private:
	std::string m_id;
	int static s_numInstances;
public:
	const std::string generateID()const;
	const std::string getID()const;										// 1  b)
	void checkInput();

	Node(std::string id);												// 1 a1)
	Node();
	// Node(const Node& copy); // cconst
	~Node();
};

