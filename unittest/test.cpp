#include "test.h"

test::test() {
    loggerp =Logger::getInstance();
    if(loggerp==nullptr){
        throw std::runtime_error("loggerp is nullptr, Logger instance not created.");
    }
}
test::~test() {
    //delete loggerp;
}

void test:: writepoint1(){
    //loggerp->setOutputFile("test.log");
    loggerp->setOutputFile("logtest.log");
    loggerp->log(LogLevel::FATAL, "This is a fatal message from writepoint1.");
    printf("writepoint1 executed.\n");
}