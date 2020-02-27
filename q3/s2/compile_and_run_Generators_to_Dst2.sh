#!/bin/bash

set -e 

g++ Gen1.cpp Channel_Dst2.cpp Unit.cpp -o Gen1_to_Dst2 
g++ Gen2.cpp Channel_Dst2.cpp Unit.cpp -o Gen2_to_Dst2

./Gen1_to_Dst2 > Gen1.sink2.txt
./Gen2_to_Dst2 > Gen2.sink2.txt