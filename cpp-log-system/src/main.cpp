#include <iostream>
#include "Logger.h"
#include "../../unittest/test.h"

int main() {
    Logger logger;

    // Set log level to DEBUG
    logger.setLogLevel(LogLevel::DEBUG);

    // Set output file
    logger.setOutputFile("./log.txt");

    // Log messages of different levels
    logger.log(LogLevel::INFO, "This is an info message.");
    logger.log(LogLevel::WARNING, "This is a warning message.");
    logger.log(LogLevel::ERROR, "This is an error message.");
    logger.log(LogLevel::DEBUG, "This is a debug message.");
    logger.log(LogLevel::FATAL, "This is a fatal message.");


    // Test writepoint1 function
    test myTest;
    myTest.writepoint1();

    return 0;
}