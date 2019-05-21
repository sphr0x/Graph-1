#include "Node.h"


const std::string Node::getID()const{
	// format : Node_0001
	std::ostringstream out;

	out << "Taxi_" << std::right << std::setw(4) << std::setfill('0') << s_numInstances;
	return out.str();
}




Node::Node(std::string id): m_id(id) {
	++s_numInstances;
}
Node::Node(){										// 1 a2)
	++s_numInstances;
	m_id = getID();
}
Node::~Node(){
	--s_numInstances;
}
int Node::s_numInstances = 0;