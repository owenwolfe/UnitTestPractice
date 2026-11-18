#!/bin/bash

make clean
make
./PasswordTest
gcov Password.cpp
