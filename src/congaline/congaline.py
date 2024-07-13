from sys import stdin, stdout

class Node:
    def __init__(self, value=None):
        self.value = value
        self.prev = None
        self.next = None
        self.partner = None
        
class DLL:
    def __init__(self):
        self.head = Node()
        self.tail = self.head
        
    def setup_partners(self):
        node = self.head.next
        while node and node.next:
            node.partner = node.next
            node.next.partner = node
            node = node.next.next     
            
    def append(self, value):
        new_node = Node(value)
        self.tail.next = new_node
        new_node.prev = self.tail
        self.tail = new_node 
        
    def move_to_tail(self, node):
        old_prev = node.prev
        old_prev.next = node.next
        old_next = node.next
        old_next.prev = node.prev
        
        node.prev = self.tail
        node.next = None
        self.tail.next = node
        self.tail = node
        
    def move_to_partner(self, node):
        old_prev = node.prev
        old_prev.next = node.next
        old_next = node.next
        old_next.prev = node.prev
        
        partner = node.partner
        if partner.value == self.tail.value:
            self.move_to_tail(node)
        else:
            partner.next.prev = node
            node.next = partner.next
            partner.next = node
            node.prev = partner
            
    def print_line(self):
        stdout.write('\n')
        n = self.head.next
        while n:
            stdout.write(n.value+'\n')
            n = n.next
            
n, q = map(int, stdin.readline().strip().split())
line = DLL()

for _ in range(n):
    p1, p2 = stdin.readline().strip().split()
    n1, n2 = Node(p1), Node(p2)
    line.append(p1)
    line.append(p2)
line.setup_partners()
mic = line.head.next

for ins in stdin.readline().strip():
    if ins == 'F':
        mic = mic.prev
    elif ins == 'B':
        mic = mic.next
    elif ins == 'R':
        if not mic.next:
            mic = line.head.next
        else:
            node = mic.prev
            line.move_to_tail(mic)
            mic = node.next
    elif ins == 'C':
        if not mic.next:
            mic = line.head.next
        elif mic.partner == mic.prev:
            mic = mic.next
        else:
            node = mic.prev
            line.move_to_partner(mic)
            mic = node.next
    elif ins == 'P':
        stdout.write(mic.partner.value+'\n')
        
line.print_line()