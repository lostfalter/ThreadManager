#pragma once

#include <cstdint>
#include <string>

class ThreadDiagnoseInfo
{
public:
    ThreadDiagnoseInfo(uint32_t id, const std::string& name, uint32_t priority)
        : id_(id), name_(name), priority_(priority)
    {

    }

    std::string toString() const
    {
        std::string info;

        return info;
    }
private:
    uint32_t id_;
    std::string name_;
    uint32_t priority_;
};