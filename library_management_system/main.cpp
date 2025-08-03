#include "Library.hpp"
#include <iostream>

using namespace std;

double libraryBudget = 5000;

int main() {
  Library myLibrary;
  cout << "Current library budget is: " << libraryBudget << "\n";
  myLibrary.addBook("The Great Gatsby", 300);
  myLibrary.addBook("1984", 400);
  myLibrary.addBook("To Kill a Mockingbird", 350);
  myLibrary.listBooks();
  myLibrary.reserveBook("1984");
  myLibrary.borrowBook("To Kill a Mockingbird");
  cout << "The total number of borrowed books is: " << myLibrary.getTotalBorrowedBooks() << "\n";
  return 0;
}