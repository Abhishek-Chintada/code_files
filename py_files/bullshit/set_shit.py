set1 = set([1, 2, 2, 3, 7, 5, 6, 0, 1, 7, 4, 8, 9])
set2 = set([7,2,8,2,8,9,1,7,3])

setu = set1.union(set2)
seti = set1.intersection(set2)

print(setu)
print(seti)
print(set2.issubset(set1))
