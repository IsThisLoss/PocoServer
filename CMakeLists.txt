cmake_minimum_required(VERSION 3.16)
project(Server)

set(CMAKE_CXX_STANDARD 17)

find_package(Poco REQUIRED Data Net Util XML)

add_executable(Server main.cpp Server.cpp Server.h HandlerFactory.cpp HandlerFactory.h IndexHandler.cpp IndexHandler.h)
target_link_libraries(Server PUBLIC Poco::Data Poco::Net Poco::Util Poco::XML)