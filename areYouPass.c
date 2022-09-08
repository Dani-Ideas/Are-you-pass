#include <stdio.h>
int note;

int main ()
{
	note=11;
	printf("Hello student would you like know your note?\n");
    if (note > 0 && note<11)
        {
			printf("Great your note is %d \n", note);
        	if (note == 10)  
	    	{
	    		printf("Ok you are on fire");
	    	}
        	else if (note>8|| note==8)// I know was could use "note>7", but I wnato check the operator OR  
	    	{
	    		printf("Great job you are succes the subjet");
	    	}
	    	else if (note>6)
	    	{
	    		printf("Nice try your note is very well, but I know you can do better");
	    	}
	    	else if (note==6)
	    	{
	    		printf("Uff it was too close, but you are save");
	    	}
			else
	    	{
	    		printf("Sorry my friend your note isn't such for pass the subject \n Should you check when is the next enroll");
	    	}
	    }
	else
	{
		printf("Are you kidding me? It's imposible to get this note");
	}
}