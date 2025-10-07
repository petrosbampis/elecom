grade = float(input("Type grade: "))
if (grade <= 10 and grade >= 8.5):
    print("Excellent")
elif (grade <= 8.5 and grade >= 6.5):
    print(("Very good"))
elif(grade <= 6.5 and grade >= 5):
    print("Pass")
elif(grade < 5):
    print("Failure")
