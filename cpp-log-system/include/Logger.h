#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <fstream>
#include "LogLevel.h"

class Logger {
public:
    Logger();
    ~Logger();

    void log(LogLevel level, const std::string& message);//输出函数
    void setLogLevel(LogLevel level);//设置日志级别
    void setOutputFile(const std::string& filename);//设置输出文件

private:
    LogLevel currentLogLevel;//当前日志级别
    std::ofstream outputFile;//输出文件流

    std::string formatMessage(LogLevel level, const std::string& message);//格式化日志消息
};

#endif // LOGGER_H