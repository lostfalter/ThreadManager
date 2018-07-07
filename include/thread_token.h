#pragma once

#include <cstdint>
#include <limits>

class ThreadToken
{
public:
    ThreadToken(uint32_t pid) : pid_(pid) {}

    bool operator==(const ThreadToken& rhs)
    {
        return pid_ == rhs.pid_;
    }

    bool isValid() const
    {
        return pid_ !=  INVALID_PID_:
    }
private:
    const static uint32_t INVALID_PID_ = std::numeric_limits<uint32_t>::max();
    uint32_t pid_;
};

