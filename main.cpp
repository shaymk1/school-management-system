#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

struct student
{
    string first_name;
    string last_name;
    string registration_number;
    string classes;

} student_data;

struct teacher
{
    string first_name;
    string last_name;
    string qualification;
    string subjects;
    // on
    string experience;
    string salary;
    string cell_number;
} tech[50];

int main()
{
    int i = 0, j;
    char choice;
    string find;
    string search;
    while (i)
    {
        system("cls");
        cout << "School Management System" << endl;
        cout << "n\n\t\t\tMAIN SCREEN\n\n";
        cout << "Enter Student Choice : " << endl;
        cout << " 1. Student Information" << endl;
        cout << " 2. Teacher Information" << endl;
        cout << " 3. Exit Programme" << endl;
        cin >> choice;

        system("cls");
        switch (choice)
        {
        case '1':
        {
            while (i)
            {
                system("cls");
                cout << "t\t\tStudent Information and Bio Data Section\n\n\n";
                cout << "Enter Student Choice : " << endl;
                cout << " 1. Create New Entry\n";
                cout << " 2. Find And Display Entry\n";
                cout << " y           entry\n";
                cout << " 3. Jump TO Main\n";
                cin >> choice;

                switch (choice)
                {
                case '1':
                {
                    ofstream f1("student.txt", ios::app);
                    for (i = 0; choice != 'n'; i++)
                    {
                        if ((choice == 'y') || (choice == 'Y') || (choice == 1))
                        {
                            cout << " Enter First Name : ";
                            cin >> student_data.first_name;
                            cout << " Enter Last Name : ";
                            cin >> student_data.last_name;
                            cout << " Enter Registration Number : ";
                            cin >> student_data.registration_number;
                            cout << " Enter Class : ";
                            cin >> student_data.classes;

                            f1 << student_data.first_name << endl
                               << student_data.last_name << endl
                               << student_data.registration_number << endl
                               << student_data.classes << endl;
                            cout << "Do You Want To Enter Data?";
                            cout << "Press Y to continue and N to finish :";
                            cin >> choice;
                        }
                    }
                    f1.close();
                }
                    continue;
                }
            case '2':
            {
                ifstream f2("student.txt");
                cout << "Enter First Name To Be Displayed : ";
                cin >> find;
                cout << endl;
                int not_found = 0;
                for (j = 0; (j < i) || (!f2.eof()); j++)
                {
                    getline(f2, student_data.first_name);
                    if (student_data.first_name == find)
                    {
                        not_found = 1;
                        cout << "First Name : " << student_data.first_name << endl;
                        cout << "Last  Name : " << student_data.last_name << endl;

                        getline(f2, student_data.registration_number);
                        cout << "Registration Number : " << student_data.registration_number << endl;

                        getline(f2, student_data.classes);
                        cout << "Classes : " << student_data.classes << endl;
                    }
                }

                if (not_found == 0)
                {
                    cout << "Unfortunately, No Records Are Found" << endl;
                }
                f2.close();
                cout << "Please Press Any Key To Proceed" << endl;
                getch();
            }
                continue;
            case '3':
            {
                break;
            }
            }

            break;
        }

            continue;
        }
        
    case '4':
    {

        while (1)
        {
            system("cls");
            cout << "t\t\tTeacher Information and Bio Data Section\n\n\n";
            cout << "Enter Your Choice : " << endl;
            cout << " 1. Create New Entry\n";
            cout << " 2. Find And Display Entry\n";
            cout << " y           entry\n";
            cout << " 3. Jump TO Main\n";
            cin >> choice;
        }
    }
    }
}
}
