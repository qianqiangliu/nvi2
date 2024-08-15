#!/bin/sh

git clone https://github.com/qianqiangliu/db1.git
cmake -DCMAKE_EXE_LINKER_FLAGS=-Ldb1 -DDB_INCLUDE_DIR=db1/include .
make -C db1
make -j8
