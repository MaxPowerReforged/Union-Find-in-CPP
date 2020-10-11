#pragma once
#include <iostream>
#include "QuickUnionWeighted.h"

QuickUnionWeighted::QuickUnionWeighted(int n) : super(n) {
	for (int i = 0; i < n; i++) {
		size.push_back(1); //we initialize the size of each node to 1, because at the beggining all trees have only one member
	}
};


void QuickUnionWeighted::Union(int p, int q) {
	int i = Root(p);
	int j = Root(q);

	if (i == j) return;
	if (size[i] < size[j]) {
		arr[i] = j;
		size[j] += size[i];
	}
	else {
		arr[j] = i;
		size[i] += size[j];
	}
};