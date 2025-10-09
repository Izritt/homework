#!/usr/bin/env bash
MAIN="main.cpp io.cpp sort.cpp"
APP="example"
if [ -f "$APP" ]; then rm "$APP"; fi
g++ $MAIN -o $APP -std=c++17 -O2 -Wall -Wextra -Wpedantic -finput-charset=UTF-8 -fexec-charset=UTF-8
./$APP
