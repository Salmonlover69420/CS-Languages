#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;
struct student {
    char name[20];
    int num;
    float grade[3], avg;
};

void display(student tab[], int n);
student maximum(student tab[], int n);
int search(student tab[], int n, char name[]);

int main() {
    int n;
    student tab[30];
    do {
        cout << "enter array size: ";
        cin >> n;
    } while (n <= 0 || n > 30);

    cin.ignore(INT_MAX, '\n');

    for (int i = 0; i < n; i++) {
        cout << "Enter the student's name: ";
        cin.getline(tab[i].name, 20); // takes only 19 (one char is reserved for something else)
        cout << "Enter the student number: ";
        cin >> tab[i].num;
        cout << "Enter the student's grades: ";

        float s = 0;
        for (int j = 0; j < 3; j++) {
            cin >> tab[i].grade[j];
            s += tab[i].grade[j];
        }

        tab[i].avg = s / 3;
        cin.ignore(INT_MAX, '\n');
    }

    display(tab, n);

    student max = maximum(tab, n);

    cout << "The student that has the highest average is: \n";
    cout << left << setw(15) << "Name" << setw(10) << "Number" << setw(10) << "I310" << setw(10) << "I311" << setw(10) << "I312" << setw(10) << "Average" << '\n';
    cout << left << setw(15) << max.name << setw(10) << max.num << setw(10) << max.grade[0] << setw(10) << max.grade[1] << setw(10) << max.grade[2] << setw(10) << max.avg << '\n';

    char name[20];
    cout << "Enter the name of the student you wish to find: \n";
    cin.getline(name, 20);
    int pos = search(tab, n, name);
    if (pos == -1)
        cout << "Student not found";
    else {
        cout << "Student found\n";
        cout << left << setw(15) << "Name" << setw(10) << "Number" << setw(10) << "I310" << setw(10) << "I311" << setw(10) << "I312" << setw(10) << "Average" << '\n';
        cout << left << setw(15) << tab[pos].name << setw(10) << tab[pos].num << setw(10) << tab[pos].grade[0] << setw(10) << tab[pos].grade[1] << setw(10) << tab[pos].grade[2] << setw(10) << tab[pos].avg << '\n';
    }

    return 0;
}

void display(student tab[], int n) {
    cout << left << setw(15) << "Name" << setw(10) << "Number" << setw(10) << "I310" << setw(10) << "I311" << setw(10) << "I312" << setw(10) << "Average" << '\n';
    for (int i = 0; i < n; i++) {
        cout << left << setw(15) << tab[i].name << setw(10) << tab[i].num;
        for (int j = 0; j < 3; j++) {
            cout << setw(10) << tab[i].grade[j];
        }
        cout << left << setw(10) << tab[i].avg << '\n';
    }
}

student maximum(student tab[], int n) {
    student max = tab[0];
    for (int i = 0; i < n; i++) {
        if (tab[i].avg > max.avg)
            max = tab[i];
    }

    return max;
}

int search(student tab[], int n, char name[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(tab[i].name, name) == 0) { // string compare for arrays only, #include <string> equality works too
            return i;
        }
    }

    return -1;
}
