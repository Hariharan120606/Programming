#include <iostream>
#include <string>
using namespace std;

class CD {
    
public:
    CD() : price(0), stock(0) {}
    string title;
    string composer;
    string genre;
    float price;
    int stock;

    void input() {
        cout << "Enter CD Title: ";
        cin >> title;
        cout << "Enter Composer Name: ";
        cin >> composer;
        cout << "Enter Music Genre: ";
        cin >> genre;
        cout << "Enter Price: $";
        cin >> price;
        cout << "Enter Stock Available: ";
        cin >> stock;
    }

    void display() {
        cout << "\nCD Title: " << title << endl;
        cout << "Composer: " << composer << endl;
        cout << "Genre: " << genre << endl;
        cout << "Price: $" << price << endl;
        cout << "Stock Available: " << stock << endl;
    }

    void checkAvailability(int requiredStock) {
        if (stock >= requiredStock) {
            cout << "The requested copies are available.\n";
            cout << "Total Cost: $" << (price * requiredStock) << endl;
        } else {
            cout << "The requested copies are not in stock.\n";
        }
    }

    ~CD() {
        cout << "CD title '" << title << "' is deleted.\n";
    }
};

int main() {
    int n;
    cout << "Enter the number of CDs to manage: ";
    cin >> n;

    CD* cds = new CD[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for CD " << i + 1 << ":\n";
        cds[i].input();
    }

    string searchTitle, searchComposer;
    cout << "\nEnter the CD Title to search: ";
    cin >> searchTitle;
    cout << "Enter the Composer Name to search: ";
    cin >> searchComposer;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (cds[i].title == searchTitle && cds[i].composer == searchComposer) {
            found = true;
            cds[i].display();
            int requiredStock;
            cout << "\nEnter the number of CDs required: ";
            cin >> requiredStock;
            cds[i].checkAvailability(requiredStock);
            break;
        }
    }

    if (!found) {
        cout << "CD not found in the inventory.\n";
    }

    delete[] cds;

    return 0;
}

