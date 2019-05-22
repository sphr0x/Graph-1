#include "Edge.h"

const Node& Edge::getSrcNode()const {
	return m_srcNode;
}
const Node& Edge::getdstNode()const {
	return m_dstNode;
}
std::string Edge::toString() {
	return m_srcNode.getID() + " -> " + m_dstNode.getID();
}
Edge::Edge(Node &source, Node &destination)
	: m_srcNode(source), m_dstNode(destination){
}
Edge::Edge(std::string srcString, std::string dstString)
	: m_srcNode(*new Node(srcString)), m_dstNode(*new Node(dstString))
			/* der pointer muss sofort dereferentziert werden ( mit * ), damit es einem 
				wert "gleicht" und somit auch eine referenz damit initialisiert werden kann ! */
			/* delete VORERST ignorieren ...? */
{ 
											
}
Edge::~Edge(){

}

