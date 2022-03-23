#include <iostream>
#include<vector>
#include<string>

using namespace std;

class book {
private:
    string nameOfAuthor, bookTitle;
    int accessionNumber;
    bool flag;
public:
    book(int accessionNumber, string nameOfAuthor, string bookTitle, bool flag) {
        this->accessionNumber = accessionNumber;
        this->nameOfAuthor = nameOfAuthor;
        this->bookTitle = bookTitle;
        this->flag = flag;
    }

    void displayInform() {
        cout << bookTitle << ". Author: " << nameOfAuthor << endl;
    }

    string getAuthor() {
        return nameOfAuthor;
    }

    string getTitle() {
        return bookTitle;
    }

    int getNum() {
        return accessionNumber;
    }
    
    void addNumber() {
        accessionNumber++;
    }

    void decreaseNumber() {
        accessionNumber--;
    }

};

vector<book> b;

void displayAll() {
    system("cls");
    for (int i = 0; i < b.size(); i++) {
        b[i].displayInform();
    }
}

void addNewBook() {
    system("cls");
    cout << "-------------add new book------------" << endl;
    int accessionNumber;
    string nameOfAuthor, bookTitle;
    bool flag = true;
    cin >> accessionNumber;
    cin.ignore();
    getline(cin, nameOfAuthor);
    getline(cin, bookTitle);
    cin >> flag;
    book newBook(accessionNumber, nameOfAuthor, bookTitle, flag);
    b.push_back(newBook);
}

bool isExist(string title) {
    for (int i = 0; i < b.size(); i++)
        if (b[i].getTitle() == title) return true;
    return false;
}

void addBook() {
    system("cls");
    cout << "Enter book title: ";
    cin.ignore();
    string title;
    getline(cin, title);
    if (isExist(title)) {
        for (int i = 0; i < b.size(); i++)
            if (b[i].getTitle() == title) b[i].addNumber();
    }
    else addNewBook();
}

void displayBookOfAuthor() {
    system("cls");
    string author;
    cout << "Enterd name of author: ";
    cin.ignore();
    getline(cin, author);
    for (int i = 0; i < b.size(); i++) {
        if (b[i].getAuthor() == author)
            cout << b[i].getTitle() << endl;
    }
}

void numberOfTitle() {
    system("cls");
    cout << "Enter title of book: ";
    cin.ignore();
    string title;
    getline(cin, title);
    for (int i = 0; i < b.size(); i++)
        if (b[i].getTitle() == title) cout << b[i].getNum() << endl;
}

void total() {
    system("cls");
    int s = 0;
    for (int i = 0; i < b.size(); i++) s += b[i].getNum();
    cout << "Number of books: " << s << endl;
}

void issueBook() {
    system("cls");
    cout << "Enter title of book: ";
    cin.ignore();
    string title;
    getline(cin, title);
    for (int i = 0; i < b.size(); i++)
        if (b[i].getTitle() == title) b[i].decreaseNumber();
}

void callMenu() {
    int choose = 0;
    do {
        system("cls");
        cout << "1 -Display book information \n"
            << "2 -Add a new book \n"
            << "3 -Display all the books in the library of a particular author \n"
            << "4 -Display the number of books of a particular title \n"
            << "5 -Display the total number of books in the library \n"
            << "6 -Issue a book \n"
            << "7 -Exit \n";
        cout << "Choose a number: ";
        cin >> choose;

        switch (choose) {
            case 1: displayAll();
                break;
            case 2:addNewBook();
                break;
            case 3: displayBookOfAuthor();
                break;
            case 4: numberOfTitle();
                break;
            case 5: total();
                break;
            case 6: issueBook();
                break;
        }
        char n;
        cout << "Enter to back!" << endl;
        cin.ignore();
        n = getchar();
    } while (choose != 7);
}

int main()
{

    callMenu();

    return 0;
}