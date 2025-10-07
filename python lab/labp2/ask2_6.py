def commonelement(list1, list2):
    for element in list1:
        if element in list2:
            return True
    return False

print(commonelement([1, 2, 3], [4, 5, 6]))    
print(commonelement([1, 2, 3], [3, 4, 5]))     
