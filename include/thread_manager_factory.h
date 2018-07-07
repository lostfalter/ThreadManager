#pragma once

#include "thread_manager.h"
#include <memory>

class ThreadManagerFactory
{
public:
	static std::shared_ptr<ThreadManager> GetThreadManager();
};	//	class ThreadManagerFactory