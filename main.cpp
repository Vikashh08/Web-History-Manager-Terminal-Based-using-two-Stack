#include <iostream>
#include <stack>
#include <string>

using namespace std;

class BrowserHistory {
private:
    stack<string> backHistory;
    stack<string> forwardHistory;
    string currentUrl;

public:
    BrowserHistory() {
        currentUrl = "homepage";
        cout << "Browser started at: " << currentUrl << endl;
    }

    void visit(string url) {
        // Push current URL to back stack
        backHistory.push(currentUrl);
        // Set new current URL
        currentUrl = url;
        // Clear forward history because we visited a new page
        while (!forwardHistory.empty()) {
            forwardHistory.pop();
        }
        cout << "Visited: " << currentUrl << endl;
    }

    void back() {
        if (backHistory.empty()) {
            cout << "No history to go back to!" << endl;
            return;
        }
        // Save current URL to forward stack
        forwardHistory.push(currentUrl);
        // Get URL from back stack
        currentUrl = backHistory.top();
        backHistory.pop();
        cout << "Went back to: " << currentUrl << endl;
    }

    void forward() {
        if (forwardHistory.empty()) {
            cout << "No forward history available!" << endl;
            return;
        }
        // Save current URL to back stack
        backHistory.push(currentUrl);
        // Get URL from forward stack
        currentUrl = forwardHistory.top();
        forwardHistory.pop();
        cout << "Went forward to: " << currentUrl << endl;
    }

    void clearHistory() {
        while (!backHistory.empty()) {
            backHistory.pop();
        }
        while (!forwardHistory.empty()) {
            forwardHistory.pop();
        }
        cout << "All history cleared! Remaining on: " << currentUrl << endl;
    }

    void showStatus() {
        cout << "-----------------------------------" << endl;
        cout << "Current Page: " << currentUrl << endl;
        cout << "Back History Size: " << backHistory.size() << endl;
        cout << "Forward History Size: " << forwardHistory.size() << endl;
        cout << "-----------------------------------" << endl;
    }
};

int main() {
    BrowserHistory myBrowser;
    int choice;
    string url;

    do {
        cout << "\n--- Browser History Manager ---" << endl;
        cout << "1. Visit New Page" << endl;
        cout << "2. Go Back" << endl;
        cout << "3. Go Forward" << endl;
        cout << "4. Show Status" << endl;
        cout << "5. Clear History" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter URL: ";
                cin >> url;
                myBrowser.visit(url);
                break;
            case 2:
                myBrowser.back();
                break;
            case 3:
                myBrowser.forward();
                break;
            case 4:
                myBrowser.showStatus();
                break;
            case 5:
                myBrowser.clearHistory();
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
