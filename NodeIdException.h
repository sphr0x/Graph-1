#pragma once
#include <iostream>
class NodeIdException
{
private:

public:
	const std::string getError()const;
	NodeIdException();
	~NodeIdException();
};

