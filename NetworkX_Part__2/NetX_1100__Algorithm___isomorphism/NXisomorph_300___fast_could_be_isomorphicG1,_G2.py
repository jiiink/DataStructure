# https://networkx.org/documentation/stable/reference/algorithms/generated/networkx.algorithms.isomorphism.could_be_isomorphic.html
#networkx.algorithms.isomorphism.could_be_isomorphic

import networkx as nx
import networkx.algorithms.isomorphism as iso


G1 = nx.Graph()
G2 = nx.Graph()

nx.add_path(G1, [3,   5, 1,   6, 8 ],     weight=1)
nx.add_path(G2, [10, 20, 30, 40, 80],     weight=2)
G1.add_edge( 3,1 )

ans1 = nx.could_be_isomorphic(G1, G2)  # 아니면 빨리 아니라고 보고함
# 주의 could_be_isomorphic은 dierected graph는 지원하지 않아요.....


ans2 = nx.fast_could_be_isomorphic(G1, G2)   # 아닌 경우 더 빨린 그 차이를 확인
ans3 = nx.faster_could_be_isomorphic(G1, G2)
print(f"fast ans2= {ans2}, faster ans3= {ans3}")


