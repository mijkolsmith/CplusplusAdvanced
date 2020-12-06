#pragma once
#include "pch.h"
#include "Queue.h"
#include <iostream>

template<class T>
void Queue<T>::put(T input)
{
	vec.push_back(input);
}

template<class T>
T Queue<T>::get()
{
	T output = vec[0];
	vec.erase(vec.begin());
	return output;
}

template<class T>
int Queue<T>::size()
{
	return vec.size();
}