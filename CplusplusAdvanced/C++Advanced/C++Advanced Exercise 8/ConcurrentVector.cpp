#include "pch.h"
#include "ConcurrentVector.h"

template<class T>
void ConcurrentVector<T>::push_back(T input)
{
	std::lock_guard<std::mutex> lockGuard(mutex);
	vec.push_back(input);
}

template<class T>
void ConcurrentVector<T>::pop_back()
{
	std::lock_guard<std::mutex> lockGuard(mutex);
	vec.pop_back();
}

template<class T>
void ConcurrentVector<T>::insert(T input, T i)
{
	std::lock_guard<std::mutex> lockGuard(mutex);
	vec.insert(i, input);
}

template<class T>
void ConcurrentVector<T>::erase(T i)
{
	std::lock_guard<std::mutex> lockGuard(mutex);
	vec.erase(i);
}

template<class T>
T ConcurrentVector<T>::at(T i)
{
	return vec[i];
}

template<class T>
int ConcurrentVector<T>::size()
{
	return vec.size();
}