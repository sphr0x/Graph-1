#include "Node.h"

const std::string Node::generateID()const{
	// format : Node_0001
	std::ostringstream out;

	out << "Node_" << std::right << std::setw(4) << std::setfill('0') << s_numInstances;
	return out.str();
}
const std::string Node::getID()const {
	return m_id;
}
void Node::checkID()const {
	NodeIdException warning;
	for (int i = 0; i < m_id.length(); ++i) {
		if (!(isalnum(m_id[i]) || m_id[i] == '_')) {
			//throw "fail";
			throw warning;												// 4 a)
		}
	}
}
Node::Node(const std::string id): m_id(id) {
	++s_numInstances;
	checkID();															// 2 a)
	std::cout << "Node-count(from string):" <<s_numInstances << std::endl;
}
Node::Node(){															// 1 a2)
	++s_numInstances;
	m_id = generateID();
	checkID();
	std::cout << "Node-count(from standart):" <<s_numInstances << std::endl;
	
}
Node::~Node(){
	--s_numInstances;
	std::cout << "Node-count(dest):" << s_numInstances << std::endl;
}
int Node::s_numInstances = 0;