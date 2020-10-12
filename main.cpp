#pragma once
#include <iostream>
#include "QuickFind.h"
#include "QuickUnion.h"
#include "QuickUnionWeighted.h"
#include "QuickUnionPathCompression.h"

int main() {
	int no = 0;
	std::cout << "Please, pick a positive integer to select the array length." << std::endl;
	std::cin >> no;
	std::cout << no << " is selected number" << std::endl;
	QuickUnionPathCompression object = QuickUnionPathCompression::QuickUnionPathCompression(no);
	object.Union(2, 4);
	if (object.Connected(2, 4)) std::cout << "2 and 4 are connected!" << std::endl;
	else std::cout << "2 and 3 are not connected" << std::endl;
	return 0;
}