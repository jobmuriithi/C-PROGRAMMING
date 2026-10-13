#!/usr/bin/env bash
# Compiles every .cpp file into ./bin/<WeekFolder>/<program>
set -e
mkdir -p bin
for f in Week*/*.cpp; do
    dir="bin/$(dirname "$f")"
    mkdir -p "$dir"
    g++ -std=c++17 -Wall -Wextra -o "$dir/$(basename "$f" .cpp)" "$f"
    echo "Compiled $f"
done
echo "All programs compiled into ./bin"
