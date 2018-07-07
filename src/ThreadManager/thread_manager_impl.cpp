#include "thread_manager_impl.h"
#include <pthread.h>

virtual ThreadToken ThreadManagerImpl::CreateTread(const Func& f, const std::string& name, int priority)
{
	std::shared_ptr<ThreadWrapper> tw = std::make_shared<ThreadWrapper>(f);

	threads_.push_back(tw);
}

void ThreadManagerImpl::SetThreadName(std::thread& t, const std::string& name)
{
   	pthread_setname_np(name.c_str());
}

void ThreadManagerImpl::SetThreadPriority(std::thread& t, int priority)
{
	sched_param sch_params;
	sch_params.sched_priority = priority;
	int policy = SCHED_RR;

	if (pthread_setschedparam(t.native_handle(), policy, &sch_params))
	{
		//std::cerr << "Failed to set Thread scheduling : " << std::strerror(errno) << std::endl;
 	}
}

ThreadDiagnoseInfo ThreadManagerImpl::GetThreadDiagnoseInfo(const std::string& name) const
{
	
}
