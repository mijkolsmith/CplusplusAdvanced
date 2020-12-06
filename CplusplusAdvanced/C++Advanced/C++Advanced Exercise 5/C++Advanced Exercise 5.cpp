#include "pch.h"
#include "Queue.h"
#include "Queue.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

template <class T>
T sortArray(T arr)
{
	std::sort(std::begin(arr), std::end(arr));
	return arr;
}

int main()
{
	Queue<int>* intQueue = new Queue<int>();
	std::vector<int> vec = { 2,1,3,0,7 };
	std::vector<std::string> vec2 = { "c", "b", "a" };

	vec = sortArray(vec);
	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;

	vec2 = sortArray(vec2);
	for (int i = 0; i < vec2.size(); i++)
	{
		std::cout << vec2[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "queue size at start: " << intQueue->size() << std::endl;

	intQueue->put(1);
	std::cout << "queue size after adding 1: " << intQueue->size() << std::endl;

	int x = intQueue->get();
	std::cout << "get from queue: " << x << std::endl;
	std::cout << "queue size after getting: " << intQueue->size() << std::endl;

	return 0;
}