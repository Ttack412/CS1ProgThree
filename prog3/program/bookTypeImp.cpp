//Tyler Tackett
//Formal Program 3
//Dec. 5, 2019

//In this file all the functions are defined
//get functions get the variables value
//set functions set the variables value
//search functions compare the value of the class's variable to an inputted value

#include <iostream> 
#include <string>
#include "bookType.h"

using namespace std;

//Prints all the variables
void bookType::print() const
{
    cout << "The Book Title is: " << bookTitle << 
    ". The number of authors is " << authorNum << ". Thier name(s) are ";

    if(authorNum == "4")
    {
        cout << firstAuthorName << ", " << secondAuthorName << ", " << thirdAuthorName << " and " << fourthAuthorName;
    }
    else if(authorNum == "3")
    {
        cout << firstAuthorName << ", " << secondAuthorName << " and " << thirdAuthorName;
    }
    else if(authorNum == "2")
    {
        cout << firstAuthorName << " and " << secondAuthorName;
    }
    else if(authorNum == "1")
    {
        cout << firstAuthorName;
    }
    else
    {
        cout << "unknown";
    }
    

    cout << ". The publisher is " << publisherName << ". The book was published in the year " << yearBookPublished 
        << ". We have " << stockCopies << " copies of the book. Each copy is priced at " << bookPrice << ". The ISBM is " << bookISBM << "." << endl << endl;
}

std::string bookType::getFirstAuthorName() const
{
    return firstAuthorName;
}

std::string bookType::getSecondAuthorName() const
{
    return secondAuthorName;
}

std::string bookType::getThirdAuthorName() const
{
    return thirdAuthorName;
}

std::string bookType::getfourthAuthorName() const
{
    return fourthAuthorName;
}

string bookType::getAuthorNum() const
{
    return authorNum;
}

void bookType::setFirstAuthorName(std::string firstName)
{
    firstAuthorName = firstName;
}

void bookType::setSecondAuthorName(std::string secondName)
{
    secondAuthorName = secondName;
}

void bookType::setThirdAuthorName(std::string thirdName)
{
    thirdAuthorName = thirdName;
}

void bookType::setFourthAuthorName(std::string fourthName)
{
    fourthAuthorName = fourthName;
}

void bookType::setAuthorNum(string author)
{ 
    authorNum = author;
}

bool bookType::searchAuthor(std::string name)
{
    if((firstAuthorName == name)||(secondAuthorName == name)||(thirdAuthorName == name)||(fourthAuthorName == name)) 
    {
        found = true;
    }
    else
    {
        found = false;
    }
    
    return found;
}


std::string bookType::getPublisherName() const
{
    return publisherName;
}

void bookType::setPublisherName(std::string publisher)
{
    publisherName = publisher;
}

bool bookType::searchPublisher(std::string publisher)
{
    if(publisherName == publisher)
    {
        found = true;
    }
    else
    {
        found = false;
    }

    return found;
}

std::string bookType::getTitle() const
{
    return bookTitle;
}

void bookType::setTitle(std::string title)
{
    bookTitle = title;
}

bool bookType::searchTitle(std::string title)
{
    if(bookTitle == title)
    {
        found = true;
    }
    else
    {
        found = false;
    }

    return found;
}


string bookType::getCopies() const
{
    return stockCopies;
}

void bookType::setCopies(string copies)
{
    stockCopies = copies;
}

string bookType::getYearPublished() const
{
    return yearBookPublished;
}

void bookType::setYearPublished(string year)
{
    yearBookPublished = year;
}

bool bookType::searchYearPublished(string year)
{
    if(yearBookPublished == year)
    {
        found = true;
    }
    else
    {
        found = false;
    }

    return found;
}

string bookType::getISBM() const
{
    return bookISBM;
}

void bookType::setISBM(string ISBM)
{
    bookISBM = ISBM;
}

bool bookType::searchISBM(string ISBM)
{
    if(bookISBM == ISBM)
    {
        found = true;
    }
    else
    {
        found = false;
    }

    return found;
}

string bookType::getPrice() const
{
    return bookPrice;
}

void bookType::setPrice(string price)
{
    bookPrice = price;
}

bool bookType::searchPrice(string price)
{
    if(bookPrice == price)
    {
        found = true;    }
    else
    {
        found = false;
    }

    return found;
}

//connects the class's variables to the constructors values
bookType::bookType(string author, string ISBM, string copies, string year, 
                string price, string title, string publisher, string firstName, string secondName, string thirdName, string fourthName)
{
    authorNum = author;
    bookISBM = ISBM;
    stockCopies = copies;
    yearBookPublished = year;
    bookPrice = price;
    bookTitle = title; 
    publisherName = publisher; 
    firstAuthorName = firstName; 
    secondAuthorName = secondName; 
    thirdAuthorName = thirdName; 
    fourthAuthorName = fourthName; 

}