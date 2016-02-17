/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: smon7958
 */

#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_
#include <string>
#include "../Model/Node.cpp"
#include "../Model/CTECArray.cpp"
#include "../Model/ArrayNode.cpp"
using namespace std;

class NodeController
{
private:
	CTECArray<int> * notHipsterInts;
public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* CONTROLLER_NODECONTROLLER_H_ */
