#!/bin/bash

set -e 

g++ test_Unit_compile.cpp -o test_Unit_compile

g++ test_Unit_compile2.cpp -o test_Unit_compile2

 
./test_Unit_compile < test_Unit_io_in.txt && ./test_Unit_compile2 > test_Unit_io_ans.txt && diff test_Unit_io_ans.txt test_Unit_io_out.txt
