#pragma once

#include "thread_manager.h"
#include "thread_wrapper.h"

#include <memory>
#include <mutex>


class ThreadManagerImpl : public ThreadManager
{
public:
	virtual ThreadToken CreateTread(const Func& f, const std::string& name, int priority);

	virtual void SetThreadPriority(const std::string& name, int priority);

	virtual std::vector<ThreadDiagnoseInfo> GetAllThreadDiagnoseInfo() const;

	virtual ThreadDiagnoseInfo GetThreadDiagnoseInfo() const;
	
private:
	std::vector<std::shared_ptr<ThreadWrapper> > threads_;

	mutable std::mutex mutex_;
};