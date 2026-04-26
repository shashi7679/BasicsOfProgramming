## Queue ##

class Node:
    def __init__(self, value):
        self.val = value
        self.next = None
        

class Queue:
    def __init__(self, value):
        new_node = Node(value)
        self.head = new_node
        self.tail = new_node
        self.length = 1
    
    
    def Enqueue(self, value):
        if self.length == 0:
            new_node = Node(value)
            self.head = new_node
            self.tail = new_node
            self.length = 1
            return True
            
        else:
            new_node = Node(value)
            self.head.next = new_node
            self.head = new_node
        self.length += 1
        return True
        
    def Dequeue(self):
        if self.length == 0:
            print("Queue is empty!!")
            return None
            
        elif self.length == 1:
            temp = self.tail
            self.tail = None
            self.head = None
            self.length = 0
            return temp
            
        else:
            temp = self.tail
            self.tail = self.tail.next
            temp.next = None
            self.length -= 1
            return temp
            
    def print_Queue(self):
        temp = self.tail
        print("Queue Starts from here!.. \n")
        while temp:
            print(temp.val, " -> ",end=" ")
            temp = temp.next
        
        
if __name__ == "__main__":
    my_queue = Queue(1)
    # my_queue.print_Queue()
    my_queue.Enqueue(2)
    for i in range(3,6):
        my_queue.Enqueue(i)
    my_queue.print_Queue()
    
    print("Testing Dequeue Operations!!")
    my_queue.Dequeue()
    my_queue.print_Queue()
    for _ in range(5):
        my_queue.Dequeue()
    
        
        
    
        