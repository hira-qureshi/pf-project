#include<stdio.h>    // for normal input output  (scanf,  printf)
#include<string.h>   // for array (strings)
#include<windows.h>  // for  changing console colors system("COLOR 5F")
#include<mmsystem.h> // for multimedia functions in Windows PlaySound function
#include<conio.h>    // for clear screen ( system("cls") )
#include <time.h>    // used to record the start and end time for each question
#include<unistd.h>   // used for the sleep function
//program uses sound effects (sound.wav, count.wav, and congrats.wav)
void abc()    //play sound 
{
	PlaySound(TEXT("sound.wav"),NULL,SND_SYNC);
}
int main()
{
	// first page of the program
	const char* pptFilePath = "C:\\Users\\Dell\\Desktop\\project pf ka.ppsx"; // opens Ppt using the ShellExecute function from Windows API.
	ShellExecute(NULL, "open", pptFilePath, NULL, NULL, SW_SHOWNORMAL);
	
	char op; 
	system("COLOR 5F"); // for changing colour of background and font
	sleep(2);  // for stopping the output 
	printf("\n Are you ready to check your IQ Score?\n Press 'Y' for Yes\n Press 'N' for No  : ");
	fflush(stdin);  
	scanf("%c", &op);
	fflush(stdin);
	if(op=='Y'||op=='y')
	{
		char questions[][400] = {  // questions 
        "Q1: What is the quarter of two-third of nine-thousand?",
        "Q2: What number should come next in this sequence?\n      17-23-16-24-15-25-14-?",
        "Q3: Which word is the odd one?",
        "Q4: If THING turns into NIGHT. What does 75120 turn into?",
        "Q5: What day will it be tomorrow if Wednesday was three days ago?",
        "Q6: Which word would be the third(if you put them) in alphabetical order?",
        "Q7: Kate, Joanna and Natalie are three sisters. If the following statements are all true which of them is the youngest.\n    - Kate is the oldest.\n    - Natalie is not the oldest.\n    - Joanna is not the youngest.",
        "Q8: Here are two statements.\n    1- Some men are kings.               2- All kings have golden crowns.\n\n    and here are two conclusions\n    1- All men have golden crowns.       2- All kings are men.\n    Which of the following is the correct answer",
        "Q9: Finger is to hand as leaf to ?",
        "Q10: What is the number on the parking spot?\n\n       | 16 | 06 | 68 | 88 | Car | 98 |\n       |____|____|____|____|_____|____|",
        "Q11: If three cats catch three mice in three minutes, how many cats would be needed to catch 100 mice in 100 minutes?",
        "Q12: What comes once in a minute, twice in a moment, but never in a thousand years?",
        "Q13: If you have a bowl with six apples, and you take away four, how many apples do you have?",
        "Q14: Mary's father has five daughters: Nana, Nene, Nini, Nono... What is the name of the fifth daughter?",
        "Q15: How many months have 28 days?",
        "Q16: What is the cube of 4?",
        "Q17: Solve for y: 3y - 7 = 14.",
        "Q18: If a doctor gives you three pills, telling you to take one every half hour, how long would the pills last?",
        "Q19: How can you arrange three matches to form the number nine?",
        "Q20: What belongs to you but other people use it more than you do?"
    };

    char options[][4][50] = {  // options of all questions
        {"a. 2000", "b. 3000", "c. 1500", "d. 1000"},   
        {"a. 7", "b. 18", "c. 27", "d. 26"},                
        {"a. Index", "b. Glossary", "c. Book", "d. Chapter"},   
        {"a. 21057", "b. 21075", "c. 17052", "d. 70521"},
        {"a. Tuesday", "b. Saturday", "c. Monday", "d. Sunday"},
        {"a. Thread", "b. Thrice", "c. Thrill", "d. Thrive"},
        {"a. Joanna", "b. Kate", "c. Natalie", "d. Joanna and Natalie"},     
        {"a. Only conclusion 1", "b. Only conclusion 2", "c. Either 1 or 2", "d. Neither 1 nor 2"},  
        {"a. Twig", "b. Branch", "c. Tree", "d. Blossom"},  
        {"a. 87", "b. 80", "c. 69", "d. 90"}, //10
        {"a. 1", "b. 3", "c. 10", "d. 100"},   
		{"a. The letter 'M'", "b. The letter 'A'", "c. The letter 'T'", "d. The letter 'Q'"},  
		{"a. 6", "b. 2", "c. 4", "d. 0"}, 
		{"a. Nina", "b. Nunu", "c. Nono", "d. Mary"},
		{"a. 1", "b. 6", "c. 12", "d. All of 12 Months"}, 
		{"a. 16", "b. 64", "c. 128", "d. 256"}, 
		{"a. 7", "b. 5", "c. 8", "d. 6"},
		{"a. 1 hour", "b. 2 hours", "c. 3 hours", "d. 30 hours"}, 
		{"a. III", "b. IX", "c. VI", "d. V"},
		{"a. Money", "b. Time", "c. Name", "d. Reputation"} 
    };

	//  answers for each question
//                     1   2    3   4   5   6   7    8   9  10  11  12  13  14  15  16  17  18  19  20
	char answers[] = {'c', 'd','c','a','d','c','c','d','a','a','b','a','b','d','d','b','a','a','b','c'}; 

    int score = 0;  // Initialize the score
    
	printf("\n\tThere are 20 questions in this test and you have 15 seconds to answer each of them.\n\t\t\tFor every correct answer, you get 1 point.");
		sleep(15);

	printf("\n\n\n\t*****************************************\n\t\t\tGet Ready\n\t*****************************************");
		sleep(1);
	PlaySound(TEXT("count.wav"),NULL,SND_SYNC);
	system("cls");
	
	// Loop through each question
    for (int i = 0; i < sizeof(questions) / sizeof(questions[0]); ++i) 
	{
		// changing color of background and font
		//	system("COLOR 0A");    // 0 = background color and A = font color
		( i == 0 || i==10 || i==9 || i==19 ) ? ( system("COLOR 1F") ) : (i == 1 || i==11 || i==20) ? ( system("COLOR 2F") ) : ( i==2 || i==12 ) ? 
		( system("COLOR 3F") ) : ( i==3 || i==13 ) ? ( system("COLOR 4F") ) : ( i==4 || i==14 ) ? ( system("COLOR 5F") ) : ( i==5 || i==15 ) ? 
		( system("COLOR 6F") ) : ( i==6 || i==16 ) ? ( system("COLOR 7D") ) : ( i==7 || i==17 ) ? ( system("COLOR 8F") ) : ( system("COLOR 9F") );

        // Display the question
        printf("\n\n");
        printf("    %s\n", questions[i]);      // printing question
        
        //function in C that plays a sound.
        PlaySound(TEXT("bubble.wav"),NULL,SND_SYNC);   // sound effect
        //SND_SYNC --> program will wait for the sound to finish playing before moving on to the next line of code.
        
        // Display the options
        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); ++j)  //options[i] divided by the size of a single option sizeof(options[i][0]
		{
			printf("\n");
            printf("    %s\n", options[i][j]);  // printing the options
        } 
        
 		time_t start_time = time(NULL);  // Record the start time
 		
 		// Get user input
        char userAnswer;
        sleep(3);
        printf("\n       Enter your choice after the beep sound");
        printf("\n       Your answer: ");
        abc();     //call 
        scanf(" %c", &userAnswer);
        
        time_t end_time = time(NULL);  // Record the end time


        // Check the answer and time limit
        if (userAnswer == answers[i] && difftime(end_time, start_time) <= 18) 
		{
            score++;
        } // end if 
		else 
		{
			if(difftime(end_time, start_time) > 18)
			{
				printf("\n  Time limit exceeded.");
				sleep(3);
			}  // end if 
			else
			{
				printf("\n  Incorrect answer. The correct answer is %c\n", answers[i]);
				sleep(3);
			}  // end else if 
        } // end else if 

        printf("\n");
        system("cls");  //clear screen 
        
    }  // end for loop 
 		
 		system("COLOR 5F");
		printf("\n\t************************************************\n\t\t C O N G R A T U L A T I O N S ! \n\t***************************************************");
		printf("\n\n\t\tYou've completed the test");
		PlaySound(TEXT("congrats.wav"),NULL,SND_SYNC);
		
	// Display final score
    printf("\n   Your final score is: %d / %lu\n", score, sizeof(questions) / sizeof(questions[0]));
    
    // printing IQ level 
	(score>=0&&score<=6) ? printf("\n\t\tIQ : Below Average") : (score>=7&&score<=12) ? (printf("\n\t\tIQ : Average")):(score>=13&&score<=17) ? printf("\n\t\tIQ : Smart") : printf("\n\t\tIQ : Genius");
	
	PlaySound(TEXT("bubble.wav"),NULL,SND_SYNC);

	}
	else if(op=='N'||op=='n')
	{
		PlaySound(TEXT("bubble.wav"),NULL,SND_SYNC);
		printf("\n Game exit");
	} // end else if
	else
	{
		printf("\n You entered the wrong alphabet. Please read the instructions carefully\n");
		main();
	} // end else
	return 0;
}