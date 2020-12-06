#pragma once
#include <iostream>
#include <vector>

template<class T>
class Queue
{
private:
	std::vector<T> vec;
public:
	Queue() {};
	void put(T input);
	T get();
	int size();
};