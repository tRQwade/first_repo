#include "Library.hpp"
#include "removeElement.hpp"
#include <iostream>

using namespace std;

int Library::totalBorrowedBooks = 0;

Library::Library() : reservedCount(0) {}

void Library::listBooks(){
  for(string title: bookList){
    cout << title << "\n";
  }
}

void Library::addBook(string title, double bookCost){
  if(bookList.size() < 100) {
    bookList.push_back(title); 
    libraryBudget -= bookCost;
  }else{
    cout << "Library is full!\n";
  }
}

bool Library::borrowBook(string title){
 for(string book : bookList) {
  if(book == title){
    removeElement(bookList, title);
    cout << "Book borrowed!\n";
    totalBorrowedBooks++;
    return true;
  }
}
cout << "Book not found!\n";
return false;
}

int Library::getTotalBorrowedBooks() {
  return totalBorrowedBooks;
}

void Library::reserveBook(string title)const{
if (find(bookList.begin(), bookList.end(), title) != bookList.end() &&
    find(reservedBooks.begin(), reservedBooks.end(), title) == reservedBooks.end()) {
  reservedBooks.push_back(title);
  reservedCount++;
  cout << "Book reserved: " << title << "\n";
  cout << "Reserved book count: " << reservedCount << "\n";
} else {
  cout << "Book not reserved!\n";
}
}
