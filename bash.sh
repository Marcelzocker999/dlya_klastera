#!/bin/bash
cd /home/grid/testbed/tb117/vec_samples/src
ml icc
for i in {1..3}; do
scr=$(date +"%A_%H:%M:%S_%N")
icc -O$i F1.c -o try_$scr
echo "Iteration $i:"
time ./try_$scr
done
`
