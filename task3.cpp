//#include <iostream>
//#include <limits>
//#include <cstring>
//
//using namespace std;
//
//
//struct Invoice {
//    char number[10];
//    char description[255];
//    int amount;
//};
//
//const int maxInvoices = 100;
//int invoiceIndex = 0;
//
//
//void addInvoice(Invoice* invoices) {
//    Invoice invoice{};
//    cout << "Enter number: ";
//    cin.getline(invoice.number, sizeof(invoice.number));
//    cout << "Enter description: ";
//    cin.getline(invoice.description, sizeof(invoice.description));
//    cout << "Enter amount: ";
//    cin >> invoice.amount;
//
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');
//
//    invoices[invoiceIndex] = invoice;
//    invoiceIndex++;
//
//    cout << "The Invoice has been added" << endl;
//}
//
//
//void removeInvoice(Invoice* invoices) {
//    if (invoiceIndex == 0) {
//        cout << "Invoices list is empty\n";
//        return;
//    }
//
//    int index;
//    cout << "Enter invoice number (from 1 to " << invoiceIndex << "): ";
//    cin >> index;
//
//    if (index < 1 || index > invoiceIndex) {
//        cout << "Incorrect invoice number.\n";
//        return;
//    }
//
//    for (int i = index - 1; i < invoiceIndex - 1; ++i) {
//        invoices[i] = invoices[i + 1];
//    }
//
//    invoiceIndex--;
//
//    cout << "Invoice has been removed.\n";
//}
//
//void printInvoices(const Invoice* invoices) {
//    if (invoiceIndex == 0) {
//        cout << "The invoices list is empty\n";
//        return;
//    }
//
//    cout << "Invoices list:\n";
//    for (int i = 0; i < invoiceIndex; ++i) {
//        cout << i + 1 << ". " << "Number: " << invoices[i].number << ", Description: " << invoices[i].description
//             << ", Amount: " << invoices[i].amount << "\n";
//    }
//}
//
//void getTotalInvoicesAmount(Invoice* invoices) {
//    char number[10];
//
//    cout << "Enter invoice number:";
//    cin >> number;
//
//    int total = 0;
//
//    for (int i = 0; i < invoiceIndex; ++i) {
//        if (strcmp(invoices[i].number, number) == 0) {
//            total += invoices[i].amount;
//        }
//    }
//
//    total == 0 ? cout << "The number " << number << " not fount" << endl : cout << "Total amount for number " << number << " is " << total << endl;
//}
//
//int main() {
//
//    Invoice invoices[maxInvoices];
//
//    char choice;
//
//    do {
//        cout << "\nMenu:\n";
//        cout << "1. Add invoice\n";
//        cout << "2. Remove invoices\n";
//        cout << "3. Print invoices\n";
//        cout << "4. Get invoice total amount\n";
//        cout << "5. Exit\n";
//        cout << "Choose action (1-5): ";
//        cin >> choice;
//
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//
//        switch (choice) {
//            case '1':
//                addInvoice(invoices);
//                break;
//            case '2':
//                removeInvoice(invoices);
//                break;
//            case '3':
//                printInvoices(invoices);
//                break;
//            case '4':
//                getTotalInvoicesAmount(invoices);
//                break;
//            case '5':
//                cout << "Exit.\n";
//                break;
//            default:
//                cout << "Incorrect enter. Try again!\n";
//        }
//    } while (choice != '5');
//
//    return 0;
//}