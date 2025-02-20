#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    char name[30];
    char className[10];
    float mMath;
    float mPhysical;
};

Student* students[100];
int studentCount = 0;

void addStudent() {
    students[studentCount] = new Student;

    cout << "Nhap ten: ";
    cin.ignore();
    cin.getline(students[studentCount]->name, 30);
    cout << "Nhap lop: ";
    cin.getline(students[studentCount]->className, 10);
    cout << "Nhap diem Toan: ";
    cin >> students[studentCount]->mMath;
    cout << "Nhap diem Ly: ";
    cin >> students[studentCount]->mPhysical;

    studentCount++;
    cout << "Da them hoc sinh thanh cong!\n";
}

void searchStudentByName() {
    char searchName[30];
    cout << "Nhap ten can tim: ";
    cin.ignore();
    cin.getline(searchName, 30);

    for (int i = 0; i < studentCount; i++) {
        if (strcmp(students[i]->name, searchName) == 0) {
            cout << "\nTen: " << students[i]->name
                 << "\nLop: " << students[i]->className
                 << "\nDiem Toan: " << students[i]->mMath
                 << "\nDiem Ly: " << students[i]->mPhysical << "\n";
            return;
        }
    }
    cout << "Khong tim thay hoc sinh!\n";
}
void editStudentClass() {
    char searchName[30];
    cout << "Nhap ten can sua lop: ";
    cin.ignore();
    cin.getline(searchName, 30);

    for (int i = 0; i < studentCount; i++) {
        if (strcmp(students[i]->name, searchName) == 0) {
            cout << "Lop hien tai: " << students[i]->className << "\n";
            cout << "Nhap lop moi: ";
            cin.getline(students[i]->className, 10);
            cout << "Da cap nhat lop thanh cong!\n";
            return;
        }
    }
    cout << "Khong tim thay hoc sinh!\n";
}

void freeMemory() {
    for (int i = 0; i < studentCount; i++) {
        delete students[i];
    }
}

int main() {
    int choice;
    do {
        cout << "\n--- Quan Ly Hoc Sinh ---\n";
        cout << "1. Them hoc sinh\n";
        cout << "2. Tim kiem hoc sinh theo ten\n";
        cout << "3. Sua lop hoc sinh\n";
        cout << "4. Thoat\n";
        cout << "Chon: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: searchStudentByName(); break;
            case 3: editStudentClass(); break;
            case 4: freeMemory(); cout << "Da thoat chuong trinh.\n"; break;
            default: cout << "Lua chon khong hop le!\n";
        }
    } while (choice != 4);

    return 0;
}
