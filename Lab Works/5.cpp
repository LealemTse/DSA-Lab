// Write a program that reads a full sentence from the user (assume the sentence has no
//spaces if you want to use cin >> variable as covered in early topics), appends an
//exclamation mark to it, and then prints the updated sentence

#include<iostream>
#include<string> 

using namespace std;
int main(){
    string question;
    cout<<"Ask a Question(Use nospace or Calmmel lettering):";
    cin>>question;    
    
    question+="?";
    cout<<"Your Question:" <<question <<endl;

    return 0; 
}