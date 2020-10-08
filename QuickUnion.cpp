#pragma once
#include <iostream>
#include "QuickUnion.h"

QuickUnion::QuickUnion(int n) {
	for (int i = 0; i < n; i++)
	{
		arr.push_back(i);
	};
};

int QuickUnion::Root(int p) {
	if (arr[p] == p) return p;
	else Root(arr[p]);
};

bool QuickUnion::Connected(int p, int q) {
	return Root(p) == Root(q);
};

void QuickUnion::Union(int p, int q) {
	int i = Root(p);
	int j = Root(q);

	arr[i] = j;
};