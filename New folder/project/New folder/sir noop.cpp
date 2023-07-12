#include<iostream> 
using namespace std; 
/////////////////////////////// 
struct book 
{ 
    int id; 
    char Name[50]; 
    char Author_Name[50]; 
    char subject[50]; 
    int Number_of_pages; 
}; 
/////////////////////////////// 
class Book 
{
    private: 
    int id; 
    string Name; 
    string Author_Name; 
    string subject; 
    int Number_of_pages; 
    public: 
        void BookInfoShow() 
        { 
            cout<<"ID of Book = "<<id<<endl; 
            cout<<"Name of Book = "<<Name<<endl; 
            cout<<"Author Name of Book = "<<Author_Name<<endl; 
            cout<<"Subject of Book = "<<subject<<endl; 
            cout<<"Number of pages = "<<Number_of_pages<<endl; 
        } 
        void BookInfoEnter() 
        { 
            cout<<"Enter Book ID = "; 
            cin>>id; 
            cout<<"Enter Book Name = "; 
            cin>>Name; 
            cout<<"Enter Book Author Name = "; 
            cin>>Author_Name; 
            cout<<"Enter Book subject = "; 
            cin>>subject; 
            cout<<"Enter Number of pages of Book = "; 
            cin>>Number_of_pages; 
        }    
}; 
/////////////////////////////// 
void bookShow(book a1) 
    { 
            cout<<"ID of Book = "<<a1.id<<endl; 
            cout<<"Name of Book = "<<a1.Name<<endl; 
            cout<<"Author Name of Book = "<<a1.Author_Name<<endl; 
            cout<<"Subject of Book = "<<a1.subject<<endl; 
            cout<<"Number of pages = "<<a1.Number_of_pages<<endl; 
    } 
////////////////////////////////// 
    void bookEnter(book a1) 
        { 
            cout<<"Enter Book ID = "; 
            cin>>a1.id; 
            cout<<"Enter Book Name = "; 
            cin>>a1.Name; 
            cout<<"Enter Book Author Name = "; 
            cin>>a1.Author_Name; 
            cout<<"Enter Book subject = "; 
            cin>>a1.subject; 
            cout<<"Enter Number of pages of Book = "; 
            cin>>a1.Number_of_pages; 
        }    
//////////////////////////////// 
int main() 
{ 
    struct book b1,b2; 
    bookEnter(b1); 
    bookShow(b1); 
    return 0; 
}
