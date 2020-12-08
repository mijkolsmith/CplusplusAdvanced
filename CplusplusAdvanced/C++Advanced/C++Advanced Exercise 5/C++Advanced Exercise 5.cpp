#include "pch.h"
#include "Queue.h"
#include "Queue.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>

template <class T>
void sortVector(T& vec)
{
	std::sort(std::begin(vec), std::end(vec));
}

template <class T>
void sortArray(T& arr)
{
	std::sort(arr, arr + sizeof(arr) / sizeof(arr[0]));
}

int main()
{
	//vectors
	Queue<int>* intQueue = new Queue<int>();
	std::vector<int> vec = { 2,1,3,0,7 };
	std::vector<std::string> vec2 = { "c", "b", "a" };

	sortVector(vec);
	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;

	sortVector(vec2);
	for (int i = 0; i < vec2.size(); i++)
	{
		std::cout << vec2[i] << " ";
	}
	std::cout << std::endl;

	//arrays
	int arr[] = { 2,1,3,0,7 };
	std::string arr2[] = { "c", "b", "a" };
	//deze n's wel opnieuw uitrekenen wanneer er aanpassingen worden gedaan
	int n1 = sizeof(arr) / sizeof(arr[0]);
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	sortArray(arr);
	for (int i = 0; i < n1; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	sortArray(arr2);
	for (int i = 0; i < n2; i++)
	{
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl;

	//queue
	std::cout << "queue size at start: " << intQueue->size() << std::endl;

	intQueue->put(1);
	std::cout << "queue size after adding 1: " << intQueue->size() << std::endl;

	int x = intQueue->get();
	std::cout << "get from queue: " << x << std::endl;
	std::cout << "queue size after getting: " << intQueue->size() << std::endl;

	return 0;
}