﻿#include <windows.h>
#include "AdressBook.h"
#include "Person.h"
#include "Educator.h"
#include "Student.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    AdressBook book;
    book.addNote();
    book.show();
    book.toFile();
}
