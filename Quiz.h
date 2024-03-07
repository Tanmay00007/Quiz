#include <iostream>
#include <string>
#include <vector>
#include "Question.cpp"
using namespace std;

class Quiz{
    public:
    string topic;
    vector <Question> questions;
    void setType(string t1){
        topic=t1;
    }

};