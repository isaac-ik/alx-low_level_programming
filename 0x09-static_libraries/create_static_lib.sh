#!/bin/bash
gcc -c ./c-files/*.c && ar -rc liball.a *.o && rm *.o
