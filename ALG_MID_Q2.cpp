#include <iostream>

using namespace std;

int compareStrings(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) return -1;
        if (str1[i] > str2[i]) return 1;
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') return 0;
    if (str1[i] == '\0') return -1;
    return 1;
}

int binarySearch(char items[][50], int left, int right, const char* target) {
    while (left <= right) {
        int mid = left + (right - left)/2;

        int comparison = compareStrings(items[mid], target);


        if (comparison == 0) {
            return mid;
        }

        if (comparison > 0) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return -1;
}

int main() {
    int n;

     cout << "Enter number of items in the refrigerator: ";
     cin >> n;

     cin.ignore();

     char items[n][50];

     cout << "Enter the items: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << "Item " << i + 1 << ": ";
        cin.getline(items[i], 50);
    }

    char target[50];
     cout << "Enter the item to search for: ";
      cin.getline(target, 50);

    int result = binarySearch(items, 0, n - 1, target);

    if (result != -1) {
        cout << "Item found at position " << result + 1 << "."<<endl;
    } else {
        cout << "Item not found in the refrigerator."<<endl;
    }

    return 0;
}
