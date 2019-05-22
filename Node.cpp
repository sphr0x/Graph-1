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
void Node::checkInput() {											// 2 b) + 3 a)
	try {
		for (int i = 0; i < m_id.length(); ++i) {

			if (isalnum(m_id[i]) || m_id[i] == '_') {
				std::cout << "pos " << i << " ok" << std::endl;
			}
			else {
				throw "fail";
			}
		}
	}
	catch(const char*){												// hier: catch what was thrown | std::string ==> const char* 
		std::cerr << "Exception: Wrong signifier!\n" << std::endl;	// 2 c)
	}
}



Node::Node(std::string id): m_id(id) {
	checkInput();									// 2 a)
	++s_numInstances;
	std::cout << s_numInstances << std::endl;
}
Node::Node(){										// 1 a2)
	m_id = generateID();
	checkInput();									// 2 a)
	++s_numInstances;
	std::cout << s_numInstances << std::endl;
	
}/*
Node::Node(const Node& copy) // cconst
	: m_id(copy.m_id){
	++s_numInstances;
}*/
Node::~Node(){
	--s_numInstances;
	std::cout << s_numInstances << std::endl;
}
int Node::s_numInstances = 0;