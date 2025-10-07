student_data = []

try:
    with open('grades.txt', 'r', encoding='utf-8') as file:
        for line in file:
            if not line.strip():
                continue
            
            parts = line.strip().split(',')
            name = parts[0]
            grade = float(parts[1])
            
            student_data.append((name, grade))

    if not student_data:
        print("File is empty or contains no valid data.")
    else:
        print("--- Students with grade over 17 ---")
        
        for name, grade in student_data:
            if grade > 17:
                print(f"Name: {name}, Grade: {grade}")
                found_student = True
        
        grades_list = [grade for name, grade in student_data]
        average_grade = sum(grades_list) / len(grades_list)

        print(f"Average grade: {average_grade:}")

except FileNotFoundError:
    print("Error: The file 'grades.txt' was not found.")
