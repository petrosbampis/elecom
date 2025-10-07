import random
import string

try:
    password_length = int(input("Enter length: "))

    if password_length > 0:
        characters = string.ascii_letters + string.digits + string.punctuation
        password = ''.join(random.choice(characters) for i in range(password_length))
        
        
        print("Password is: ", password)
    else:
        
        print("Length should be > 0.")

except ValueError:
    print("Invalid input.")