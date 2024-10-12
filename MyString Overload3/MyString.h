#pragma once
#include <iostream>

class MyString {
private:
    char* str;
    int length;
    static int objectCount;

public:
    MyString();
    MyString(int size);
    MyString(const char* initStr);
    MyString(const MyString& obj);
    ~MyString();

    void Input();
    void Output() const;

    void MyStrcpy(const MyString& obj);
    bool MyStrStr(const char* substr) const;
    int MyChr(char c) const;
    int MyStrLen() const;
    void MyStrCat(const MyString& b);
    void MyDelChr(char c);
    int MyStrCmp(const MyString& b) const;

    MyString& operator=(const MyString& obj);
    MyString operator+(const MyString& b) const;
    char& operator[](int index);
    MyString& operator++();
    MyString operator++(int);
    void operator()();
    MyString operator+(char c) const;

    static int getObjectCount();

    const char* getStr() const;
    int getLength() const;
    void setStr(const char* newStr);
    void setLength(int newLength);

    friend ostream& operator<<(std::ostream& out, const MyString& obj);
    friend istream& operator>>(std::istream& in, MyString& obj);
};
