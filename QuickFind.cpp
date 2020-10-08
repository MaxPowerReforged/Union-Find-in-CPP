#pragma once
#include <iostream>
#include "QuickFind.h"

QuickFind::QuickFind(int n) {
	for (int i = 0; i < n; i++)
	{
		arr.push_back(i);
	};
};

bool QuickFind::Connected(int p, int q) {
	return arr[p] == arr[q];
};

void QuickFind::Union(int p, int q) {
	int parr = arr[p];
	int qarr = arr[q];
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == parr) arr[i] = qarr;
	}
};