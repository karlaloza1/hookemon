/******************************************************************************************
 ** HOOKEMON!
 ** CISP 400
 ** Name: KARLA LOZADA
 ** DATE: 03/24/2017
 *******************************************************************************************/

#include <iostream>
#include<string>

using namespace std;

/******************************************************************************************
 **
 ** Here we create the class that is going to hoald the information of each hokeemon
 ** also is going to hold the activities such as eat, play, name and also play and afight
 ** between de hookemons
 *******************************************************************************************/

class Hokeemon_Game
{
public:
    Hokeemon_Game(int hungry_hokeemon= 0, int bored_hokeemon= 0); // is going to hols the quantity of food and borde
    int chat =0;   // in order to make them fight together
    int play2=0;   // in order to make them play together
    
    void Speak_Hokeemon (int x);  //first function to make the hookemon talk
    void Play_creatures(int hokeemon_fun = 4);  // to make the hokeemon play
    void Food_Hokeemon(int hokeemon_food= 4 );  // to feed the hokeemon
    void Display_quantity_hokeemon();
    void Hokeemons_fight(int fight);  // the function that make them fight
    void Hokeemons_play_together(int play);//function to make the hokeemons play together
    
    int Get_state_hokee() const;  // is going to get the mood sate, is going to get the count of total
    void Display_food_bored(); // show the state of the hokeemon    string name1;
    
    string name1; //hold name  1
    string name2; // hold name 2
    
private:
    int hokee_hungry; // hold the hungry
    int hokee_bored; // boredom
    void Hokeemon_PassTime(int hokee_passtime = 1); // each activity is a plus 1
    
};


Hokeemon_Game::Hokeemon_Game(int hungry_hokeemon, int bored_hokeemon): // is going to hold the quantity hunger and boredom
hokee_hungry(hungry_hokeemon),
hokee_bored(bored_hokeemon)
{}

/******************************************************************************************
 ** is going to make the count of each turn of the hunger and boredom of the hokeemon
 ** is going to help to have the information needed
 *******************************************************************************************/

inline int Hokeemon_Game::Get_state_hokee() const
{
    return (hokee_hungry + hokee_bored);
}

/******************************************************************************************
 ** is going to make the count of each activity is goingt to count plus 1
 ** i
 *******************************************************************************************/


void Hokeemon_Game::Hokeemon_PassTime(int hokee_passtime)
{
    hokee_hungry += hokee_passtime;
    hokee_bored+= hokee_passtime;
}

/******************************************************************************************
 ** In this function we are going to make the hokeemon talk, is going to to show how is feeling
 ** if 0 is the first hokeemon if 1 the second hokeemon.
 **
 *******************************************************************************************/


void Hokeemon_Game::Speak_Hokeemon(int x)
{
    if (x==0)
        
        cout << " , I am felling ";
    
    else if (x==1)
        
        cout << ", I am felling ";
    
    int state = Get_state_hokee();
    
    if ((state >=0 ) && (state <=4))       //0-4 is going to be happe
    {
        cout << "HAPPY (。◕‿◕｡) !!! .\n";
    }
    else if ((state >=5) && (state <=9)) // 5-9 is going to be ok
    {
        cout << "OKAY (∪ ◡ ∪) !!!.\n";
    }
    else if ((state >=10) && (state <=14))  // from 10 to 14 is going to be fustrated
    {
        cout << "FUSTRATED (·_·) !!! .\n";
    }
    else if (state >=15)                    //higher than 15 is going to be mad
    {
        cout << " MAD (⋋▂⋌) !!!.\n";
    }
    
    else if (state >=20)                  //is going to be deaddd --- si le hago funcionar
    {
        cout << "YOUR HOKEEMON IS DEADDD\n";
    }
    
    Hokeemon_PassTime(); // count +1 of each turn that pass
    
}
/******************************************************************************************
 ** In this function we are going to feed the hokeemons in order to mantain them
 ** alive.
 *******************************************************************************************/



void Hokeemon_Game::Food_Hokeemon(int hokeemon_food)
{
    cout << "YUMMMM!!\n(─‿‿─)\n ";
    
    hokee_hungry -= hokeemon_food;
    
    if (hokee_hungry < 0)
    {
        hokee_hungry= 0;
    }
    
    Hokeemon_PassTime(); // again is going to this function to add 1
    
    
}

