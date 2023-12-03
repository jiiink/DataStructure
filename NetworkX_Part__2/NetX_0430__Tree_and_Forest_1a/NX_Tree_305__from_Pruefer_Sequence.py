#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     롯데 만만세
# Author:      Cho
# Created:     2021-03-31
#-------------------------------------------------------------------------------

import networkx as nx
import matplotlib.pyplot as plt
import random

Seq =[1,3,2,4,5,2,5]

T = nx.from_prufer_sequence( Seq )

plt.title( "Seq: "+str(Seq) ) # 반드시 nx.draw( ) 앞에 설정해야 함.
pos = nx.draw( T,  with_labels=True, node_color='tomato', \
              font_color='k', edge_color='black', width=1,  node_size=400 )


plt.draw( )
plt.show()