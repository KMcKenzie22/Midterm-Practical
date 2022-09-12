#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

vector <string> qQuestions{ "What is the best web browser?", "What's the largest country in the world?",
    "Who lives in a pineapple under the sea?", "How many licks does it take to get to the center of a tootise pop?",
    "How many days are in a year?", "Should you play League of Legends?",
    "DK?", "Apple or Android?",
    "Where's the lamb...", "How many stars are on the American flag?", };
//Vector of questions

vector <string> qAnswers{ "A. Google Chrome\nB. Fire Fox\nC. OperaGX\nD. Safari", 
"A. America\nB. Asia\nC. Russia\nD. Europe",
"A. Spiderman\nB. Spongebob Squarepants\nC. Timmy Turner\nD. George Washington", 
"A. 15\nB. 3\nC. The world may never know\nD. 100", 
"A. 12\nB. 8760\nC. 365\nD. 213", 
"A. Yes\nB. I already do.\nC. What's league of legends?\nD. No", 
"A. Donkey Kong\nB. Doofus Kangaroo\nC. Dorling Kindersley\nD. Don't know", 
"A. Apple\nB. Andorid\nC. I don't have a phone\nD. Noika",
"A. HEAD\nB. RIB\nC. KID\nD. SAUCE", 
"A. 1\nB. 51\nC. 50\nD. 100"};
//Vector of answers

vector <string> qCorrect{"C", "C", "B", "C", "C", "D", "A", "D", "D", "C"};
//Correct answers for each question

int qQuestionAmount;
//# of questions selected by user

string qAnswer;
//Answer input for each question from user

vector <int> qQuestionChecker;
//Vector to check if question was used before

bool qAnswerChecker = true;
//Input validater

int qScore;
//Correct answer amount

int i;
//Iterator

void qQuizMachine()
{   
    int qQuestionPicker = rand() % 10;
    qQuestionChecker.push_back(qQuestionPicker);
    if (qQuestionPicker == qQuestionChecker[qQuestionPicker])
    {
        qQuestionPicker = rand() % 10;
    }
    system("cls");
    cout << "Question " << i << endl;
    cout << qQuestions[qQuestionPicker] << endl;
    cout << qAnswers[qQuestionPicker] << endl;
    cin >> qAnswer;
    while (qAnswerChecker)
    {
        if (qAnswer == "A" || qAnswer == "B" || qAnswer == "C" || qAnswer == "D")
        {
            qAnswerChecker = false;
            break;
        }
        else
        {
            qAnswerChecker = true;
        }
            cin.clear();
            cout << "Invalid Answer. Try Again" << endl;
            system("pause");
            system("cls");
            cout << "Question " << i << endl;
            cout << qQuestions[qQuestionPicker] << endl;
            cout << qAnswers[qQuestionPicker] << endl;
            cin >> qAnswer;
    }
    if (qAnswer == qCorrect[qQuestionPicker])
    {
        qScore++;
    }
}

int main()
{   
    srand(time(NULL));
    cout << "Time for quiz.\nMake sure to answer in caps. Answers are case sensitive!" << endl;
        system("pause");
        system("cls");
        cout << "How many questions?\nSelect a number 1-10\n";
        cin >> qQuestionAmount;
        while (cin.fail())
        {
            system("cls");
            cout << "That's not a number! Pick a number bewtween 1 and 10!\n";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cin >> qQuestionAmount;
        }
        while (qQuestionAmount > 10)
        {
            system("cls");
            cout << "I don't have that many questions! Pick a number between 1 and 10.\n";
            cin.clear();
            cin >> qQuestionAmount;
        }
        switch (qQuestionAmount)
        {
        case 1:
            for (i = 1; i < 2; i++)
            {
                qQuizMachine();
            }
            break;
        case 2:
            for (i = 1; i < 3; i++)
            {
                qQuizMachine();
            }
            break;
        case 3:
            for (i = 1; i < 4; i++)
            {
                qQuizMachine();
            }
            break;
        case 4:
            for (i = 1; i < 5; i++)
            {
                qQuizMachine();
            }
            break;
        case 5:
            for (i = 1; i < 6; i++)
            {
                qQuizMachine();
            }
            break;
        case 6:
            for (i = 1; i < 7; i++)
            {
                qQuizMachine();
            }
            break;
        case 7:
            for (i = 1; i < 8; i++)
            {
                qQuizMachine();
            }
            break;
        case 8:
            for (i = 1; i < 9; i++)
            {
                qQuizMachine();
            }
            break;
        case 9:
            for (i = 1; i < 10; i++)
            {
                qQuizMachine();
            }
            break;
        case 10:
            for (i = 1; i < 11; i++)
            {
                qQuizMachine();
            }
            break;
        }
        system("cls");
        cout << "Test Complete!" << endl;
        cout << "Your score is " << qScore << " out of " << qQuestionAmount << endl;
        system("pause");
}