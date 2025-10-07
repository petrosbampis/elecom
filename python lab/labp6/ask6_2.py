import xml.etree.ElementTree as ET
import json

def convert_xml_to_json(xml_file, json_file):

    tree = ET.parse(xml_file)
    root = tree.getroot()
        
    students_list = []
    data_for_json = {"students": students_list}
        
    for student_node in root.findall('student'):
        student_dict = {
            'name': student_node.find('name').text,
            'age': int(student_node.find('age').text),
            'department': student_node.find('department').text
        }
        students_list.append(student_dict)
            
    with open(json_file, 'w', encoding='utf-8') as f:
        json.dump(data_for_json, f, ensure_ascii=False, indent=4)
            
    print(f"File '{json_file}' has been succesfully createf.")

if __name__ == "__main__":
    convert_xml_to_json('students.xml', 'students.json')