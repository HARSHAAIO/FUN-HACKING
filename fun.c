/*Author : HARSHA
organisation : AIO
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main()
{

char name[30];
    int num,len,i;

    printf("Please input your name : ");
    scanf("%s",&name);

    len = strlen(name);

    for(i=0;i<=len;i++)
    {
        if(name[i] == 'A' | name[i] == 'a')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are great at attitude.\n");
            if(num == 1)
                printf("Your anger is your worst enemy.\n");
            if(num == 2)
                printf("You are attractive.\n");

        }

        if(name[i] == 'B' | name[i] == 'b')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are bold and brave.\n");
            if(num == 1)
                printf("You are beautiful.\n");
            if(num == 2)
                printf("Your beauty defines you.\n");
       }

       if(name[i] == 'C' | name[i] == 'c')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are curious about something.\n");
            if(num == 1)
                printf("You can do anything.\n");
            if(num == 2)
                printf("You are like a child.You have childishness.\n");
        }

           if(name[i] == 'D' | name[i] == 'd')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are completely developed person.\n");
            if(num == 1)
                printf("You care of your duty and profession.\n");
            if(num == 2)
                printf("You have great driving skills.\n");
        }

           if(name[i] == 'E' | name[i] == 'e')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are energetic.\n");
            if(num == 1)
                printf("You can empower yourself.\n");
            if(num == 2)
                printf("You are efficient at your profession.\n");
        }

           if(name[i] == 'F' | name[i] == 'f')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are friendly in nature.\n");
            if(num == 1)
                printf("You are a good friend for everyone.\n");
            if(num == 2)
                printf("You were forced by someone to do something.\n");
        }

           if(name[i] == 'G' | name[i] == 'g')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are shot and target lover.\n");
            if(num == 1)
                printf("You are good at everything.\n");
            if(num == 2)
                printf("You are gorgeous.\n");
        }

           if(name[i] == 'H' | name[i] == 'h')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are highly professional and handsome at your skill.\n");
            if(num == 1)
                printf("You are highly skilled.\n");
            if(num == 2)
                printf("You are humble and honorable person.\n");
        }

           if(name[i] == 'I' | name[i] == 'i')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are an interactive person.\n");
            if(num == 1)
                printf("You are simply impressive cannot define your beauty.\n");
            if(num == 2)
                printf("You are highly impressive at you work.\n");
        }

           if(name[i] == 'J' | name[i] == 'j')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You make people always laugh and keep them happier.\n");
            if(num == 1)
                printf("You always like to join in parties and new things.\n");
            if(num == 2)
                printf("You just amazing and lovable.\n");
        }

           if(name[i] == 'K' | name[i] == 'k')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are a kind hearted person.\n");
            if(num == 1)
                printf("You are king and queen for your own destiny.\n");
            if(num == 2)
                printf("You are like kite always like to fly.\n");
        }

           if(name[i] == 'L' | name[i] == 'l')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are lovely looking.\n");
            if(num == 1)
                printf("You/someone are secretly in love with someone.\n");
            if(num == 2)
                printf("You likely to have a look twice.\n");
        }

           if(name[i] == 'M' | name[i] == 'm')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are modern.\n");
            if(num == 1)
                printf("You can motivate anyone.\n");
            if(num == 2)
                printf("You are self-motivated.\n");
        }


           if(name[i] == 'N' | name[i] == 'n')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are a notable person in your area.\n");
            if(num == 1)
                printf("You can narrate something you love easily.\n");
            if(num == 2)
                printf("You are nothing without someone in your life.\n");
        }

           if(name[i] == 'O' | name[i] == 'o')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You always like to order.\n");
            if(num == 1)
                printf("You are originator of your own destiny.\n");
            if(num == 2)
                printf("You always say \'ok'\ to many things because you don't like to express bad opinion.\n");
        }

         if(name[i] == 'P' | name[i] == 'p')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are like parrot because you can imitate anything easily.\n");
            if(num == 1)
                printf("You pay attention to everything because you deserve it.\n");
            if(num == 2)
                printf("You have some in built powers to achieve what you want.\n");
        }

         if(name[i] == 'Q' | name[i] == 'q')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are beautiful then queen.\n");
            if(num == 1)
                printf("You may be miss/mister universe.\n");
            if(num == 2)
                printf("You are quite enough to reach your target.\n");
        }

         if(name[i] == 'R' | name[i] == 'r')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are a great lover of riding.\n");
            if(num == 1)
                printf("You are a great runner.\n");
            if(num == 2)
                printf("You are surrounded with a reserved person.\n");
        }

         if(name[i] == 'S' | name[i] == 's')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are superstar for your own life.\n");
            if(num == 1)
                printf("Your silence defines you more than your words.\n");
            if(num == 2)
                printf("You are like a star in the sky always shiny.\n");
        }

         if(name[i] == 'T' | name[i] == 't')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are always a great tester.\n");
            if(num == 1)
                printf("You will get a life turning point, don't loose it.\n");
            if(num == 2)
                printf("Your caller tune attracts everyone's attention.\n");
        }

         if(name[i] == 'U' | name[i] == 'u')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You cannot be understand easily.\n");
            if(num == 1)
                printf("You will undertake something in your life to succeed.\n");
            if(num == 2)
                printf("Your understanding abilities are highly rich.\n");
        }

         if(name[i] == 'V' | name[i] == 'v')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You vary from others.\n");
            if(num == 1)
                printf("You value other people policies.\n");
            if(num == 2)
                printf("You love to vanish from the place you are now.\n");
        }

          if(name[i] == 'W' | name[i] == 'w')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("Your wearing style is very nice...!.\n");
            if(num == 1)
                printf("You may be weak but strong with your feelings.\n");
            if(num == 2)
                printf("You love to vanish from the place you are now.\n");
        }

          if(name[i] == 'X' | name[i] == 'x')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You are simply xerox copy of some important person in your life.\n");
            if(num == 1)
                printf("Your name is amazing because it contains x a rare letter.\n");
            if(num == 2)
                printf("You can scan anything like a xerox machine.\n");
        }

          if(name[i] == 'Y' | name[i] == 'y')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("You will look young even in old age.\n");
            if(num == 1)
                printf("You are an icon for youth.\n");
            if(num == 2)
                printf("You are really enjoying your young life.\n");
        }

          if(name[i] == 'Z' | name[i] == 'z')
        {
            srand(time(0));
            num = rand()%3;

            if(num == 0)
               printf("Your must be a friend of muslim person it's great.\n");
            if(num == 1)
                printf("Your name is really amazing because it started with last alphabet letter with which does not have many words.\n");
            if(num == 2)
                printf("Your name is wonderful among INDIAN names.\n");
        }

    }
    
    return 0;
    }
