#include<stdio.h>

    int main()
    {
    	  char c;
    	  int t,i;
    	  scanf(" %d",&t);
    	 while(t--)
    	  {
    	  	scanf(" %c",&c);
    	  	if((c=='b')||(c=='B'))
    	  	printf("BattleShip\n");
    	  	else if((c=='c')||(c=='C'))
    	  	printf("Cruiser\n");
    	  	else if((c=='d')||(c=='D'))
    	  	printf("Destroyer\n");
    	  	else if((c=='f')||(c=='F'))
    	  	printf("Frigate\n");
    	  	else
    	  	printf("\n");	
    	  }
    	  return 0 ;
    	 }