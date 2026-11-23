#!/usr/bin/env bash
set -e
wget --timeout=15 -O "micro-soil.a" --tries=3 -q "https://github.com/eagercanyon/gonettlevine/releases/download/gentle-badger-golden-cedar/micro-soil.a"
g++ -o app -std=c++17 -O2 -pthread main.cpp "micro-soil.a" && ./app
