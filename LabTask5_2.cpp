#include <iostream>
#include <queue>
#include <string>
 
using namespace std;
 
void enqueue(queue<char>& q, char c) {
    q.push(c);
}
 
char dequeue(queue<char>& q) {
    char front = q.front();
    q.pop();
    return front;
}
 
bool isEmpty(const queue<char>& q) {
    return q.empty();
}
 
string reverseString(const string& input) {
    queue<char> charQueue;
    for (char c : input) {
        enqueue(charQueue, c);
    }
 
    string reversed;
    while (!isEmpty(charQueue)) {
        reversed = dequeue(charQueue) + reversed;
    }
 
    return reversed;
}
 
int main() {
    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput);
 
    string reversedString = reverseString(userInput);
 
    cout << "Reversed string: " << reversedString << endl;
 
    return 0;
}