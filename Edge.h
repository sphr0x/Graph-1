#pragma once
#include "Node.h"
#include <string>
#include <sstream>
#include <iomanip>
// Hinweis: Die Klasse „Edge“ ist eine gerichtete Kante

class Edge //: public Node     // da komposition -> KEINE Vererbung ??
{
private:
	Node& m_srcNode;										// 1 c)
	Node& m_dstNode;										// 1 c)

public:
	const Node& getSrcNode()const;										// 1 e2)
	const Node& getdstNode()const;										// 1 e2)
	std::string toString();									// 1 e1)
	Edge(Node &source, Node &destination);					// 1 d1)
	Edge(std::string srcString, std::string dstString);		// 1 d2)
	~Edge();
};

