
def hashFunc(key):
    h = 0
    for i in key:
        h += ord(i)
    return h % 10

class hashMap:
    def __init__(self):
        self.MAX = 100
        self.array =  [None for i in range(self.MAX)]

    def hashFunc(self, key):
        h = 0
        for i in key:
            h += ord(i)
        print(h % self.MAX)
        return h % self.MAX

    def add(self, key, value):
        h = self.hashFunc(key)
        self.array[h] = value

    def __getitem__(self, key):
        h = self.hashFunc(key)
        return self.array[h]

    def __delitem__(self, key):
        h = self.hashFunc(key)
        self.array[h] = None

if __name__ == '__main__':
    hl = hashMap()
    hl.hashFunc('january 6')
    # hl['january 8'] = 300
    # hl['january 9'] = 400
    hl.add('january 8', 300)
    hl.add('january 9', 450)

    print(hl.array)

    del hl['january 6']
    print(hl.array)