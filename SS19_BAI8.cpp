#include <stdio.h>
#include <string.h>

// Kh?i t?o c?u trúc sinh viên
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

// Hàm s?p x?p sinh viên theo tên s? d?ng thu?t toán Bubble Sort
void sortStudentsByName(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                // Hoán d?i giá tr? tr?c ti?p mà không c?n dùng hàm swap
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Khai báo m?ng sinh viên và gán giá tr?
    Student students[5] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Le Thi B", 21, "0987654321"},
        {3, "Tran Van C", 22, "0123987654"},
        {4, "Pham Thi D", 19, "0987123456"},
        {5, "Hoang Van E", 23, "0112233445"}
    };

    // In m?ng sinh viên tru?c khi s?p x?p
    printf("Danh sach sinh vien truoc khi sap xep:\n");
    for (int i = 0; i < 5; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n", students[i].phoneNumber);
        printf("\n");
    }

    // G?i hàm s?p x?p sinh viên theo tên
    sortStudentsByName(students, 5);

    // In m?ng sinh viên sau khi s?p x?p
    printf("Danh sach sinh vien sau khi sap xep:\n");
    for (int i = 0; i < 5; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Phone Number: %s\n", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