/******************************************************************************************
 ** In this function we are going to play with each hokeemons individualy in order to
 ** prevent that they get bored
 *******************************************************************************************/



void Hokeemon_Game::Play_creatures(int hokeemon_fun )
{
    cout << "Wuhuuuuu!!\n(≧◡≦)\n";
    
    hokee_bored -= hokeemon_fun;
    if (hokee_bored< 0)
    {
        hokee_bored = 0;
    }
    
    Hokeemon_PassTime(); //again we go to the function to addd
    
    
}

/////////EXTRA BONUSSSSS //////////////////////////////////////////////////////////////////////

/******************************************************************************************
 ** In this function we are going to show the state of eachh hokeemon we are going to
 ** call this function in each activity to show all the time the mood of the hokemonn
 *******************************************************************************************/


void Hokeemon_Game::Display_food_bored()
{
    if ((hokee_hungry <= 4) && (hokee_bored <= 4))
    {
        cout << " is full(◠‿◠) and it is not bored(◕‿-) . \n";
    }
    else if ((hokee_hungry <= 4) && ((hokee_bored > 3 && hokee_bored <= 10)))
    {
        cout << " is full(◠‿◠), but it is starting to get bored (∩︵∩).\n";
    }
    else if ((hokee_hungry <= 4) && (hokee_bored >= 10))
    {
        cout << " is full(◠‿◠), but it is really bored(⋋▂⋌). \n";
    }
    else if ((hokee_bored<= 4) && ((hokee_hungry > 4 && hokee_hungry < 10)))
    {
        cout << " is a litte bit hungry( ◕﹏◕ ), but it is not bored(◕‿-). \n";
    }
    else if (((hokee_bored> 4 && hokee_bored < 10)) && ((hokee_hungry > 4 && hokee_hungry < 10)))
    {
        cout << " is a little bit  hungry( ◕﹏◕ ), but it is also a little bit bored(¬_¬). \n";
    }
    else if ((hokee_bored >= 10) && ((hokee_hungry > 4 && hokee_hungry < 10)))
    {
        cout << " is a little bit hungry( ◕﹏◕ ), but it is really bored(⋋▂⋌). \n";
    }
    else if ((hokee_hungry >= 10) && (hokee_bored<= 4))
    {
        cout << " wants to eat, it is starving(⋋▂⋌), but it is not bored(◕‿-). \n";
    }
    else if ((hokee_hungry >= 10) && ((hokee_bored >= 4 && hokee_bored <= 10)))
    {
        cout << " wants to eat, it is starving(⋋▂⋌), and it is a little bit bored(¬_¬) \n";
    }
    else if ((hokee_hungry >= 10) && (hokee_bored>= 10))
    {
        cout << " wants to eat, it is starving(⋋▂⋌), and it is really bored!(⋋▂⋌) \n";
    }
    else if ((hokee_hungry >=12 ) && (hokee_bored >=12))
    {
        cout << "YOUR HOKEEMON IS DEADDDDD !!!!\n";
    }
}

////////EXTRA BONUS /////////////////////////////////////////////////////////////////////////

/******************************************************************************************
 ** In this function we are going to make the creatures fight between each other
 ** but at the end they decide to STOP AND BECOME FRIENDS
 *******************************************************************************************/

//////EXTRA BONUS ////////////////////////////////////////////////////////////////////////////


void Hokeemon_Game::Hokeemons_fight(int fight)
{
    
    if (fight==0)
    {
        cout << "Hey you!! Lets fight\n(≧o≦)(≧o≦)\n";
        Hokeemon_PassTime();
        return;
        
    }
    else if (chat==1)
        cout << "YESSSS!!! LETS DO IT\n(⋋▂⋌)(⋋▂⋌) \n";
    
    if (chat >2)
    {
        cout << "AUCHHHHH!!!!\n(⊙_◎)(⊙_◎)\n";
        cout << "I am getting mad\n(⋋▂⋌)(⋋▂⋌)\n";
    }
    else if (chat >1)
    {
        cout <<"PUNCH PUNCH!!!!\no(≧o≦)oo(≧o≦)o\n";
        cout << "TAKE THATT HAHAHA\n(─‿‿─)(─‿‿─)\n";
        
    }
    else if (chat >0)
    {
        cout <<"HAHAHAHHA try to get me\n(¬‿¬)(¬‿¬)\n ";
        cout <<"AUCHHHHHHH!!!!!\n (⊙_◎)(⊙_◎)\n";
    }
    else
    {
        
        
        cout << "AUCHHHH, THAT HURTS\n(⊙▂⊙)(⊙▂⊙)\n";
        cout << "I am getting MADDD\n(-'_'-)(-'_'-) \n";
    }
    
    chat++;
    Hokeemon_PassTime();
    
    
    if (chat>3)
    {
        chat =0;
        cout <<"NOOO, WE SHOULD STOP\n(◑‿◐)(◑‿◐)\n";
        cout << "Yes!! We should be friend and PLAY TOGETHER\n(─‿‿─)(─‿‿─)\n\n";
        cout << "☀ ☀ ☀ A NEW DAY BEGINS!!!! ☀ ☀ ☀\n";
    }
    
}

