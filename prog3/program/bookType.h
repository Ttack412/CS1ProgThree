//Tyler Tackett
//Formal Program 3
//Dec. 5, 2019

//In this header file the class is created 

#include <string>

using namespace std;

//This creates the bookType Class
class bookType
{
    //function protoypes
    public:

        void print() const;

        string getFirstAuthorName()  const;
        string getSecondAuthorName() const;
        string getThirdAuthorName() const;
        string getfourthAuthorName() const;

        void setFirstAuthorName(string name);
        void setSecondAuthorName(string name);
        void setThirdAuthorName(string name);
        void setFourthAuthorName(string name);

        string getAuthorNum() const;
        void setAuthorNum(string num);
        bool searchAuthor(string name);

        string getPublisherName() const;
        void setPublisherName(string name);
        bool searchPublisher(string name);

        string getTitle() const;
        void setTitle(string title);
        bool searchTitle(string title);

        string getCopies() const;
        void setCopies(string copies);

        string getYearPublished() const;
        void setYearPublished(string year);
        bool searchYearPublished(string year);

        string getISBM() const;
        void setISBM(string num);
        bool searchISBM(string num);

        string getPrice() const;
        void setPrice(string num);
        bool searchPrice(string num);

        //a custom constructor
        bookType(string author = "", string ISBM = "", string copies = "", string year = "", 
                    string price = "", string title = "", string publishers = "", 
                    string firstName = "", string secondName = "", string thirdName = "", string fourthName = "");
    
    //function variables
    private:

        string authorNum;
        string bookISBM;
        string stockCopies;
        string yearBookPublished;
        string bookPrice;
        string bookTitle;
        string publisherName;
        string firstAuthorName;
        string secondAuthorName;
        string thirdAuthorName;
        string fourthAuthorName;
        bool found;
};