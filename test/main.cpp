#include "ThreadManager.h"
#include <iostream>
#include <thread>


void F1()
{
	int a = 1;
}

void F2()
{
	int a = 1;
}

int main()
{
	std::thread t1(F1);
	std::thread t2(F2);

	ThreadManager::SetThreadName(t1, "t1");
	ThreadManager::SetThreadPriority(t1, 11);
	
	ThreadManager::SetThreadName(t2, "t2");
	ThreadManager::SetThreadPriority(t2, 1);

	t2.join();
	t1.join();

	return 0;
}