/////////EXTRA BONUS /////////////////////////////////////////////////////////////////////////

/******************************************************************************************
 ** In this function the hokeemons are going to play together as friends and become
 ** good friends because at the end of the fight they decide to play together
 *******************************************************************************************/

//////EXTRA BONUS /////////////////////////////////////////////////////////////////////////////


void Hokeemon_Game::Hokeemons_play_together(int play)
{
    
    if (play==0)
    {
        cout << "Hey friend!! Lets PLAY TOGETHER\n(◑‿◐)(◑‿◐)\n";
        Hokeemon_PassTime();
        return;
        
    }
    
    else if (play==1)
        cout <<"YESSSS!!! LETS DO IT\n(◑‿◐)(◑‿◐)\n";
    
    if (play2 >2)
    {
        cout <<"WUHUUUUU WUHUUU!!\n(✿◠‿◠)(✿◠‿◠)\n";
        cout <<"This is funnn!!!\n(●*∩_∩*●)(●*∩_∩*●)\n";
    }
    else if (play2 >1)
    {
        cout <<"HORRAYYYYY HORRAYYY!!!!\no(≧o≦)oo(≧o≦)o\n";
        cout << "I love playing with youu!!\n(─‿‿─)(─‿‿─)\n";
        
    }
    else if (play2 >0)
    {
        cout <<"HAHAHAHHA ME TOOO\n(●*∩_∩*●)(●*∩_∩*●)\n ";
        
    }
    else
    {
        cout <<"WUHUUUUUUU\n(◑‿◐)(◑‿◐)\n";
        
    }
    play2++;
    
    if (play2 >3)
    {
        play2 =0;
        cout <<"THANKS FOR BEING MY FRIEND\n(◑‿◐)(◑‿◐)\n";
        cout <<"BEST FRIENDS FOR EVERR\n❤(≧◡≦)(≧◡≦)❤ \n\n";
        cout <<"☀ ☀ ☀ A NEW DAY BEGINS!!!! ☀ ☀ ☀\n\n";
    }
    
}


////////EXTRA BONUS/////////////////////////////////////////////////////////////////////////////

void Hokeemon_Game::Display_quantity_hokeemon() // OJO
{
    cout << "\nCritter Hunger Level: " << hokee_hungry<< ".\n";
    
    if (hokee_hungry > 10)
        cout << "Your hokeemon is dead\n";
    
    cout << "\nCritter Boredum Level: " << hokee_bored << ".\n";
    
    
}

