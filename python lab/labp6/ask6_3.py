import json

def process_students_json(input_file='students.json', output_file='update_students.json'):

    with open(input_file, 'r', encoding='utf-8') as f:
        data = json.load(f)

    print("--- Initial students from students.json ---")
    for student in data['students']:
        print(f"Όνομα: {student['name']}, Ηλικία: {student['age']}, Τμήμα: {student['department']}")

    new_student = {
        "name": "Πέτρος Μπάμπης",
        "age": 23,
        "department": "Φυσικής"
    }
    data['students'].append(new_student)
    print("\n--- New student has been added succesfully ---")

    with open(output_file, 'w', encoding='utf-8') as f:
        json.dump(data, f, ensure_ascii=False, indent=4)
        
    print(f"\nFile update_students.json. has been succesfully created")
    for student in data['students']:
        print(f"Όνομα: {student['name']}, Ηλικία: {student['age']}, Τμήμα: {student['department']}")

    
if __name__ == "__main__":
    process_students_json()
