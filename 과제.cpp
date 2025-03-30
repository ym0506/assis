#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int choice, quantity, num;
    char order;

    cout << "************************************" << "\n";
    cout << "McDove 11's Restaurant" << "\n";
    cout << "************************************" << "\n";
    cout << "Make your Selection from the menu below :" << "\n";
    cout << "1. Regular Hamburger                           $0.89" << "\n";
    cout << "2. Regular Cheeseburger                        $0.99" << "\n";
    cout << "3. Fish Sandwich                               $1.29" << "\n";
    cout << "4. Half-pounder with Cheese                    $2.49" << "\n";
    cout << "5. French Fries                                $0.79" << "\n";
    cout << "6. Large soft drink                            $0.99" << "\n";
    cout << "************************************" << "\n";

    while (true) {
        cout << "Select 1,2,3,4,5 or 6 -> ";
        cin >> choice;

        if (choice == 1) {
            cout << "주문할 수량을 입력하시오--> ";
            cin >> quantity;
        }
    }
    