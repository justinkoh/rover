#!/bin/bash

set -e 

g++ Gen1.cpp Channel_Dst1.cpp Unit.cpp -o Gen1_to_Dst1 
g++ Gen2.cpp Channel_Dst1.cpp Unit.cpp -o Gen2_to_Dst1

./Gen1_to_Dst1 > Gen1.sink1.txt
./Gen2_to_Dst1 > Gen2.sink1.txt