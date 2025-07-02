# 17. 다음은 파이썬에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.

class Node:
    def __init__(self, value):
        self.value = value
        self.children = []
 
def tree(li):
    nodes = [Node(i) for i in li]
    for i in range(1, len(li)):
        nodes[(i - 1) // 2].children.append(nodes[i])
    return nodes[0]
 
def calc(node, level=0):
    if node is None:
        return 0
    return (node.value if level % 2 == 1 else 0) + sum(calc(n, level + 1) for n in node.children)
 
li = [3, 5, 8, 12, 15, 18, 21]
 
root = tree(li)
 
print(calc(root)) 
