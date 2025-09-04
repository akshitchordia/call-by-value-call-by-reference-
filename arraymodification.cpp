// Name - Akshit Chordia
// PRN - 24070123008
// Batch - EnTC - A1

#include <iostream>
using namespace std;

void modifiedArray(int a[], int &num) {  
    for (int i = 0; i < 5; i++) {
        a[i] = num++;
    }
}

int main() {
    int num;
    int a[5] = {10, 20, 30, 40, 50};

    cout << "Enter a number: ";
    cin >> num;

    cout << "Before update: ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    modifiedArray(a, num);  

    cout << "\nAfter update: ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

/*Output:-
Enter a number: 5
Before update: 10 20 30 40 50 
After update: 5 6 7 8 9 
*/
