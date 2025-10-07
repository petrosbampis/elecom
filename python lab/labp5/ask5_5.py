import math

try:

    print("Enter the coordinates for P1.")
    x1 = float(input("  Enter P1x: "))
    y1 = float(input("  Enter P1y: "))
    point1 = (x1, y1)

    print("Enter the coordinates for P2.")
    x2 = float(input("  Enter P2x: "))
    y2 = float(input("  Enter P2y: "))
    point2 = (x2, y2)

    print("Enter the coordinates for P3.")
    x3 = float(input("  Enter P3x: "))
    y3 = float(input("  Enter P3y: "))
    point3 = (x3, y3)



    print(f"Point 1 (P1) is at: {point1}")
    print(f"Point 2 (P2) is at: {point2}")
    print(f"Point 3 (P3) is at: {point3}")


    distance_12 = math.sqrt((point2[0] - point1[0])**2 + (point2[1] - point1[1])**2)
    distance_23 = math.sqrt((point3[0] - point2[0])**2 + (point3[1] - point2[1])**2)
    
    print("\nDistances:")
    print(f"The Euclidean distance between P1 and P2 is: {distance_12:}")
    print(f"The Euclidean distance between P2 and P3 is: {distance_23:}")


except ValueError:
    print("\nError: Invalid input.")