#pragma once
#include <iostream>
#include <vector>
#include <mutex>

template<class T>
class ConcurrentVector {
private:
	std::vector<T> vec;
	std::mutex mutex;
public:
	ConcurrentVector() {};
	ConcurrentVector(std::vector<T> vec) : vec(vec) {};
	void push_back(T input);
	void pop_back();
	void insert(T input, T i);
	void erase(T i);
	T at(T i);
	int size();
};