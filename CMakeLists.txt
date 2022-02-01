cmake_minimum_required(VERSION 3.5)
project(concordo VERSION 0.1 LANGUAGES CXX )

include_directories( include )

add_executable( Autocomplete
                scr/main.cpp
                scr/User.cpp
                scr/Answer.cpp
                scr/World.cpp)