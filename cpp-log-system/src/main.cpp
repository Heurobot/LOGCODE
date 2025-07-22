#include <iostream>
#include "Logger.h"
#include "../../unittest/test.h"

int main() {
    
    Logger& log = *Logger::getInstance();
    // Set log level to DEBUG
    log.setLogLevel(LogLevel::DEBUG);

    // Set output file
    log.setOutputFile("logtest.log");

    // Log messages of different levels
    log.log(LogLevel::INFO, "This is an info message.");
    log.log(LogLevel::WARNING, "This is a warning message.");
    log.log(LogLevel::ERROR, "This is an error message.");
    log.log(LogLevel::DEBUG, "This is a debug message.");
    log.log(LogLevel::FATAL, "This is a fatal message.");


    // Test writepoint1 function
    test myTest;
    myTest.writepoint1();

    return 0;
}