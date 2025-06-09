//to mandatory distribute a given amount of money if 10,5,2 rs notes
#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the total amount: ";
    cin >> amount;

    int totalNotes = 0;

    // Step 1: Distribute `10 Rs` notes
    int tens = amount / 10;
    amount %= 10;
    totalNotes += tens;

    // Step 2: Distribute `5 Rs` notes
    int fives = amount / 5;
    amount %= 5;

    // Step 3: Adjust `5 Rs` notes if the remaining amount is not divisible by `2 Rs`
    while (amount % 2 != 0 && fives > 0) {
        fives--;          // Reduce one `5 Rs` note
        amount += 5;      // Add back `5 Rs` to the remaining amount
    }
    totalNotes += fives;

    // Step 4: Distribute `2 Rs` notes
    if (amount % 2 == 0) {
        totalNotes += amount / 2; // Use `2 Rs` notes to handle the remaining amount
        amount = 0;
    }

    // Step 5: Check if the amount is fully distributed
    if (amount != 0) {
        cout << "Error: Cannot fully distribute the amount!" << endl;
    } else {
        cout << "Minimum number of notes required to fully distribute: " << totalNotes << endl;
    }

    return 0;
}
