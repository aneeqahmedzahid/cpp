#include<iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter The Length Of Array : ";
    cin >> length;

    int array[length];
    int i = 0;

    while (i < length) {
        cout << "Enter " << i + 1 << " Number : ";
        cin >> array[i];
        i++;
    }

    int num;
    cout << "Enter Number To Search : ";
    cin >> num;

    int loc = -1;
    i = 0;

    while (i < length) {
        if (array[i] == num) {
            loc = i;
        }
        i++;
    }

    cout << "The Number Found At Location : " << loc + 1;

    return 0;
}
