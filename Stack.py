## Stack ##

class Node:
    def __init__(self, val):
        self.val = val
        self.next = None
        

class Stack:
    def __init__(self, value):
        new_node = Node(value)
        self.top = new_node
        self.length = 1
        
    def push(self, value):
        if self.length == 0:
            new_node = Node(value)
            self.top = new_node
        else:
            new_node = Node(value)
            new_node.next = self.top
            self.top = new_node
        self.length += 1
        
        
    def pop(self):
        if self.length == 0:
            return None
        
        elif self.length == 1:
            temp = self.top
            self.top = None
            temp.next = None
        
        else:
            temp = self.top
            self.top = self.top.next
            temp.next = None
        self.length -= 1
        return temp
        
    def print_stack(self):
        temp = self.top
        while temp:
            print(temp.val,"\n","|")
            temp = temp.next
            


if __name__=="__main__":
    my_stack = Stack(1)
    # my_stack.print_stack()
    # my_stack.push(2)
    for i in range(2,6):
        my_stack.push(i)
    my_stack.print_stack()
    print("\nLength: ",my_stack.length)
    
    ## Pop ##
    print("Poping Last Element")
    my_stack.pop()
    print("................")
    my_stack.print_stack()
            
        