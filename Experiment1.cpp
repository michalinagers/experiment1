#include <iostream>

using namespace std;

int addition(int op1, int op2) { return op1 + op2; }
int subtract(int op1, int op2) { return op1 - op2; }
int multiply(int op1, int op2) { return op1 * op2; }
int divide(int op1, int op2) { return (op2 != 0) ? op1 / op2 : 0; } //handle division by zero

int main()
{
#ifdef _DEBUG
    onexit(_CrtDumpMemoryLeaks);
#endif

    int (*operation[5])(int op1, int op2) = { nullptr, &addition, &subtract, &multiply, &divide };

    int choice, op1, op2;
    cout << "Welcome\n";
    cout << "1: Addition\n";
    cout << "2: Subtract\n";
    cout << "3: Multiply\n";
    cout << "4: Divice\n";
    cout << "5: Exit\n";

    do {
        cout << "Enter input\n";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two integers: ";
            cin >> op1 >> op2;

            int result = operation[choice](op1, op2);
            cout << "Result: " << result << "\n";

        }
        else if (choice != 5) {
            cout << "Invalid command";

        }
    } while (choice != 5);
          
        return 0;

}

