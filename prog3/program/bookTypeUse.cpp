//Tyler Tackett
//Formal Program 3
//Dec. 5, 2019

//In this file objects of bookType are instantiated.
//Then their functions are tested and their variables are assigned values.

#include <iostream> 
#include <fstream>
#include <string>
#include "bookType.h"

using namespace std;

int main()
{
    ifstream inData;
    inData.open("data.txt");
    bookType myBooks[5];

    bool found;
    string line;
    
    //Checks to see if information can be read from the file
    if(inData)
    {
        //the loop runs 5 times in order to give all bookTypes their values
        for(int i = 0; i < 5; i++)
        {
            //getLine reads a line from the file and assings it to line
            //a member funcion is then used to assing line to a member variable
            //this process is repeated throughout the program
            getline(inData, line);
            myBooks[i].setAuthorNum(line);

            if("1" == myBooks[i].getAuthorNum())
            {
                getline(inData, line);
                myBooks[i].setFirstAuthorName(line);
            }
            else if("2" == myBooks[i].getAuthorNum())
            {
                getline(inData, line);
                myBooks[i].setFirstAuthorName(line);

                getline(inData, line);
                myBooks[i].setSecondAuthorName(line);
            }
            else if("3" == myBooks[i].getAuthorNum())
            {
                getline(inData, line);
                myBooks[i].setFirstAuthorName(line);

                getline(inData, line);
                myBooks[i].setSecondAuthorName(line);

                getline(inData, line);
                myBooks[i].setThirdAuthorName(line);
            }
            else if("4" == myBooks[i].getAuthorNum())
            {
                getline(inData, line);
                myBooks[i].setFirstAuthorName(line);

                getline(inData, line);
                myBooks[i].setSecondAuthorName(line);

                getline(inData, line);
                myBooks[i].setThirdAuthorName(line);
                
                getline(inData, line);
                myBooks[i].setFourthAuthorName(line);
            }
            else
            {
            
            }
                getline(inData, line);
                myBooks[i].setTitle(line);

                getline(inData, line);
                myBooks[i].setISBM(line);

                getline(inData, line);
                myBooks[i].setPublisherName(line);

                getline(inData, line);
                myBooks[i].setYearPublished(line);

                getline(inData, line);
                myBooks[i].setPrice(line);

                getline(inData, line);
                myBooks[i].setCopies(line);
        }
    }

    //prints all the member variables for all the bookType objects
    for (int i = 0; i < 5; i++)
    {
        myBooks[i].print();
    }
    
    //searches the bookType array for a matching ISBM
    for (int i = 0; i < 5; i++)
    {
        if(myBooks[i].searchISBM("22-99521-453-1"))
        {
            found = true;
            break;
        }
        else
        {
            found = false;
        }  
    }

    if(found == false)
    {
        cout << "ISBM not Found" << endl;
    }
    else
    {
        cout << "ISBM Found" << endl;
    }

    //searches the bookType array for a matching Author
    for (int i = 0; i < 5; i++)
    {
        if(myBooks[i].searchAuthor("Jimmy"))
        {
            found = true;
            break;
        }
        else
        {
            found = false;
        }  
    }

    if(found == false)
    {
        cout << "Author not Found" << endl;
    }
    else
    {
        cout << "Author Found" << endl;
    }

    //searches the bookType array for a matching Publisher
    for (int i = 0; i < 5; i++)
    {
        if(myBooks[i].searchPublisher("ABC"))
        {
            found = true;
            break;
        }
        else
        {
            found = false;
        }  
    }

    if(found == false)
    {
        cout << "Publisher not Found" << endl;
    }
    else
    {
        cout << "Publisher Found" << endl;
    }

    //searches the bookType array for a matching Title
    for (int i = 0; i < 5; i++)
    {
        if(myBooks[i].searchTitle("Harry Johnand The Magician"))
        {
            found = true;
            break;
        }
        else
        {
            found = false;
        }  
    }

    if(found == false)
    {
        cout << "Title not Found" << endl;
    }
    else
    {
        cout << "Title Found" << endl;
    }

    //searches the bookType array for a matching Year Published
    for (int i = 0; i < 5; i++)
    {
        if(myBooks[i].searchYearPublished("2"))
        {
            found = true;
            break;
        }
        else
        {
            found = false;
        }  
    }

    if(found == false)
    {
        cout << "Year Published not Found" << endl;
    }
    else
    {
        cout << "Year Published Found" << endl;
    }

    //searches the bookType array for a matching Price
    for (int i = 0; i < 5; i++)
    {
        if(myBooks[i].searchPrice("52.50"))
        {
            found = true;
            break;
        }
        else
        {
            found = false;
        }  
    }

    if(found == false)
    {
        cout << "Price not Found" << endl;
    }
    else
    {
        cout << "Price Found" << endl;
    }
    
    return 0;
}