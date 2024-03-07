#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Question.cpp"
#include "Quiz.h"
using namespace std;

class Admin{
    string type,question,opt;
    public:
    void addQuiz(){
        cout<<"Enter the type of Quiz you want to add"<<endl;
        cin>>type;
        Quiz Q1;
        Q1.setType(type);
        cout<<"Enter the Questions and options "<<endl;
         Question q1;
        for(int i=0;i<5;i++){
            cout<<"Enter "<<i+1<<" Question"<<endl;
            cin>>question;
            q1.setQuestion(question);
             ofstream file;
        file.open("Questions.txt",ios::app);
        ifstream input("Questions.txt");
        file<<question<<endl;
            for(int j=0;j<3;j++){
                cin>>opt;
                q1.options.push_back(q1.options[j] = opt);
            }
        }



    }
};