#include <iostream>
#include <string>
#include "MyQueue.h"
using namespace std;

int main() {
    MyQueue mQ(100);
    int n;
    cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        mQ.enqueue(n); // 큐에 삽입 
    }
    cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() <<
        endl;
    cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
    while (mQ.length() != 0) {
        cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력 
    }
    cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
}