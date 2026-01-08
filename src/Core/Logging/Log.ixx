#include <print>
#include <string>

export module fv_Log;

export const char* PrintLog(const std::string& message)
{
    std::println("{}", message);
    return message.c_str();
}