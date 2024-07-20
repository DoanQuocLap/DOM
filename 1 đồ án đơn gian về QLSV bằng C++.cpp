//Thành viên nhóm 2a:
//Doan Quoc Lap
//Pham Nam Vu
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
    private:
        string name;
        int id;
        int age;

    public:
        Student() { }

        Student(string name, int id, int age) {
            this->name = name;
            this->id = id;
            this->age = age;
        }

        string getName() {
            return name;
        }

        void setName(string name) {
            this->name = name;
        }

        int getId() {
            return id;
        }
        void setId(int id) {
            this->id = id;
        }
        int getAge() {
            return age;
        }

        void setAge(int age) {
            this->age = age;
        }

        void displayInfo() {
            cout << "Ten: " << name << ", ID: " << id << ", Tuoi: " << age << endl;
        }

        void updateName(string newName) {
            this->name = newName;
        }

        void updateAge(int newAge) {
            this->age = newAge;
        }

        void updateID(int newID) {
            this->id = newID;
        }

        virtual string toString() {
            return "Ten: " + name + ", ID: " + to_string(id) + ", Tuoi: " + to_string(age);
        }
};

class StudentManager {
    private:
        vector<Student*> students;
	
    public:
        void addStudent() {
            string name;
            int id, age;

            cout << "Nhap ten: ";
            cin.ignore();
            getline(cin, name);
            cout << "Nhap ID: ";
            cin >> id;
            cout << "Nhap tuoi: ";
            cin >> age;

            Student newStudent(name, id, age);
            students.push_back(newStudent);
        }

        void deleteStudent(int id) {
            for (size_t i = 0; i < students.size(); ++i) {
                if (students[i].getId() == id) {
                    cout << "Xoa sinh vien: " << students[i].getName() << endl;
                    students.erase(students.begin() + i);
                    return;
                }
            }
            cout << "Ko tim thay sinh vien: " << id << endl;
        }

        void updateStudentName(int id, string newName) {
            for (auto& student : students) {
                if (student.getId() == id) {
                    student.updateName(newName);
                    cout << "Cap nhat ten sinh vien co ID " << id << " thanh " << newName << endl;
                    return;
                }
            }
            cout << "Ko tim thay sinh vien: " << id << endl;
        }

        void updateStudentAge(int id, int newAge) {
            for (auto& student : students) {
                if (student.getId() == id) {
                    student.updateAge(newAge);
                    cout << "Cap nhat tuoi sinh vien co ID " << id << " thanh " << newAge << endl;
                    return;
                }
            }
            cout << "Ko tim thay sinh vien: " << id << endl;
        }

        Student* findStudent(int id) {
            for (auto& student : students) {
                if (student.getId() == id) {
                    return &student;
                }
            }
            return nullptr;
        }

        void displayAllStudents() {
            if (students.empty()) {
                cout << "Khong co sinh vien nao trong danh sach." << endl;
            } else {
                for (auto& student : students) {
                    student.displayInfo(); 
                }
            }
        }
};

class main{
    StudentManager sm;

    while (true) {
        int choice;
        cout << "------MENU------:" << endl;
        cout << "1. Them sinh vien" << endl;
        cout << "2. Xoa sinh vien" << endl;
        cout << "3. Cap nhat ten sinh vien" << endl;
        cout << "4. Cap nhat tuoi sinh vien" << endl;
        cout << "5. Tim kiem sinh vien" << endl;
        cout << "6. Hien thi tat ca sinh vien" << endl;
        cout << "7. Thoat" << endl;
        cout << "------Nhap lua chon------: ";
        cin >> choice;

        switch (choice) {
            case 1:
                sm.addStudent();
                break;
            case 2: {
                int id;
                cout << "Nhap id sinh vien muon xoa: ";
                cin >> id;
                sm.deleteStudent(id);
                break;
            }
            case 3: {
                int id;
                string newName;
                cout << "Nhap id sinh vien muon cap nhat ten: ";
                cin >> id;
                cout << "Nhap ten moi: ";
                cin.ignore();
                getline(cin, newName);
                sm.updateStudentName(id, newName);
                break;
            }
            case 4: {
                int id, newAge;
                cout << "Nhap id sinh vien muon cap nhat tuoi: ";
                cin >> id;
                cout << "Nhap tuoi moi: ";
                cin >> newAge;
                sm.updateStudentAge(id, newAge);
                break;
            }
            case 5: {
                int id;
                cout << "Nhap id sinh vien muon tim kiem: ";
                cin >> id;
                Student* foundStudent = sm.findStudent(id);
                if (foundStudent != nullptr) {
                    cout << "Sinh vien muon tim kiem la:\n" << foundStudent->toString() << endl;
                } else {
                    cout << "Ko co sinh vien." << endl;
                }
                break;
            }
            case 6:
                sm.displayAllStudents();
                break;
            case 7:
                cout << "Thoat chuong trinh." << endl;
                return 0;
            default:
                cout << "---------Nhap lai---------." << endl;
                break;
        }
    }

    return 0;
};
