cmake_minimum_required(VERSION 3.5)
project(QtUdp)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Core)
find_package(Qt5Network)

set(APP_SRC 
	"main.cpp" 
	"QtUdpSocket.cpp" 
	"QtUdpSocket.cpp"
	)
	
add_executable(QtUdpSocket ${APP_SRC})
target_link_libraries(QtUdpSocket Qt5::Core Qt5::Network)