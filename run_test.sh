#/usr/bin/bash
cc -E test.c > test.c.preprocess
./dsv test.c.preprocess test_out.c