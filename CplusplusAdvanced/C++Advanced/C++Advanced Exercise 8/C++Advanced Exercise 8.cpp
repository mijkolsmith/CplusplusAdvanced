#include "pch.h"
#include "ConcurrentVector.h"
#include "ConcurrentVector.cpp"
#include <iostream>
#include <thread>

int main()
{
	ConcurrentVector<int>* cvec = new ConcurrentVector<int>();

	
	std::thread t2(&ConcurrentVector<int>::push_back, cvec, 4);
	std::thread t1(&ConcurrentVector<int>::push_back, cvec, 5);
	t1.join();
	t2.join();
	for (int i = 0; i < cvec->size(); i++)
	{
		std::cout << cvec->at(i);
	}
	std::cout << std::endl;

	std::thread t3(&ConcurrentVector<int>::pop_back, cvec);
	t3.join();
	for (int i = 0; i < cvec->size(); i++)
	{
		std::cout << cvec->at(i);
	}

	return 0;
}