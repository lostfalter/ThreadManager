#include "thread_manager_factory.h"

/*static*/
std::shared_ptr<ThreadManager> ThreadManagerFactory::GetThreadManager()
{
	static std::shared_ptr<ThreadManager> manager;
	
	return manager;
}