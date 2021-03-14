# Q NO.1
exp = [2200,2350,2600,2130,2190]

print(exp[1] - exp[0]); print(exp[0]+exp[1]+exp[2])
for i in range(len(exp)):
    if exp[i] == 2000:
        print(i)
exp.insert(5,1980)
exp[3] = exp[3] + 200
print(exp)

# Q NO.2

heros=['spider man','thor','hulk','iron man','captain america']

print(len(heros))
heros.insert(5,'black panther')
heros.remove('black panther')
heros.insert(3,'black panther')
heros.sort()
print(heros)


