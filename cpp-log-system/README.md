# C++ Log System

## 项目简介
这是一个简单的C++日志系统，旨在提供灵活的日志记录功能。该系统支持多种日志级别，并允许用户将日志输出到文件中。

## 功能
- 支持多种日志级别：DEBUG、INFO、WARNING、ERROR、FATAL
- 可以将日志输出到控制台或指定的文件
- 提供简单易用的接口来记录日志

## 文件结构
```
cpp-log-system
├── src
│   ├── Logger.cpp        // Logger类的实现
│   ├
│   ├── LogLevel.h        // 日志级别的定义
│   └── main.cpp          // 程序入口点
├── include
│   └── Logger.h          // Logger类的头文件
├── CMakeLists.txt        // CMake构建配置
└── README.md             // 项目文档
```

## 使用方法
1. 克隆项目：
   ```
   git clone <repository-url>
   cd cpp-log-system
   ```

2. 构建项目：
   ```
   mkdir build
   cd build
   cmake ..
   make
   ```

3. 运行程序：
   ```
   ./cpp-log-system
   ```

## 示例
在`main.cpp`中，您可以看到如何创建`Logger`实例并使用其方法记录日志。

## 贡献
欢迎任何形式的贡献！请提交问题或拉取请求。