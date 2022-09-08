#include <stdio.h>


int main ()
{
    int note = 12;
    if (note > 0 && note<11)
        {
        if (note == 10)  
	    {
	    	printf("Ok you are on fire");
	    }
        else if (note > 9)  
	    {
	    	printf("Great job you are succes the subjet");
	    }
	    else if (note>7)
	    {
	    	printf("Nice try your note is very well, but I know you can do better");
	    }
	    else if (7>note)
	    {
	    	printf("Uff it was too close, but you are save");
	    }
        else if (note>6)
	    {
	    	printf("Uff it was too close, but you are save");
	    }
	    else
	    {
	    	printf("Sorry my friend your note isn't such for pass the subject \n Should you check when is the next enroll");
	    }
        }
	    else
        printf("Are you kidding me?");
}