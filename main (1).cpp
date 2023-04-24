/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Question {
private:
    int questionID;
    string text;
    vector<string> options;
    string answer;

public:
    Question(int id, string t, vector<string> opt, string ans) {
        questionID = id;
        text = t;
        options = opt;
        answer = ans;
    }

    int getQuestionID() {
        return questionID;
    }

    string getText() {
        return text;
    }

    vector<string> getOptions() {
        return options;
    }

    string getAnswer() {
        return answer;
    }
};

class Quiz {
private:
    int quizID;
    string title;
    vector<Question> questions;

public:
    Quiz(int id, string t, vector<Question> ques) {
        quizID = id;
        title = t;
        questions = ques;
    }

    int getQuizID() {
        return quizID;
    }

    string getTitle() {
        return title;
    }

    vector<Question> getQuestions() {
        return questions;
    }
};

class QuestionBank {
private:
    int bankID;
    vector<Question> questions;

public:
    QuestionBank(int id, vector<Question> ques) {
        bankID = id;
        questions = ques;
    }

    int getBankID() {
        return bankID;
    }

    vector<Question> getQuestions() {
        return questions;
    }
};
