#pragma once
class BaseArray {
private:
    int capacity; // 동적 할당된 메모리 용량 
    int* mem;
protected:
    BaseArray(int capacity = 100) {
        this->capacity = capacity; mem = new int[capacity];
    }
    ~BaseArray();
    void put(int index, int val);
    int get(int index);
    int getCapacity();
};

