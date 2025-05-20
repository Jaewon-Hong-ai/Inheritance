#pragma once
class BaseArray {
private:
    int capacity; // ���� �Ҵ�� �޸� �뷮 
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

