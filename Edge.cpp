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
Edge::Edge(Node &source, Node &destination): m_srcNode(source), m_dstNode(destination){
}
Edge::Edge(std::string srcString, std::string dstString) {
											// kein init für ref m_vari -.-
	Node nStart(srcString);
	Node nEnd(dstString);
	m_srcNode(nStart);
	m_dstNode(nEnd);
}
Edge::~Edge(){

}

