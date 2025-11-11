#include <iostream>
using namespace std;


void Similarity(char word1[], char word2[], char common[], int &commonLength) {
    int index1 = 0, index2 = 0, k = 0;

     while (word1[index1] != '\0') {
        index2 = 0;
         while (word2[index2] != '\0')
         {
            if (word1[index1] == word2[index2])
                {
                bool alreadyExists = false;
                for (int i = 0; i < k; i++) {
                    if (common[i] == word1[index1])
                     {
                        alreadyExists = true;
                        break;
                    }
                }

                if (!alreadyExists) {
                    common[k++] = word1[index1];
                }
                break;
            }
            index2++;
        }
        index1++;
    }

        common[k] = '\0';
        commonLength = k;
}

int main() {

        char word1[100], word2[100];
        cout << "Enter the first word: ";
        cin >> word1;
        cout << "Enter the second word: ";
        cin >> word2;

    char common[100];
    int commonLength = 0;

      Similarity(word1, word2, common, commonLength);

    cout << "Common characters: " << common << endl;
    cout << "Length of similarity: " << commonLength << endl;

    return 0;
}
