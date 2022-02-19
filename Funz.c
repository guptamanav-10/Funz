#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

void mcq();
void tf();
void rev();
void gtn();

int main()
{
    int a,b,c,select;
    
    do
    {
    printf("*******************************************************************************\n\n");
    printf("            !---**********Funz the new Era of Infotainment**********---!            \n");
    printf("-------------------------------------------------------------------------------\n");
    printf("      --->We offer a variety of Activities just for your little children.<---      \n\n");
    printf("          --->We cover everything from fun to knowledge, and make sure        \n");
    printf("            that your kid learns to play well while studing too.<---          \n");
    printf("-------------------------------------------------------------------------------\n");
    printf("              ~~~This Gaming Application is Brought to you by~~~              \n");
    printf("                               Celestial Gaming                               \n");
    printf("                   Go and Check out the YouTube Channel NOW!                   \n");
    printf("-------------------------------------------------------------------------------\n\n\n");
    printf("Let's Move on to the Fun part of the Funz :-\n");
    printf("The Application consist of many Sections, to play any desired activity press the respective number :)\n\n");
    printf("The Activities which we presently offer are :-\n");
    printf("--> Press 1 :: MCQs <--\n");
    printf("--> Press 2 :: True or False <--\n");
	printf("--> Press 3 :: Reverse of your Name <--\n");
    printf("--> Press 4 :: Guess the Number <--\n");
    printf("Select from the options above : ");
    scanf("%d",&select);
    
    switch (select)
    {
    case 1:
        mcq();
        break;

    case 2:
        tf();
        break;

    case 3:
        rev();
        break;

	case 4:
		gtn();
		break;
	
    default:
        break;
    }

} while (select<5);  
getch();
}

void mcq()
{
    int ans;
    int a;
    int r1;

    printf("\n\n\nHello and Welcome to the 'MCQs'\n");
    printf("In this Quiz you will be asked 20 Questions\n");
    printf("well you have to try that you get them all\n");
    printf("Remember that as you proceed the Difficulty of Questions will rise in each Sections\n");
    printf("The Sections are as followed :-\n");
    printf("->First is Basic General Knowledge\n");
    printf("->Secondly, you have Some Maths\n");
    printf("->Then, The World Around Us\n");
    printf("->Lastly The Ancient India\n");
    printf("So, what we are waiting for let the fun begin.\n\n");
    printf("                          --->General Knowledge<---                       \n\n");

    printf("\nQ-1.) The hottest planet in the solar system ?");
    printf("\n\nA.Mercury\t\tB.Venus\n\nC.Mars\t\t\tD.Jupiter");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is B.Venus");
		       }

    printf("\n\nQ-2.) Which animal laughs like human being?");
    printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is B.Hyena");
		       }

	printf("\n\nQ-3.) Chambal river is a part of ?");
    printf("\n\nA.Sabarmati basin\t\tB.Ganga basin\n\nC.Narmada basin\t\t\tD.Godavari basin");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is C.Narmada basin");
		       }

	printf("\n\nQ-4.) Patanjali is well known for the compilation of ?");
    printf("\n\nA.Yoga Sutra\t\tB.Panchatantra\n\nC.Brahma Sutra\t\tD.Ayurveda");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is A.Yoga Sutra");
		       }		   		   

	printf("\n\nQ-5.) Who among the following wrote Sanskrit grammar?");
    printf("\n\nA.Kalidasa\t\tB.Charak\n\nC.Panini\t\tD.Aryabhatt");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is C.Panini");
		       }

printf("\n\n                          --->Mathematics<---                       \n\n");

	printf("\n\nQ-6.) The number of 3-digit numbers divisible by 6, is?");
    printf("\n\nA.149\t\tB.166\n\nC.150\t\tD.151");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is C.150");
		       }

	printf("\n\nQ-7.) The average of first 50 natural numbers is ?");
    printf("\n\nA.25.30\t\tB.25.5\n\nC.25.00\t\tD.12.25");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is B.25.5");
		       }

	printf("\n\nQ-8.) The simplest form of 1.5 : 2.5 is ?");
    printf("\n\nA.6:10\t\tB.15:25\n\nC.0.75:1.25\tD.3:5");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is D.3:5");
		       }

	printf("\n\nQ-9.) Which of the following is a Palindrome number ?");
    printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is C.23232");
		       }

	printf("\n\nQ-10.) Which of the following numbers gives 240 when added to its own square ?");
    printf("\n\nA.15\t\tB.16\n\nC.18\t\tD.20");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is A.15");
		       }

