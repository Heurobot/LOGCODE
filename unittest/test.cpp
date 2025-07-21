#include "test.h"

test::test() {
    loggerp = new Logger();
}
test::~test() {
    delete loggerp;
}

void test:: writepoint1(){
    loggerp->setOutputFile("test.log");
    loggerp->log(LogLevel::FATAL, "This is a fatal message from writepoint1.");
    printf("writepoint1 executed.\n");
}