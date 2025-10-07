str1 = input("Type string: ")
s = str1.lower()  # Κάνε τη συμβολοσειρά πεζή
keyword = input("Type the word you want to find: ").lower()  # Κάνε και τη λέξη-κλειδί πεζή
print("Word", keyword, "appears", s.count(keyword), "times in string:", str1)
