#include <iostream>
#include <vector>
#include <string>

class Question {
public:
    std::string text;
    std::vector<std::string> options;
    int correctOption;

    Question(const std::string& t, const std::vector<std::string>& opts, int correct)
        : text(t), options(opts), correctOption(correct) {}

    bool isCorrect(int chosenOption) const {
        return chosenOption == correctOption;
    }
};

class Quiz {
public:
    std::vector<Question> questions;

    void addQuestion(const Question& q) {
        questions.push_back(q);
    }

    int runQuiz(const std::vector<int>& playerAnswers) const {
        int score = 0;
        for (size_t i = 0; i < std::min(questions.size(), playerAnswers.size()); ++i) {
            if (questions[i].isCorrect(playerAnswers[i])) {
                score++;
            }
        }
        return score;
    }
};

class Player {
public:
    std::string name;
    std::vector<int> answers;

    Player() {
        std::cout << "Enter your name: ";
        std::cin >> name;
    }

    void answerQuestion(int chosenOption) {
        answers.push_back(chosenOption);
    }
};

int main() {
    // Create questions
    Question q1("What is the capital of France?", {"Berlin", "Paris", "Madrid", "Rome"}, 1);
    Question q2("Which programming language is this program written in?", {"C++", "Java", "Python", "JavaScript"}, 0);
    Question q3("What is the largest mammal?", {"Elephant", "Blue Whale", "Giraffe", "Hippopotamus"}, 1);
    Question q4("In which year did the first moon landing occur?", {"1969", "1972", "1981", "1990"}, 0);
    Question q5("Which planet is known as the Red Planet?", {"Venus", "Mars", "Jupiter", "Saturn"}, 1);
    Question q6("Who wrote 'Romeo and Juliet'?", {"William Shakespeare", "Charles Dickens", "Jane Austen", "Mark Twain"}, 0);
    Question q7("What is the powerhouse of the cell?", {"Nucleus", "Mitochondria", "Endoplasmic Reticulum", "Golgi Apparatus"}, 1);
    Question q8("What is the square root of 144?", {"10", "12", "14", "16"}, 1);
    Question q9("Which ocean is the largest?", {"Atlantic Ocean", "Indian Ocean", "Southern Ocean", "Pacific Ocean"}, 3);
    Question q10("What is the speed of light?", {"299,792,458 meters per second", "150,000,000 meters per second", "200,000,000 meters per second", "250,000,000 meters per second"}, 0);

    // Create a quiz
    Quiz quiz;
    quiz.addQuestion(q1);
    quiz.addQuestion(q2);
    quiz.addQuestion(q3);
    quiz.addQuestion(q4);
    quiz.addQuestion(q5);
    quiz.addQuestion(q6);
    quiz.addQuestion(q7);
    quiz.addQuestion(q8);
    quiz.addQuestion(q9);
    quiz.addQuestion(q10);

    // Create a player
    Player player;

    // Player answers questions
    std::cout << "Welcome to the Quiz, " << player.name << "!\n";
    for (const Question& q : quiz.questions) {
        std::cout << q.text << "\n";
        for (size_t i = 0; i < q.options.size(); ++i) {
            std::cout << i + 1 << ". " << q.options[i] << "\n";
        }

        int chosenOption;
        std::cout << "Your answer: ";
        std::cin >> chosenOption;
        player.answerQuestion(chosenOption - 1); // Adjust for 0-based indexing

        if (q.isCorrect(chosenOption - 1)) {
            std::cout << "Correct!\n";
        } else {
            std::cout << "Incorrect!\n";
        }
    }

    // Calculate and display the score
    int score = quiz.runQuiz(player.answers);
    std::cout << "\n" << player.name << "'s score: " << score << " out of " << quiz.questions.size() << "\n";

    return 0;
}
