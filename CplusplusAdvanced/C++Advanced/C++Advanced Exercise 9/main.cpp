#include "pch.h"
#include <queue>
#include <thread>
#include <iostream>
#include <mutex>
#include <condition_variable>

int c = 0;
bool done = false;
std::queue<int> goods;

std::mutex mutex;
std::condition_variable pcv;
std::condition_variable ccv;

void producer()
{
	for (int i = 0; i < 500; ++i) 
	{
		std::unique_lock<std::mutex> lock(mutex);
		if (c != 0)
		{
			pcv.wait(lock);
		}
		goods.push(i);
		c++;
		lock.unlock();
		ccv.notify_all();
	}
	done = true;
}

void consumer()
{
	while (!done)
	{
		while (!goods.empty())
		{
			std::unique_lock<std::mutex> lock(mutex);
			if (c == 0)
			{
				ccv.wait(lock);
			}
			goods.pop();
			c--;
			lock.unlock();
			pcv.notify_all();
		}
	}
}

void go()
{
	ccv.notify_all();
	pcv.notify_all();
}

int main() {
	std::thread producerThread(producer), consumerThread(consumer);

	go();

	producerThread.join();
	consumerThread.join();
	std::cout << "Net: " << c << std::endl;
}