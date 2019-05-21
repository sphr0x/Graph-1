#pragma once
#include <string>
#include <sstream>
#include <iomanip>

class Node
{
private:
	std::string m_id;
	int static s_numInstances;
public:
	const std::string getID()const;										// 1  b)

	Node(std::string id);												// 1 a1)
	Node();
	~Node();
};

