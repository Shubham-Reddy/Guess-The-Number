#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int n,guess,nGuesses=1;
    srand(time(0));
    n=rand()%100+1;
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>n){
            printf("Lower number please..\n");
        }
        else if(guess<n){
            printf("Greater number please..\n");
        }
        else
        {
            printf("You got it!\nYou took %d attempts",nGuesses);
        }
        nGuesses++;
        

    } while (guess!=n);
    return 0;
    

}