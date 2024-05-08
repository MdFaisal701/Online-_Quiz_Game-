Introduction:
In this C++ code implements a simple console-based online quiz game. The game involves questions, a quiz container, and a player who answers questions to receive a final score. The code is structured using classes to represent different entities in the game: Question, Quiz, and Player.

Classes:

Question Class:
The Question class represents an individual quiz question.

Properties include the question text, a list of answer options, and the index of the correct option.

It has a method isCorrect to check if a given option is correct.

Quiz Class:
	The Quiz class manages a collection of questions.
	It has a method addQuestion to add questions to the quiz.
	The runQuiz method calculates the player's score based on their answers.

Player Class:
	The Player class represents a participant in the quiz.
	It includes the player's name, a container for their answers, and a method answerQuestion to record their responses.

	Main Function:
Question Initialization:
	The main function initializes a set of quiz questions with different options and correct answers.
Quiz Creation:
	A Quiz object is created, and questions are added to it using the addQuestion method.
Player Initialization:
	A Player object is created with a specified name.
Quiz Interaction:
	The player is welcomed to the quiz, and a loop iterates through each question.
	For each question, the options are displayed, the player provides an answer, and feedback is given based on correctness.
Score Calculation:
	After answering all questions, the runQuiz method is used to calculate the player's score.
Result Display:
	The final score, along with the total number of questions, is displayed to the player.

	Key Concepts:
Object-Oriented Programming (OOP):
	The code uses OOP principles with classes to model real-world entities (questions, quizzes, players) and their interactions.
Data Abstraction:
	Classes encapsulate data (question properties, player details) and behavior (checking correctness, calculating scores) for a clean and modular design.
Looping and User Input:
	The program utilizes loops for repetitive tasks, like presenting questions, and takes user input for answers.
Conditional Statements:
	Conditional statements are used to provide feedback on the correctness of the player's answers.

	Conclusion:
In summary, the C++ code implements an interactive quiz game, showcasing fundamental concepts of OOP, data abstraction, and control flow. Players can engage in the quiz, receive feedback, and obtain a final score based on their answers. The code serves as a foundation for building more complex and feature-rich quiz applications
