#-------------------------------------------------------------------------------
# Purpose:     2020 Prof. Zoh's Work
# Author:      Cho
# Created:     2020-07-17
#-------------------------------------------------------------------------------

from networkx import *
import matplotlib.pyplot as plt
import matplotlib

avail_font_names = [f.name for f in matplotlib.font_manager.fontManager.ttflist]


for w in avail_font_names :
    print(f' name= {w}')