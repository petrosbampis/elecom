import math

try:
    print("Enter coordinations for Α(x, y):")
    Ax = float(input("  x input (Ax): "))
    Ay = float(input("  y input (Ay): "))

    print("\ntype coordinations for B(x, y):")
    Bx = float(input("  x input (Bx): "))
    By = float(input("  y input (By): "))

    dot = (Ax * Bx) + (Ay * By)

    magnitude_A = math.sqrt(Ax**2 + Ay**2)
    magnitude_B = math.sqrt(Bx**2 + By**2)

    if magnitude_A == 0 or magnitude_B == 0:
        print("\nNo angle.")
    else:
        costh = dot / (magnitude_A * magnitude_B)

        angle_rad = math.acos(costh)
        angle_deg = math.degrees(angle_rad)


        print(f"A = ({Ax}, {Ay})")
        print(f"B = ({Bx}, {By})")
        print(f"Angle θ: {angle_deg:}°")


except ValueError:
    print("Invalid input.")
