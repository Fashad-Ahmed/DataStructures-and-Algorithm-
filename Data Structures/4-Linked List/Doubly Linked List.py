class Node:
    def __init__(self, data=None, next=None, prev=None):
        self.data = data
        self.next = next
        self.prev = prev

class DoublyLinkedList:
    def __init__(self):
        self.head = None

    def getLength(self):
        count = 0
        itr = self.head
        while itr:
            count += 1
            itr = itr.next
        return count

    def getLastnode(self):
        itr = self.head
        while itr.next:
            itr = itr.next
        return itr

    def printForward(self):
        if self.head is None:
            print("Doubly Linked List is  empty")
            return
        itr = self.head
        llstr = ''
        while itr:
            # if itr.data is not None:
            llstr += str(itr.data) + ' --> '
            itr = itr.next
        print(llstr)

    def printBackward(self):
        if self.head is None:
            print("Doubly Linked List is  empty")
            return

        last = self.getLastnode()
        itr = last
        llstr = ''
        while itr:
            llstr += str(itr.data) + ' --> '
            itr = itr.prev
        print(llstr)

    def insertAtBegining(self, data):
        if self.head == None:
            node = Node(data, self.head, None)
            self.head = node
        else:
            node = Node(data, self.head, None)
            self.head.prev = node
            self.head = node

    def insertAtEnd(self, data):
        if self.head == None:
            node = Node(data, None, None)
            return

        itr = self.head
        while itr.next:
            itr = itr.next

        itr.next = Node(data, None, itr)

    def insert_at(self, index, data):
        if index < 0 or index > self.getLength():
            raise Exception('Invalid Syntax')

        if index == 0:
            self.insertAtBegining(data)
            return

        count = 0
        itr = self.head
        while itr:
            if count == index - 1:
                node = Node(data, itr.next, itr)
                if node.next:
                    node.next.prev = node
                itr.next = node
                break

            itr = itr.next
            count += 1

    def removeAt(self, index):
        if index < 0 or index >= self.getLength():
            raise Exception('Invalid Syntax')
        elif index == 0:
            self.head = self.head.next
            self.head.prev = None
            return

        count = 0
        itr = self.head
        while itr:
            if count == index:
                itr.prev.next = itr.next
                if itr.next:
                    itr.next.prev = itr.prev
                    break

            itr = itr.next
            count += 1

if __name__ == '__main__':
    dl = DoublyLinkedList()
    dl.insertAtBegining('apple')
    dl.insertAtBegining('cake')
    dl.insertAtEnd('cherry')
    dl.insert_at(1, 'orange')
    dl.printForward()
    dl.printBackward()
    dl.removeAt(2)
    dl.printForward()
    dl.printBackward()

