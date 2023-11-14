class ComparableNode:
    def __init__(self, node):
        self.node = node

    def __gt__(self, other):
        return self.node.val > other.node.val

    def __eq__(self, other):
        return self.node.val == other.node.val

    def __repr__(self):
        return repr(self.node)


aa = ComparableNode(23)
bb = ComparableNode(34)
cc = ComparableNode(67)