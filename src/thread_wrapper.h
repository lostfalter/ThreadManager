#pragma once

#include "thread_diagose_info.h"

#include <functional>

class ThreadWrapper
{
public:
    ThreadWrapper(const std::function<void ()>& f);
private:
    void Run();

    ThreadDiagnoseInfo GetDiagnoseInfo() const;
private:
    std::function<void ()> f_;

    uint32_t pid_;
    std::string name_;
    uint32_t priority_;
};  // class ThreadWrapper