#include "Edge.h"

const Node& Edge::getSrcNode()const {
	return m_srcNode;
}
const Node& Edge::getdstNode()const {
	return m_dstNode;
}
const std::string Edge::toString()const {
	return m_srcNode.getID() + " -> " + m_dstNode.getID();
}
Edge::Edge(Node &source, Node &destination)
	: m_srcNode(source), m_dstNode(destination){
	std::cout << "edge konstr(reference)" << std::endl;
}
Edge::Edge(const std::string srcString, const std::string dstString)
	: m_srcNode(*new Node(srcString)), m_dstNode(*new Node(dstString))
			/* der pointer muss sofort dereferentziert werden ( mit * ), damit es einem 
				wert "gleicht" und somit auch eine referenz damit initialisiert werden kann ! */
			/* delete VORERST ignorieren ...? */
{ 
	std::cout << "edge konstr(string)" << std::endl;
}
Edge::~Edge(){

}