printf("\n\n                          --->The World Around Us<---                       \n\n");

	printf("\n\nQ-11.) The United Nations Organization has its Headquarters at ?");
    printf("\n\nA.Bali\t\t\tB.Hague\n\nC.New York, USA\t\tD.Washington DC");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is C.New York, USA");
		       }

	printf("\n\nQ-12.) Who created the famous Rock Garden of Chandigarh ?");
    printf("\n\nA.Gaudi\t\t\t\tB.Saarinen\n\nC.Krishnarao Jaisim\t\tD.Nek Chand");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is D.Nek Chand");
		       }

	printf("\n\nQ-13.) This scientist is well known for his theory of relativity. Who is he ?");
    printf("\n\nA.Thomas Alva Edison\t\tB.Albert Einstein\n\nC.Marconi\t\t\tD.James Watt");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is B.Albert Einstein");
		       }

	printf("\n\nQ-14.) Which of the following Company buy eBay Indian operations ?");
    printf("\n\nA.Amazon\t\tB.Flipkart\n\nC.Snapdeal\t\tD.PayTM");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is B.Flipkart");
		       }

	printf("\n\nQ-15.) In binary code, the number 7 is written by ?");
    printf("\n\nA.100\t\tB.010\n\nC.111\t\tD.101");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is C.111");
		       }

printf("\n\n                         --->The Ancient India<---                       \n\n");

	printf("\n\nQ-16.) The Ganges River is sacred and holy to which of the following people ?");
    printf("\n\nA.Jewish\t\tB.Hindu\n\nC.Christian\t\tD.Buddhist");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is B.Hindu");
		       }

	printf("\n\nQ-17.) Lord Buddha was born in ?");
    printf("\n\nA.Lumbini\t\tB.Vaishali\n\nC.Bodh Gaya\t\tD.Pataliputra");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is A.Lumbini");
		       }

	printf("\n\nQ-18.) What is the other name of Chanakya ?");
    printf("\n\nA.Panini\t\t\tB.Magadh\n\nC.Chandragupta Maurya\t\tD.Kautilya");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is D.Kautilya");
		       }

	printf("\n\nQ-19.) Which of the following was NOT found in the ancient city of Harappa ?");
    printf("\n\nA.Pyramids\t\t\t\t\tB.Straight Roads\n\nC.Homes raised above the Flood Plain\t\tD.Bathtub");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is A.Pyramids");
		       }
			   
	printf("\n\nQ-20.) Veda which is partly in prose and partly in verses is ?");
    printf("\n\nA.Rigveda\t\tB.Samaveda\n\nC.Yajurveda\t\tD.Atharvaveda");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong! The correct answer is C.Yajurveda");
		       }


printf("\n\n\nWell Played!!!\n\n\n");
}

