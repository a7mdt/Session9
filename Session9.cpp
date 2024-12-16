#include <iostream>
using namespace std;

// ----------------------[Randoms]------------------------

/*

    void NAME () {
        -----
        -----
        -----

       (there is no return from the void function)
    }

    dataType (int, float, double, string) NAME () {
        -----
        -----
        -----

        return ()
    }
*/

/* ProtoType in cpp */

int printFive() {
    cout << 5 << endl;

    return 0; 
}

void printOne() {
    cout << 1 << endl;
}

string returnAhmed() {
    return "ahmed";
}

int returnSeven() {
    return 7;
}

/*
    * Passing:
             ------------      ------------
              Parameters        Arguments 
             ------------      ------------
               numerical    :    numerical
                string      :     string
                 char       :      char
                 int        :      char    => To print ASCII Values
*/

// (Parameter)
void sayHiHello(string name) {
    cout << "Hello, " << name << endl;
    cout << "Hi, " << name << endl;
}

void printASCII(int number) {
    cout << number << endl ;
}

void Num(int number = 100) {
    cout << number << endl;
}

void nums(int num1, int num2, int num3, int num4 = 100) {
    cout << num1 << " " << num2 << " " << num3 << " " << num4;
}

void printNameAge(string name, int age = 100) {
    cout << "Hello, " << name << " u r " << age << " years old. \n";
}

double devise(double num, int devisor) {
    return num / devisor;
}

int main()
{
    // ----------------------[Randoms]------------------------

    cout << "\n--------------------------------\n";

    printFive();
    printFive();
    printFive();

    for (int i = 0; i < 5; i++) {
        printFive();
    }

    cout << "\n--------------------------------\n";

    int x = 7;
    int sum = x + returnSeven();

    cout << sum << endl;
    cout << returnSeven() << endl;

    cout << "\n--------------------------------\n";

    cout << returnAhmed() << endl;
    cout << returnAhmed() << " " << "Tarek" << endl;

    cout << "\n--------------------------------\n";

    printOne();
    printOne();
    printOne();

    for (int i = 0; i < 5; i++) {
        printOne();
    }

    cout << "\n--------------------------------\n";

    // (Argument)
    sayHiHello("Ahmed");
    cout << "-------\n";
    sayHiHello("Rawan");
    cout << "-------\n";
    sayHiHello("Alaa");
    cout << "-------\n";
    sayHiHello("Yousef");
    cout << "-------\n";
    sayHiHello("Mai");
    cout << "-------\n";
    string name;
    cout << "Enter your name : ";
    cin >> name;

    sayHiHello(name);

    cout << "\n--------------------------------\n";

    char num; 
    cout << "Enter the Char u want to print in ASCII: "; 
    cin >> num;

    printASCII(num);

    cout << "\n--------------------------------\n";

    Num(); // Default val => 100
    Num(50); // Will print 50

    cout << "\n--------------------------------\n";

    nums(1, 2, 3, 4);
    cout << endl;
    nums(1, 2, 3, 6);
    cout << endl;
    nums(1, 2, 3);
    cout << endl;
    nums(1, 2, 3, 50);

    cout << "\n--------------------------------\n";

    printNameAge("Ahmed");
    printNameAge("Menna", 20);
    printNameAge("Rana", 23);
    printNameAge("Ali"); 

    cout << "\n--------------------------------\n";

    cout << devise(5, 10) << endl; // 5 / 10 ==> 0.5
    cout << devise(10, 5) << endl; // 10 / 5 ==> 2

    double number;
    cout << "Enter the number : ";
    cin >> number;

    int devisor;
    cout << "Enter the devisor : ";
    cin >> devisor;

    cout << devise(number, devisor);

    cout << "\n--------------------------------\n";

    // -------------------------------------------------------

    // -------------------[Applications]----------------------

    /*
        1- Transpose a Matrix with rows=3, columns=4

          j=0 j=1 j=2 j=3  
    i=0    1   2   3   4               1   5   9
    i=1    5   6   7   8       =>      2   6   10
    i=2    9   10  11  12              3   7   11
    i=3                                4   8   12

        ----------------

        1   2   3   4   Length=4, Last Index=Length-1 
    */

    /*
    const int rows = 3, columns = 4;
    int matrix[rows][columns]; // matrix[3][4]
    int transposeMatrix[columns][rows]; // transposeMatrix[4][3]

    // Taking Inputs from user:
    cout << "Enter The Values of Matrix 3x4 : " << endl;
    for (int i = 0; i < rows; i++) { // 0 => rows (3) ==> 0,1,2
        for (int j = 0; j < columns; j++) { // 0 => columns (4) ==> 0,1,2,3
            cin >> matrix[i][j];
        }
    }

    cout << "-----------------------------\n";

    // Define Transpose Matrix:
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            transposeMatrix[j][i] = matrix[i][j];
        }
    }

    // Print Matrix:
    cout << "Print The Values of Matrix 3x4 : " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "-----------------------------\n";

    // Print Transpose Matrix:
    cout << "Print The Values of Transpose Matrix 4x3 : " << endl;
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposeMatrix[i][j] << "\t";
        }
        cout << endl;
    }
    */
}


