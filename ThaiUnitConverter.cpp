#include <iostream>

using namespace std;

void print_units()
{
    cout << "i - inch" << endl
         << "k - keup" << endl
         << "s - sauk" << endl
         << "w - wah" << endl
         << "n - sen" << endl
         << "y - yot" << endl;
}

int inches_per_unit(char unit)
{
    switch (unit)
    {
        case 'i':
            return 1;
        case 'k':
            return 12;
        case 's':
            return 12 * 2; 
        case 'w':
            return 12 * 2 * 4;
        case 'n':
            return 12 * 2 * 4 * 20;
        case 'y':
            return 12 * 2 * 4 * 20 * 400;
        default:
            return -1;
    }
}

int main()
{
    char from, to;
    float inches, amount, result;
    cout << "Which unit do you want to convert from?" << endl;
    print_units();
    cin >> from;
    cout << "What amount of that unit do you want to convert?" << endl;
    cin >> amount;
    cout << "Which unit do you want to convert to?" << endl;
    print_units();
    cin >> to;
    inches = inches_per_unit(from) * amount;
    result = inches / inches_per_unit(to);
    cout << "Result: " << result << endl;
    return 0;
}