void tf()
{
     int ans;
    int t,f;
    int r1;
    
	printf("\n\n\nHello and Welcome to the 'True & False'\n");
    printf("Here you will be asked 20 Questions\n");
    printf("well you have to try that you get them all\n");
    printf("Remember that as you proceed the Difficulty of Questions will rise in each Sections\n");
    printf("The Sections are as followed :-\n");
    printf("->First is Basic General Knowledge\n");
    printf("->Secondly, you have Some Maths\n");
    printf("->Then, The World Around Us\n");
    printf("->Lastly The India\n");
    printf("So, what we are waiting for let the fun begin.\n\n");
    printf("                          --->General Knowledge<---                       \n\n");

    printf("\n\n Q-1.) New Delhi is the capital of INDIA.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='T')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong!");
		       }

    printf("\n\n Q-2.) 'Mahatma Gandhi' is known as 'FATHER OF INDIAN CONSTITUTION'.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='F')
			{
			    printf("\n\nCorrect! Father of Indian Constitution is Dr. B.R. Ambedkar.");
            }
		else
		       {
		           printf("\n\nWrong! Father of Indian Constitution is Dr. B.R. Ambedkar.");
		       }
    
    printf("\n\n Q-3.) We celebrate NATIONAL EDUCATION DAY on 12 NOVEMBER.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='F')
			{
			    printf("\n\nCorrect! National Education Day comes on 11 November.");
            }
		else
		       {
		           printf("\n\nWrong! National Education Day comes on 11 November.");
		       }

    printf("\n\n Q-4.) 'NETAJI SUBHASH CHANDRA BOSE' was born in 'CUTTACK IN ODISHA'.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='T')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong!");
		       }           

    printf("\n\n Q-5.) Tomatoes are vegetables.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='F')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong!");
		       }      

    printf("\n\n                          --->Mathematics<---                       \n\n");

    printf("\n\n Q-6.) -2 is an Integer.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='T')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong!");
		       }           

    printf("\n\n Q-7.) 2 sides of a scalene triangle have the same length.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='F')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong!");
		       }           

    printf("\n\n Q-8.) Pi can be correctly written as a Fraction.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='F')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong!");
		       }           

    printf("\n\n Q-9.) A Googol is bigger than a Billion.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='T')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong!");
		       }           

    printf("\n\n Q-10.) There are 86400 seconds in a day.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='T')
			{
			    printf("\n\nCorrect!");
            }
		else
		       {
		           printf("\n\nWrong!");
		       }           

    printf("\n\n                          --->World Around Us<---                       \n\n");

    printf("\n\n Q-11.) 'A' is the most common letter used in the English language.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='F')
			{
			    printf("\n\nCorrect! 'E' is the most common letter and appears in 11 percent of all english words, according to Oxford Dictionaries");
            }
		else
		       {
		           printf("\n\nWrong! 'E' is the most common letter and appears in 11 percent of all english words, according to Oxford Dictionaries ");
		       }           

     printf("\n\n Q-12.) Australia is wider than the moon.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='T')
			{
			    printf("\n\nCorrect! The moon sits at 3400km in diameter, while Australia's diameter from east to west is almost 4000km");
            }
		else
		       {
		           printf("\n\nWrong! The moon sits at 3400km in diameter, while Australia's diameter from east to west is almost 4000km ");
		       }                      

     printf("\n\n Q-13.) Coffee is made from berries.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='T')
			{
			    printf("\n\nCorrect!  When coffee berries turn from green to bright red in colour, this indicaties ripeness and they are picked, processed, and dried, before being roasted and turned into coffee.");
            }
		else
		       {
		           printf("\n\nWrong!  When coffee berries turn from green to bright red in colour, this indicaties ripeness and they are picked, processed, and dried, before being roasted and turned into coffee. ");
		       }           

      printf("\n\n Q-14.) There are 115 bridges over the Amazon River.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='F')
			{
			    printf("\n\nCorrect!  There is actually not a single bridge over the Amazon River in South America. This is why you would struggle to find one.");
            }
		else
		       {
		           printf("\n\nWrong!  There is actually not a single bridge over the Amazon River in South America. This is why you would struggle to find one. ");
		       }           

      printf("\n\n Q-15.) Brains have no fat in them.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='F')
			{
			    printf("\n\nCorrect! The human brain is actually our fattiest organ. It is about 60 percent fat.");
            }
		else
		       {
		           printf("\n\nWrong! The human brain is actually our fattiest organ. It is about 60 percent fat. ");
		       }           


    printf("\n\n                          --->The Ancient India<---                       \n\n");
    
	printf("\n\n Q.16.) There are 5 Castes described in 'MANUSCRIPT' BRAHMINS,KSHATRIYAS,VAISHYAS,SHUDRAS AND DALITS, TRUE or FALSE.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='F')
			{
			    printf("\n\nCorrect! There are only four castes described in 'MANUSCRIPT'(based on IQ),there is no such caste called Dalits");
            }
		else
		       {
		           printf("\n\nWrong! There are only four castes described in 'MANUSCRIPT'(based on IQ),there is no such caste called Dalits");
		       }

	printf("\n\n Q-17.) Takshashila was the World's First and Oldest University.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='T')
			{
			    printf("\n\nCorrect! Yes,Takshashila was the world's first university. In fact, when it was burned by the invaders the university was burning for 3-4 days.");
            }
		else
		       {
		           printf("\n\nWrong! Takshashila was the world's first university. In fact, when it was burned by the invaders the university was burning for 3-4 days.");
		       }         

	printf("\n\n Q-18.) Hinduism is the second largest of the world religions.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='T')
			{
			    printf("\n\nCorrect! ");
            }
		else
		       {
		           printf("\n\nWrong! ");
		       }         

	printf("\n\n Q-19.) Pillars in Vijaya Vittala Temple produces Musical Sounds of Sa,Re,Ga,Ma.\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='T')
			{
			    printf("\n\nCorrect! Yes, It sounds like bells ringing. What an amazing architecture by our elders.");
            }
		else
		       {
		           printf("\n\nWrong! It sounds like bells ringing. What an amazing architecture by our elders.");
		       }         

	printf("\n\n Q-20.) Was Chanakya's other name Vishnugupta ?\n");
    printf("\n\nPress 't' For TRUE\t\tPress 'f' For FALSE\n\n");
		if (toupper(getch())=='T')
			{
			    printf("\n\nCorrect! Only in one Verse the name Vishnugupta was refered to Chanakya.");
            }
		else
		       {
		           printf("\n\nWrong! Only in one Verse the name Vishnugupta was refered to Chanakya.");
		       }         		   		   		   		   

printf("\n\n\nWell Played!!!\n\n\n");
}

void rev()
{
	int i,j,k;
	char n[15],r[15];
	printf("\n\n\nWelcome to the 'eman' I mean The name reversing Section \n Here we will do some Chemical Reactions and try \n to find out your name in reverse format\n Best of Luck ;)");
	printf("\n\nPlease Enter the word of your name\n\n");
	scanf("%s",n);
	 for ( i = 0; n[i] != '\0'; i++);
	 {
		 k=i-1;
	 }
	 for ( j = 0; j <= i-1; j++)
	 {
		 r[j] = n[k];
		 k--;
	 }
	 
	printf("\n\nReverse of your name --> %s.\n",r);

	printf("\nIt was not me who put that Garbage Value over their :|.\n Otherwise,that must be a good name, well moving on ;)\n\n\n");
}

void gtn()
{
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100 + 1;
printf("\n\n\nWe have generated a Random Number, let's find out that how much time will it\n take you to guess the Number.");
    do{
        printf("\n\nGuess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number)
        {
            printf("Lower number please!\n");
        }
        else if(guess<number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    }
    while(guess!=number);

printf("\n\n\nWell Played!!!\n\n\n");

}
