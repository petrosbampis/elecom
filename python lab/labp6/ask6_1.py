import xml.etree.ElementTree as ET

tree = ET.parse('students.xml')
root = tree.getroot()

print("--- Initial students ---")
   
for student in root.findall('student'):
    name = student.find('name').text
    age = student.find('age').text
    department = student.find('department').text
    print(f"Όνομα: {name}, Ηλικία: {age}, Τμήμα: {department}")

   
new_student = ET.Element('student')

name = ET.SubElement(new_student, 'name')
name.text = 'Πέτρος Μπάμπης'
age = ET.SubElement(new_student, 'age')
age.text = '23'
department = ET.SubElement(new_student, 'department')
department.text = 'Φυσικής'
    
root.append(new_student)
    
print("\n--- New student has been added succesfully ---")
tree.write('update_students.xml', encoding='unicode', xml_declaration=True)
    
print("\n.xml file has been succesfully updated.")
for student in root.findall('student'):
    name = student.find('name').text
    age = student.find('age').text
    department = student.find('department').text
    print(f"Όνομα: {name}, Ηλικία: {age}, Τμήμα: {department}")
