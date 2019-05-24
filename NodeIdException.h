#pragma once
#include <iostream>

class NodeIdException										// 4 a)
{
private:

public:
	const std::string getError()const;
	NodeIdException();
	~NodeIdException();
};
