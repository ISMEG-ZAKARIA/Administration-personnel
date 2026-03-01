cmake_minimum_required(VERSION 3.15)
project(AdministrationPersonnel LANGUAGES CXX)

# Set C++ standard to 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Source files
set(SOURCES
    src/main.cpp
    src/Employee.cpp
    src/Manager.cpp
    src/Personnel.cpp
)

# Headers (optional but good for IDEs)
set(HEADERS
    src/Employee.h
    src/Manager.h
    src/Personnel.h
)

# Create executable
add_executable(personnel-admin ${SOURCES} ${HEADERS})

# Include directory
target_include_directories(personnel-admin PRIVATE src)
