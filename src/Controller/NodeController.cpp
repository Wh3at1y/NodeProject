/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: smon7958
 */

#include "NodeController.h"
#include <iostream>

using namespace std;

NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
}

NodeController::~NodeController()
{

}

void NodeController :: testLists()

{
	CTECList<int> numbers;

numbers.addToFront(3);

numbers.addToEnd(8);

cout << "End should be 8 and is: " << numbers.getEnd() << endl;

cout << "Head should be 3 and is: " << numbers.getFront() << endl;

}

void NodeController :: start()
{
	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		cout << index * 23 << endl;
		notHipsterInts->set(index, (index * 23));
	}

	for(int index = notHipsterInts->getSize()-1; index >= 0; index--)
	{
		cout << "The contents of the notHipsterInts array node : " << index << " are : " << notHipsterInts->get(index) << endl;
	}
}

