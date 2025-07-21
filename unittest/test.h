#ifndef TEST_H
#define TEST_H

#include "../cpp-log-system/include/Logger.h"


class test {
public:
    test() ;
    ~test() ;

    void writepoint1();
private:
    Logger* loggerp; // Logger 对象用于测试


};

#endif // TEST_H