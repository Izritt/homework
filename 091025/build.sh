#!/usr/bin/env bash
MAIN="main.cpp io.cpp sort.cpp"
APP="example"
BIN_DIR="bin"
mkdir -p "$BIN_DIR"

if [ -f "$BIN_DIR/$APP" ]; then
    rm "$BIN_DIR/$APP"
fi

g++ $MAIN -o "$BIN_DIR/$APP" \
    -std=c++17 -O2 -Wall -Wextra -Wpedantic \
    -finput-charset=UTF-8 -fexec-charset=UTF-8

./"$BIN_DIR/$APP"
