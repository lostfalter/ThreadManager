#pragma once

#include "thread_token.h"
#include "thread_diagnose_info.h"

#include <thread>
#include <string>
#include <vector>
#include <memory>
#include <functional>

class ThreadManager
{
public:
	virtual ~ThreadManager() = default;
public:
	typedef std::function<void ()> Func;
	virtual ThreadToken CreateTread(const Func& f, const std::string& name, int priority) = 0;

	virtual void SetThreadPriority(const std::string& name, int priority) = 0;

	virtual std::vector<ThreadDiagnoseInfo> GetAllThreadDiagnoseInfo() const = 0;

	virtual ThreadDiagnoseInfo GetThreadDiagnoseInfo() const = 0;
};	//	class ThreadManager