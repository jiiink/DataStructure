#!/usr/bin/python3

# Python 3 changes hash seeds upon interpreter start.
# https://docs.python.org/3/reference/datamodel.html#object.__hash__
#
# This was to fix the following vulnerability:
# http://ocert.org/advisories/ocert-2011-003.html
#
# For non-web apps, the hash non-determinism between interpreter runs
# can be fixed by setting an env var:
# export PYTHONHASHSEED=1234
# But, if the interpreter was started and the env var
# wasn't set ahead of time, here's a fix that can be
# done at runtime from the interpreter itself.

import os
import sys

hashseed = os.getenv('PYTHONHASHSEED')

if not hashseed:
    os.environ['PYTHONHASHSEED'] = '0'
    os.execv(sys.executable, [sys.executable] + sys.argv)



print(hash('foo'))