#include "thread_wrapper.h"

ThreadWrapper::ThreadWrapper(const std::function<void ()>& f)
    : f_(f)
{

}

void ThreadWrapper::Run()
{
    if (!f_.empty())
    {
        f_();
    }
}

ThreadDiagnoseInfo ThreadWrapper::GetDiagnoseInfo() const
{
    ThreadDiagnoseInfo d;
    return d;
}
