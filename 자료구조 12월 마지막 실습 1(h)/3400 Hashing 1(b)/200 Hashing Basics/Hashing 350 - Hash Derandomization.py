#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-11-08
#-------------------------------------------------------------------------------

import os
import sys
import random
from subprocess import call

random.seed(37)
cmd = ['python', '-c', 'print(hash(2345))']

for i in range(5):
    hashseed = bytes(random.randint(0, 1024))
    print('\n hashseed', hashseed)
    #call(cmd, env={'PYTHONHASHSEED': hashseed})