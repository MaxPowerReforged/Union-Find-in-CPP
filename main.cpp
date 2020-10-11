#pragma once
#include <iostream>
#include "QuickFind.h"
#include "QuickUnion.h"
#include "QuickUnionWeighted.h"

int main() {
	int no = 0;
	std::cout << "Please, pick a positive integer to select the array length." << std::endl;
	std::cin >> no;
	std::cout << no << " is selected number" << std::endl;
	QuickUnionWeighted object = QuickUnionWeighted::QuickUnionWeighted(no);
	object.Union(2, 4);
	if (object.Connected(2, 4)) std::cout << "2 and 3 are connected!" << std::endl;
	else std::cout << "2 and 4 are not connected" << std::endl;
	return 0;
}