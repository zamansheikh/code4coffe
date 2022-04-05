#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct Student {
    int id;
    char name[24];
    char address[24];
};
void addRecord();
int main () {
    Student st;
    fstream fbin("students.dat", ios::binary | ios::in | ios::out);
    if (!fbin) {
        cout << "Error opening data file\n" << endl;
    }
    else {
        //fbin.write((char *)&st, sizeof(st));    // write
        // addRecord();
        cout << "1. Enter a new record\n" << "2. Show all records\n" << endl;
        char ch;
        cout << "Select option: ";
        while (cin >> ch) {
            if (ch == 'y' || ch == '1') {
                addRecord();
            }
            else if (ch == '2') {
                cout << "************* Print Records *************" << endl;
                cout << "ID\t\tName\t\t\tAddress\n----------------------";
                cout << "------------------------------------" << endl;
                while (fbin.read((char *)&st, sizeof(st))) {
                    cout << st.id << "\t\t" << st.name << "\t\t" << st.address << endl;
                }
            }
            else {
                break;
            }
            cout << "1. Enter a new record\n" << "2. Show all records\n" << endl;
            cout << "Select option: ";
            
        }
        fbin.close();
    }
    return 0;
}
void addRecord() {
    Student newSt;
    fstream fbin("students.dat", ios::binary | ios::in | ios::out);
    if (!fbin) {
        cout << "Error! Data couldn't be saved. [File Error]" << endl;
    }
    else {
        cout << "Enter Id: ";
        cin >> newSt.id;
        getchar();
        cout << "Enter Name: ";
        gets(newSt.name);
        getchar();
        cout << "Enter Address: ";
        gets(newSt.address);
        getchar();
        fbin.write((char *)&newSt, sizeof(newSt));
        cout << "New record added!\n" << endl;
    }
    fbin.close();
}