int main()
{
    
    
    Hokeemon_Game hokee1;  //FIRST HOKEEMON
    Hokeemon_Game hokee2;  // SECOND HOKEEMON
    int choice;      //CHOICE OF THE SWITCH CASE
    
    
    do  //I decide to do a do while loop to the menuuu
    {
        cout << "✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿"<< endl<< endl;
        cout << "◑◑◑◑◑◑◑◑◑◑◑◑  HOKEEMON ◑◑◑◑◑◑◑◑◑◑◑◑" << endl;
        cout << "◑◑◑ 0  --> Exit the program \n";
        cout << "◑◑◑ 1  --> Name your first HOKEEMON\n";
        cout << "◑◑◑ 2  --> Name your second HOKEEMON\n";
        cout << "◑◑◑ 3  --> Listen to your first hokeemon ("<< hokee1.name1 << ") talk\n" ;
        cout << "◑◑◑ 4  --> Feed your first hokeemon (" << hokee1.name1 << ")\n";
        cout << "◑◑◑ 5  --> Play with your first hokeemon ("<< hokee1.name1 << ")\n";
        cout << "◑◑◑ 6  --> Listen to your second hokeemon (" << hokee2.name2 << ")talk\n";
        cout << "◑◑◑ 7  --> Feed your second hokeemon (" << hokee2.name2 <<  ")\n";
        cout << "◑◑◑ 8  --> Play with your second hokeemon ("<< hokee2.name2 << ")\n";
        cout << "◑◑◑ 9  --> Make yout HOKEEMONS FIGHT!!\n" ;
        cout << "◑◑◑ 10  --> Make yout HOKEEMONS PLAY!!\n\n" ;
        cout << "✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿"<< endl<< endl;
        cout << "Choice: ";
        cin >> choice;
        
        
        switch (choice) //choice decide for the userrrrr
        {
                
            case 0:   // is going to close the game
                cout << "Thanks for Playing!! GOODBYE\n ";
                break;
            case 1: // this case is going to put the name of the first hokeemon
                cout << endl;
                cout << "Insert the name of the first HOKEEMON: ";
                cin >> hokee1.name1; // the name of the hokeemon
                cout << endl;
                break;
            case 2:   // insert the name of the second hokeemon
                cout << endl;
                cout << "Insert the name of the second HOKEEMON: ";
                cin >> hokee2.name2; // name of the second hokeemon
                cout << endl;
                break;
            case 3:  // is going to produce the talking of the first hokeemon
                cout << "My name is " << hokee1.name1; // is going to say the name in the output
                hokee1.Speak_Hokeemon(0); // is going tot talk the hokeemon
                cout <<hokee1.name1;
                hokee1.Display_food_bored();  // is going to call the function that display the mood
                cout << endl;
                break;
            case 4: // is going to make the fisrt hokeemon eat
                cout <<endl;
                cout <<hokee1.name1 << " is eating \n";
                hokee1.Food_Hokeemon(); // call the function thar make the first hokeemon eat
                cout <<hokee1.name1;
                hokee1.Display_food_bored(); // is going to displat the mood of the hokeemon
                cout << endl;
                break;
            case 5: // is going to make the first hokeemon play
                cout <<endl;
                cout <<hokee1.name1 << " is playing\n";
                hokee1.Play_creatures(); // call the functionnnn
                cout <<hokee1.name1;
                hokee1.Display_food_bored();// call tha function that display the mood
                cout << endl;
                break;
            case 6: // is going to make the seconde hokeemon talk
                cout << "My name is " << hokee2.name2;
                hokee2.Speak_Hokeemon(1); // call the function to make the hokeemon speak
                cout <<hokee2.name2;
                hokee2.Display_food_bored(); //call the function that show the mood of hokeemon
                cout << endl;
                break;
            case 7: // is going to feed the second hokeemon
                cout << endl;
                cout <<hokee2.name2<< " is eating \n"; // call the function to make the hokeemon eat
                hokee2.Food_Hokeemon(); // call the function
                cout <<hokee2.name2;
                hokee2.Display_food_bored(); // call the function that show the mood of the 2 hokeemon
                cout << endl;
                break;
            case 8: // is going to play with the second hokeemon
                cout << endl;
                cout <<hokee2.name2 << " is playing\n";
                hokee2.Play_creatures(); // call the function to play with the creatureeee
                cout <<hokee2.name2;
                hokee2.Display_food_bored(); // is going to display the mood
                cout << endl;
                break;
            case 9: // is going to make the hokeemon FIGHTTTT
                cout << endl;
                hokee1.Hokeemons_fight(0); // call the function 1 hokeemon
                hokee2.Hokeemons_fight(1); // call the function 2 hokeemon
                cout << endl;
                break;
            case 10: // is going to make the hokeemon PLAY TOGETHER
                cout << endl;
                hokee1.Hokeemons_play_together(0); // call the function as the 1 hokeeom
                hokee2.Hokeemons_play_together(1); // call the function as the 2 hokeemon
                cout << endl;
                
        }
    }
    
    while (choice !=11);  // is going to be the condition of the do while because i have 10 option
    // SORRY I PUT SO MANY OPTIONS :(
    return 0;
    
}


//END OF THE PROGRAM
// HOPE YOU ENJOT THE PROGRAMMMMMM
