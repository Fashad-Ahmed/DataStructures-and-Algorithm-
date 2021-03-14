class hashMap:
    def __init__(self):
        self.MAX = 100
        self.array =  [[] for i in range(self.MAX)]

    def hashFunc(self, key):
        h = 0
        for i in key:
            h += ord(i)
        print(h % self.MAX)
        return h % self.MAX

    def __getitem__(self, key):
        index = self.hashFunc(key)
        for i in self.array[index]:
            if i[0] == key:
                return i[1]

    def __setitem__(self, key, value):
        h = self.hashFunc(key)
        char = False
        for i,j in enumerate(self.array[h]):
            if len(j) == 2 and j[0] == key:
                self.array[h][i] = (key,value)
                char = True
        if not char:
            self.array.append((key,value))


    def __delitem__(self, key):
        index_arr = self.hashFunc(key)
        for x,y in enumerate(self.array[index_arr]):
            if y[0] == key:
                print(x,' deleted')
                del self.array[index_arr][x]

if __name__ == '__main__':
    t = hashMap()

    t["march 6"] = 310
    t["march 7"] = 420
    t["march 8"] = 67
    t["march 17"] = 63457
    t["march 6"] = 11

    print(t.array)

    del t["march 8"]

    print(t.array)
