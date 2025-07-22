#include "../include/Logger.h"
Logger *Logger::ploggerInstance = new(std::nothrow) Logger() ; // 饿汉式初始化单例实例指针


Logger *Logger::getInstance()
{
    if (ploggerInstance == nullptr)
    {
        return nullptr;
    }
    return ploggerInstance;
}

Logger::Logger() : currentLogLevel(LogLevel::INFO)
{
    // 默认日志级别为 INFO
}

Logger::~Logger()
{
    if (outputFile.is_open())
    {
        outputFile.close();
    }
} // 析构函数关闭文件流

void Logger::setOutputFile(const std::string &filename)
{
    if (outputFile.is_open())
    {
        outputFile.close();
    }
    static int instanceCount = 0;
    instanceCount++;
    printf("Logger instance count: %d\n", instanceCount);
    outputFile.open(filename, std::ios::app); // 以追加模式打开文件
    if (!outputFile)
    {
        throw std::runtime_error("无法打开日志文件: " + filename);
    }
} // 设置输出文件

void Logger::setLogLevel(LogLevel level)
{
    currentLogLevel = level; // 设置当前日志级别
} // 设置日志级别

std::string Logger::formatMessage(LogLevel level, const std::string &message)
{
    std::string levelStr;
    switch (level)
    {
    case LogLevel::DEBUG:
        levelStr = "[DEBUG]";
        break;
    case LogLevel::INFO:
        levelStr = "[INFO]";
        break;
    case LogLevel::WARNING:
        levelStr = "[WARN]";
        break;
    case LogLevel::ERROR:
        levelStr = "[ERROR]";
        break;
    case LogLevel::FATAL:
        levelStr = "[FATAL]";
        break;
    }

    return levelStr + " " + message;
} // 根据设置的日志级别格式化日志消息

void Logger::log(LogLevel level, const std::string &message)
{
    if (level < currentLogLevel)
    {
        return; // 如果日志级别低于当前设置的级别，则不输出
    }
    std::string FormatMessage = formatMessage(level, message);
    if (outputFile.is_open())
    {
        outputFile << FormatMessage << std::endl; // 输出到文件
    }
    else
    {
        throw std::runtime_error("日志文件未打开");
    }
}
