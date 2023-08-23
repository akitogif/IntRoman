#!/bin/env bash

git clone https://github.com/akitogif/IntRoman

cd IntRoman

g++ inttorom.cpp -o iman
g++ romtint.cpp -o rman

sudo cp iman /usr/bin/
sudo cp rman /usr/bin/

rm iman
rm rman

cd ..
