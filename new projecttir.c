#include<stdio.h>
#include <stdlib.h>
void screenheader()
{
    printf("\n                            :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
	printf("\n                            ::                                                       ::");
	printf("\n                            ::       *****************************************       ::");
	printf("\n                            ::                                                       ::");
	printf("\n                            ::                       WELCOME                         ::");
	printf("\n                            ::                                                       ::");
	printf("\n                            ::                         TO                            ::");
	printf("\n                            ::                                                       ::");
	printf("\n                            ::                   FORTUNE TELLER!                     ::");
	printf("\n                            ::                                                       ::");
	printf("\n                            ::       ******************************************      ::");
	printf("\n                            ::                                                       ::");
	printf("\n                            :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
}
void choices()
{
	FILE *fptr, *f;
    /* open for writing */
    fptr = fopen("emp.txt", "w");

    if (fptr == NULL)
    {
        printf("File does not exist.\n");
        return;
    }
    fprintf(fptr, "\t______________________________________________________________________________________________________________"
        	"\n\t--------------------------------------------------------------------------------------------------------------");
	fprintf(fptr, "\n\n\n\t\t\t\t1. ABOUT YOURSELF \t\t\t 2. YOUR STONE ""\n\n\t\t\t\t3. LUCKY NUMBERS \t\t\t 4. LUCKY COLOUR"
	        "\n\n\t\t\t\t5. FORTUNE \t\t\t\t 6. LOVE COMPATIBLITY ""\n\n\t\t\t\t\t\t7. EXIT""\n\n\n\t\t\t\t\t***** Enter your choice *****\n\n");
	fprintf(fptr, "\t______________________________________________________________________________________________________________"
	"\n\t--------------------------------------------------------------------------------------------------------------");
	
    char s;
    fclose(fptr);
    f=fopen("emp.txt", "r");
    s = fgetc(f); 
    while (s != EOF) 
    { 
        printf ("%c", s); 
        s = fgetc(f); 
    } printf("\n");
	fclose(f);
	getch();

}


struct db
{
	int year;
	int date;
	int month;
	char name[50];
}db2, db1;
main()
{

	int a,ch;
	char confirm[20];
	struct db *bdob;
	bdob=&db1;
	
	screenheader();
	getch();
	system("cls");
	printf("\n\n\n\t\t\t\t::       *****************************************       ::");
	printf("\n\n\n\t\t\t\t\t\tENTER YOUR DATE OF BIRTH:\n");
	printf("\t\t\t\t\t\tDATE:");
	scanf("%d",&bdob->date);
	printf("\t\t\t\t\t\tMONTH:");
	scanf("%d",&bdob->month);
	printf("\t\t\t\t\t\tYEAR:");
	scanf("%d",&bdob->year);
	
	
	printf("\n\n\t\t\t\t\t\tENTER CURRENT DATE OF BIRTH: ");
	
	printf("\n\t\t\t\t\t\tDATE:");
	scanf("%d",&db2.date);
	printf("\t\t\t\t\t\tMONTH:");
	scanf("%d",&db2.month);
	printf("\t\t\t\t\t\tYEAR:");
	scanf("%d",&db2.year);
	
	system("cls");
	
	a= age(&bdob->year,&bdob->month,&bdob->date,&db2.date, &db2.month, &db2.year);
	
    if((bdob->month==3&&(bdob->date>=21&&bdob->date<=31))||(bdob->month==4 &&(bdob->date>=1&&bdob->date<=19)))
	{
		
        printf("\n\t\t\t\t::       *****************************************       ::");
	    printf("\n\n\n\t\t\t\t\t\t\t NAME: ");
	    scanf("%s",&bdob->name);
	    printf("\n\t\t\t\t\t\t\t Age: %d\n\n\n",a);
		printf("\n\n\t\t\t\t\t   Your horoscope sign is Aries-The Ram\n");
		printf("\n\t\t\t\t\t\t\t  .-.    .-.");
        printf("\n\t\t\t\t\t\t\t(_   \\ /   _)");
        printf("\n\t\t\t\t\t\t\t      |");
        printf("\n\t\t\t\t\t\t\t      |");
        
        printf("\n");
        do
        {
	        choices();
	        scanf("%d",&ch);
	        aries(ch);
	        printf("\n DO YOU WANT TO CONTINUE? (YES OR NO)\n ");
	        scanf("%s",&confirm);
        }while(strcmp(confirm,"yes")==0);
	}	
	else if((bdob->month==4&&(bdob->date>=20&&bdob->date<=30))||(bdob->month==5&&(bdob->date>=1&&bdob->date<=20)))
	{
		printf("\n\t\t\t\t::       *****************************************       ::");
    	printf("\n\n\n\t\t\t\t\t\t\t NAME: ");
	    scanf("%s",&bdob->name);
	    printf("\n\t\t\t\t\t\t\t Age: %d\n\n\n",a);
		printf("\n\n\t\t\t\t\t   Your horoscope sign is Taurus-The Bull\n");
    	printf("\n\t\t\t\t\t\t\t .     .");
        printf("\n\t\t\t\t\t\t\t'.______.'");
        printf("\n\t\t\t\t\t\t\t.'      `.");
        printf("\n\t\t\t\t\t\t\t:        :");
        printf("\n\t\t\t\t\t\t\t:        :");
        printf("\n\t\t\t\t\t\t\t`.______.'\n\n");
        do
        {
	        choices();
	        scanf("%d",&ch);
	        tauras(ch);
	        printf("\n DO YOU WANT TO CONTINUE? (YES OR NO)\n  ");
	        scanf("%s",&confirm);
        }while(strcmp(confirm,"yes")==0);
	}
	else if((bdob->month==5&&(bdob->date>=21&&bdob->date<=31))||(bdob->month==6&&(bdob->date>=1&&bdob->date<=20)))
	{
		printf("\n\t\t\t\t::       *****************************************       ::");
    	printf("\n\n\n\t\t\t\t\t\t\t NAME: ");
	    scanf("%s",&bdob->name);
	    printf("\n\t\t\t\t\t\t\t Age: %d\n\n\n",a);
		printf("\n\n\t\t\t\t\t   Your horoscope sign is Gemini-The Twins\n");
		int g=5;
	    printf(" '");
	    sort(g);
	
	    printf("'\n\n");
	    sort2(g);
        printf("  ");
	    sort(g);
	    printf("\n '     '\n\n");
	    choices();
	    do
	    {
	    	choices();
	        scanf("%d",&ch);
	        gemini(ch);
	        printf("\n DO YOU WANT TO CONTINUE? (YES OR NO)\n ");
	        scanf("%s",&confirm);
        }while(strcmp(confirm,"yes")==0);
	}
	else if((bdob->month==6&&(bdob->date>=21&&bdob->date<=30))||(bdob->month==7&&(bdob->date>=1&&bdob->date<=22)))
	{
		printf("\n\t\t\t\t::       *****************************************       ::");
    	printf("\n\n\n\t\t\t\t\t\t\t NAME: ");
	    scanf("%s",&bdob->name);
	    printf("\n\t\t\t\t\t\t\t Age: %d\n\n\n",a);
		printf("\n\n\t\t\t\t\t   Your horoscope sign is Cancer-The Crab\n");
		printf("\n\t\t\t\t\t\t\t .--.");
        printf("\n\t\t\t\t\t\t\t/    _`.");
        printf("\n\t\t\t\t\t\t\t(_) ( )");
        printf("\n\t\t\t\t\t\t\t'.    /");
        printf("\n\t\t\t\t\t\t\t  `--'\n\n");
        do
        {
	        choices();
	        scanf("%d",&ch);
	        cancer(ch);
	        printf("\n DO YOU WANT TO CONTINUE? (YES OR NO)\n  ");
	        scanf("%s",&confirm);
        }while(strcmp(confirm,"yes")==0);
	}
	else if((bdob->month==7&&(bdob->date>=23&&bdob->date<=31))||(bdob->month==8&&(bdob->date>=1&&bdob->date<=22)))
	{
		printf("\n\t\t\t\t::       *****************************************       ::");
    	printf("\n\n\n\t\t\t\t\t\t\t NAME: ");
	    scanf("%s",&bdob->name);
	    printf("\n\t\t\t\t\t\t\t Age: %d\n\n\n",a);
		printf("\n\n\t\t\t\t\t   Your horoscope sign is Leo-The Lion\n");
		printf("\n\t\t\t\t\t\t\t   .--.");
        printf("\n\t\t\t\t\t\t\t _(    )");
        printf("\n\t\t\t\t\t\t\t(_)   /");
        printf("\n\t\t\t\t\t\t\t     (_,\n\n");
        do
        {
	        choices();
	        scanf("%d",&ch);
	        leo(ch);
	        printf("\n DO YOU WANT TO CONTINUE? (YES OR NO)\n ");
	        scanf("%s",&confirm);
        }while(strcmp(confirm,"yes")==0);
	}
	else if((bdob->month==8&&(bdob->date>=23&&bdob->date<=31))||(bdob->month==9&&(bdob->date>=1&&bdob->date<=22)))
	{
		printf("\n\t\t\t\t::       *****************************************       ::");
    	printf("\n\n\n\t\t\t\t\t\t\t NAME: ");
	    scanf("%s",&bdob->name);
	    printf("\n\t\t\t\t\t\t\t Age: %d\n\n\n",a);
		printf("\n\n\t\t\t\t\t   Your horoscope sign is Virgo-The Virgin\n");
		printf("\n\t\t\t\t\t\t\t _");
        printf("\n\t\t\t\t\t\t\t' '.--.--.");
        printf("\n\t\t\t\t\t\t\t   |  |  |_");
        printf("\n\t\t\t\t\t\t\t   |  |  | )");
        printf("\n\t\t\t\t\t\t\t   |  |  |/");
        printf("\n\t\t\t\t\t\t\t        (J\n\n");
        do
        {
	        choices();
	        scanf("%d",&ch);
	        virgo(ch);
	        printf("\n DO YOU WANT TO CONTINUE? (YES OR NO)\n ");
	        scanf("%s",&confirm);
        }while(strcmp(confirm,"yes")==0);
	}
	else if((bdob->month==9&&(bdob->date>=23&&bdob->date<=30))||(bdob->month==10&&(bdob->date>=1&&bdob->date<=22)))
	{
		printf("\n\t\t\t\t::       *****************************************       ::");
    	printf("\n\n\n\t\t\t\t\t\t\t NAME: ");
	    scanf("%s",&bdob->name);
	    printf("\n\t\t\t\t\t\t\t Age: %d\n\n\n",a);
		printf("\n\n\t\t\t\t\t   Your horoscope sign is Libra-The Balance\n");
		printf("\n\t\t\t\t\t\t\t___.'````'.___");
        printf("\n\t\t\t\t\t\t\t______________\n\n");
        do
        {
	        choices();
	        scanf("%d",&ch);
	        libra(ch);
	        printf("\n DO YOU WANT TO CONTINUE? (YES OR NO)\n ");
	        scanf("%s",&confirm);
        }while(strcmp(confirm,"yes")==0);
	}
	else if((bdob->month==10&&(bdob->date>=23&&bdob->date<=31))||(bdob->month==11&&(bdob->date>=1&&bdob->date<=21)))
	{
		printf("\n\t\t\t\t::       *****************************************       ::");
    	printf("\n\n\n\t\t\t\t\t\t\t NAME: ");
	    scanf("%s",&bdob->name);
	    printf("\n\t\t\t\t\t\t\t Age: %d\n\n\n",a);
		printf("\n\n\t\t\t\t\t   Your horoscope sign is Scorpius-The Scorpion\n");
		printf("\n\t\t\t\t\t\t\t .-.--.--.");
        printf("\n \t\t\t\t\t\t\t  |  |  |");
        printf("\n\t\t\t\t\t\t\t   |  |  |");
        printf("\n\t\t\t\t\t\t\t   |  |  |  ...");
        printf("\n\t\t\t\t\t\t\t         `--':\n\n"); 
        do
        {
	        choices();
	        scanf("%d",&ch);
	        scorpio(ch);
	        printf("\n DO YOU WANT TO CONTINUE? (YES OR NO)\n ");
	        scanf("%s",&confirm);
        }while(strcmp(confirm,"yes")==0);
	}
	else if((bdob->month==11&&(bdob->date>=22&&bdob->date<=30))||(bdob->month==12&&(bdob->date>=1&&bdob->date<=21)))
	{
		printf("\n\t\t\t\t::       *****************************************       ::");
    	printf("\n\n\n\t\t\t\t\t\t\t NAME: ");
	    scanf("%s",&bdob->name);
	    printf("\n\t\t\t\t\t\t\t Age: %d\n\n\n",a);
		printf("\n\n\t\t\t\t\t   Your horoscope sign is Sagittarius-The Archer\n");
		                         
        printf("\n\t\t\t\t\t\t\t        ...");
        printf("\n\t\t\t\t\t\t\t        .':");
        printf("\n\t\t\t\t\t\t\t      .'");
        printf("\n\t\t\t\t\t\t\t    .'");
        printf("\n\t\t\t\t\t\t\t `.'");
        printf("\n\t\t\t\t\t\t\t.' `.\n\n");
        do
        {
			choices();
	        scanf("%d",&ch); 
	        sagittarius(ch);
	        printf("\n DO YOU WANT TO CONTINUE? (YES OR NO)\n ");
	        scanf("%s",&confirm);
        }while(strcmp(confirm,"yes")==0);
	}
	else if((bdob->month==12&&(bdob->date>=22&&bdob->date<=31))||(bdob->month==1&&(bdob->date>=1&&bdob->date<=19)))
	{
		printf("\n\t\t\t\t::       *****************************************       ::");
    	printf("\n\n\n\t\t\t\t\t\t\t NAME: ");
	    scanf("%s",&bdob->name);
	    printf("\n\t\t\t\t\t\t\t Age: %d\n\n\n",a);
		printf("\n\n\t\t\t\t\t   Your horoscope sign is Capricon-The Goat\n");
		printf("\n\t\t\t\t\t\t\t          _");
        printf("\n\t\t\t\t\t\t\t \\      /_)");
        printf("\n\t\t\t\t\t\t\t  \\    /`.");
        printf("\n\t\t\t\t\t\t\t   \\  /   ;");
        printf("\n\t\t\t\t\t\t\t    \\/ __.'\n\n");
        choices();
        do
        {
	        choices();
	        scanf("%d",&ch);
	        capricon(ch);
	        printf("\n DO YOU WANT TO CONTINUE? (YES OR NO)\n ");
	        scanf("%s",&confirm);
        }while(strcmp(confirm,"yes")==0);
	}
	else if((bdob->month==1&&(bdob->date>=20&&bdob->date<=31))||(bdob->month==2&&(bdob->date>=1&&bdob->date<=18)))
	{
		printf("\n\t\t\t\t::       *****************************************       ::");
    	printf("\n\n\n\t\t\t\t\t\t\t NAME: ");
	    scanf("%s",&bdob->name);
	    printf("\n\t\t\t\t\t\t\t Age: %d\n\n\n",a);
		printf("\n\n\t\t\t\t\t   Your horoscope sign is Aquarius-The Water Bearer\n");
		printf("\n\t\t\t\t\t\t\t..-""-._.-""-._.-");
        printf("\n\t\t\t\t\t\t\t ..-""-._.-""-._.-\n\n");
        do
        {
	        choices();
	        scanf("%d",&ch);
	        aquarius(ch);
	        printf("\n DO YOU WANT TO CONTINUE? (YES OR NO)\n ");
	        scanf("%s",&confirm);
        }while(strcmp(confirm,"yes")==0);
	}
	else if((bdob->month==2&&(bdob->date>=19&&bdob->date<=29))||(bdob->month==3&&(bdob->date>=1&&bdob->date<=20)))
	{
		printf("\n\t\t\t\t::       *****************************************       ::");
    	printf("\n\n\n\t\t\t\t\t\t\t NAME: ");
	    scanf("%s",&bdob->name);
	    printf("\n\t\t\t\t\t\t\t Age: %d\n\n\n",a);
		printf("\n\n\t\t\t\t\t   Your horoscope sign is Pisces-The Fishes\n");
		printf("\n\t\t\t\t\t\t\t`-.    .-'");
        printf("\n\t\t\t\t\t\t\t   :  :");
        printf("\n\t\t\t\t\t\t\t --:--:--");
        printf("\n\t\t\t\t\t\t\t   :  :");
        printf("\n\t\t\t\t\t\t\t.-`    `-.\n\n");
        do
        {
	        choices();
	        scanf("%d",&ch);
	        pisces(ch);
	        printf("\n DO YOU WANT TO CONTINUE? (YES OR NO)\n ");
	        scanf("%s",&confirm);
        }while(strcmp(confirm,"yes")==0);
        
	}
	else
	{
		printf("INVALID DATE OF BIRTH");
		exit(0);
	}
}
fortune()
{
	int lower = 1, upper = 28, count = 1; 
    srand(time(0)); 
    int i;
    for (i = 0; i < count; i++) 
    { 
        int num = (rand() % 
        (upper - lower + 1)) + lower;
        printf("\n->>(%d)", num); 
    }
    printf("\n\nThis is the Luckiest Day of every month in the Year to Do Everything.\n");
    printf("\nThis is numberology.Numerology is similar to astrology in that it attempts to predict the events,");
    printf("\n important dates of your life. Rather than going by zodiac signs, numerology,as the term implies,relies on math.\n");
    printf("\nIn numerology days run from one to 28 to determine things like your personality and your lifes path "
    "\nleap year is considered as unfortunate");
  

    return 0;
}
int age(int *by, int *bm, int *bd, int *cd, int *cm, int *cy)
{
	int y,month;
	
	if(*bd>*cd)
	{
		month=*cm-1;
	}
	if(*bm>*cm)
	{
		*cy=*cy-1;
	}
	if(*by>*cy)
	{
		printf("\n\t\t\t\tInvalid Current Date");
		exit(0);
	}
	
	y=*cy-*by;
	return y;
}
sort(int j)
{
	
	if(j>0)
	{
		sort( j-1);
		printf("_");
	}
	
}
sort2(int j)
{
	if(j>0)
	{
		sort2(j-2);
		printf("   | |\n");
	}
}
aries(int ch)
{
	switch(ch)
	{
		case 1:
			{
				printf("\nAries loves to be number one, so it’s no surprise that these audacious rams are the first sign of the zodiac.\n"
                "\n->> Bold and ambitious, Aries dives headfirst into even the most challenging situations.\n"
                "\n->>Aries is a passionate, motivated, and confident leader who builds community with their cheerful disposition"
                "\n and relentless determination.\n" 
                "\n->>Uncomplicated and direct in their approach, they often get frustrated by exhaustive details and unnecessary nuances.\n" 
                "\n->>Astrologers believe that each sign learns the lessons absorbed by its preceding signs, in the case of Aries,"
                "\n however, there is no inherited wisdom: Aries leads with blind optimism, barreling through life with an electric"
                "\n joy of living that perfectly complements their distinctive impulsivity.\n"
                "\n->>The Aries are the proverbial infants, guileless and optimistic to the fault.\n" 
                "\n->>However, Aries also are impatient, impetuous, vain, proud and egoistic. They may also be liable to come across"
                "\n as selfish, jealous, coarse, ruthless and violent.");
                break;
			}
		case 2:
			{
				char sex;
				printf("\nENTER YOUR GENDER(F/M): ");
				scanf("%s",&sex);
				if(sex=='M'|| sex=='m')
        	    {
        	    	printf("\nYour principle lucky stone is Ruby");
        	    	break;
			    }
			    else if(sex=='F'||sex=='f')
			    {
				    printf("\nyour principle lucky stone is Yellow Sapphire");
				    break;
			    }
			    else
			    {
				    printf("\nInvalid input: ");
				    break;
			    }
			}
		case 3:
			{
				printf("\nLuky Number(s): 9 and 27 are the lucky numbers for an Aries");
				break;
			}
		case 4:
		{
			printf("\nLucky Colour(s): Saffron and all shades of yellow");
			break;
		}
		case 5:
		{
			fortune();
			break;
		}
		case 6:
		{
			int lc;
			printf("\n\t______________________________________________________________________________________________________________"
        	"\n\t--------------------------------------------------------------------------------------------------------------");
	printf("\n\n\n\t\t\t\t1. ARIES \t\t\t 2. TAURUS ""\n\n\t\t\t\t3. GEMINI \t\t\t 4. CANCER"
	        "\n\n\t\t\t\t5. LEO \t\t\t\t 6. VIRGO ""\n\n\t\t\t\t7. LIBRA \t\t\t 8. SCORPIO"
			"\n\n\t\t\t\t9. SAGITTARIUS \t\t\t 10. CAPRICON""\n\n\t\t\t\t11. AQUARIUS \t\t\t 12. PISCES\n\n\n");
	printf("\t______________________________________________________________________________________________________________"
	"\n\t--------------------------------------------------------------------------------------------------------------");

			printf("\nCHOOSE YOUR PARTNER'S STAR: ");
			scanf("%d",&lc);
			ari(lc);
			break;
		}
		case 7:
			exit(1);
		default:
			printf("\nInvalid choice");
			break;
	}
}
tauras(int ch)
{
	switch(ch)
	{
		case 1:
			{
				printf("\nTaurus – the Wandering Bull Being the one who betrayed their best friend, goddess Hera herself, this is an"
                "\n unfortunate being that has to wander the Earth in order to find freedom.\n"
                "\n->>As if something was always poking them behind their back, reminding them of happiness that once was, stinging"
                "\n and pushing forwards, they close up in their own worlds, lonely and separated from their core.\n" 
                "\n\n->>Taurus is ruled by Venus, the enchanting planet that governs love, beauty, and money. The planet of love,"
                "\n attraction, beauty, satisfaction, creativity and gratitude.\n"
                "\n->>This tender nature will make Taurus an excellent cook, gardener, lover, and artist.\n"
                "\n->>They are loyal and don't like sudden changes, criticism or the chase of guilt people are often prone to,"
                "\n being somewhat dependable on other people and emotions they seem to be unable to let go of.\n"
                "\n->>Security is paramount for Taureans, and any threat to their stability will be sure to have a celestial bull seeing red.\n"
                "\n->>As a sign, Taurus is fixed, an astrological quality that reflects Taurus’s steadfast, loyal nature.\n"
                "\n->>Fixed signs are excellent at maintaining systems, and Taureans prioritize consistency and reliability in all areas of"
                "\n their lives.");
                break;
			}
		case 2:
			{
				char sex;
				printf("\nENTER YOUR GENDER(F/M): ");
				scanf("%s",&sex);
				if(sex=='M'||sex=='m')
        	    {
        	    	printf("\nYour principle lucky stone is Emerald");
        	    	break;
			    }
			    else if(sex=='F'||sex=='f')
			    {
				    printf("\nyour principle lucky stone is Emerald");
				    break;
			    }
			    else
			    {
				    printf("\nInvalid input: ");
				    break;
			    }
			}
		case 3:
			{
				printf("\nLuky Number(s): 2 and 12 are the lucky numbers for a Taurus");
				break;
			}
		case 4:
		{
			printf("\nLucky Colour(s):  Lotus Pink, pale green, pink, pale blue and all pastel shades are lucky for these natives.");
			break;
		}
		case 5:
		{
			fortune();
			break;
		}
		case 6:
		{
			int lc;
			printf("\n\t______________________________________________________________________________________________________________"
        	"\n\t--------------------------------------------------------------------------------------------------------------");
	printf("\n\n\n\t\t\t\t1. ARIES \t\t\t 2. TAURUS ""\n\n\t\t\t\t3. GEMINI \t\t\t 4. CANCER"
	        "\n\n\t\t\t\t5. LEO \t\t\t\t 6. VIRGO ""\n\n\t\t\t\t7. LIBRA \t\t\t 8. SCORPIO"
			"\n\n\t\t\t\t9. SAGITTARIUS \t\t\t 10. CAPRICON""\n\n\t\t\t\t11. AQUARIUS \t\t\t 12. PISCES\n\n\n");
	printf("\t______________________________________________________________________________________________________________"
	"\n\t--------------------------------------------------------------------------------------------------------------");

			printf("\nCHOOSE YOUR PARTNER'S STAR: ");
			scanf("%d",&lc);
			tau(lc);
			break;
		}
		case 7:
			exit(1);
		default:
			printf("\nInvalid choice");
			break;
	}
	
}
gemini(int ch)
{
	switch(ch)
	{
		case 1:
			{
				printf("\nAppropriately symbolized by the celestial twins, this air sign was interested in so many pursuits that it"
"\n had to double itself.\n" 
"\n->>Because of Geminis' intrinsic duality, they're often falsely misrepresented as two-faced.\n"
"\n->>In reality, however, Gemini rarely has hidden agendas.\n" 
"\n->>They are Expressive and quick-witted, Gemini represents two different personalities in one and you will never be sure"
"\n which one you will face.\n"
"\n->> Playful and intellectually curious, Gemini is constantly juggling a variety of passions, hobbies, careers, and friend groups.\n" 
"\n->>They are the social butterflies of the zodiac: These quick-witted twins can talk to anyone about anything."
"\n A fearless thinker, Gemini is always down to try something new.\n" 
"\n->>Gemini's changeable and open mind makes them excellent artists, especially writers and journalists, and their skills and"
"\n flexibility make them shine in trade, driving and team sports.");
                break;
			}
		case 2:
			{
				char sex;
				printf("\nENTER YOUR GENDER(F/M): ");
				scanf("%s",&sex);
				if(sex=='M'||sex=='m')
        	    {
        	    	printf("\nYour principle lucky stone is Pearl");
        	    	break;
			    }
			    else if(sex=='F'||sex=='f')
			    {
				    printf("\nyour principle lucky stone is Emerald");
				    break;
			    }
			    else
			    {
				    printf("\nInvalid input: ");
				    break;
			    }
			}
		case 3:
			{
				printf("\nLuky Number(s): 5, 14 and 7 are the lucky numbers for a Gemini");
				break;
			}
		case 4:
		{
			printf("\nLucky Colour(s): Wearing yellow and green bring luck and prosperity to Geminis. ");
			break;
		}
		case 5:
		{
			fortune();
			break;
		}
		case 6:
		{
			int lc;
			printf("\n\t______________________________________________________________________________________________________________"
        	"\n\t--------------------------------------------------------------------------------------------------------------");
	printf("\n\n\n\t\t\t\t1. ARIES \t\t\t 2. TAURUS ""\n\n\t\t\t\t3. GEMINI \t\t\t 4. CANCER"
	        "\n\n\t\t\t\t5. LEO \t\t\t\t 6. VIRGO ""\n\n\t\t\t\t7. LIBRA \t\t\t 8. SCORPIO"
			"\n\n\t\t\t\t9. SAGITTARIUS \t\t\t 10. CAPRICON""\n\n\t\t\t\t11. AQUARIUS \t\t\t 12. PISCES\n\n\n");
	printf("\t______________________________________________________________________________________________________________"
	"\n\t--------------------------------------------------------------------------------------------------------------");

			printf("\nCHOOSE YOUR PARTNER'S STAR: ");
			scanf("%d",&lc);
			gem(lc);
			break;
		}
		case 7:
			exit(1);
		default:
			printf("\nInvalid choice");
			break;
	}
}
cancer(int ch)
{
	switch(ch)
	{
		case 1:
			{
				printf("\n Cancer is a cardinal water sign. Represented by the crab, this oceanic crustacean seamlessly weaves between"
"\n the sea and shore, representing Cancer’s ability to exist in both emotional and material realms.\n"
"\n->> Cancers are highly intuitive, and their psychic abilities manifest in tangible spaces: For instance,"
"\n Cancers can effortlessly pick up the energies of a room.\n"
"\n->> These crabs are highly sensitive to their environments, as well as extremely self-protective.\n"
"\n->> At first, these crabs may be perceived as cold or distant. With time, though, Cancers reveal their gentle nature,"
"\n genuine compassion, and mystical capabilities.\n"
"\n->> Cancer is ruled by the moon, the celestial body that represents comfort, self-care, and maternal energies.\n"
"\n->> They love to create cozy, safe spaces that serve as their personal sanctuaries, then spend lots of time in them.\n"
"\n->> Cancers care deeply about their families and are quick to adopt caregiver roles. They attract friends and lovers"
"\n through their loyalty, commitment, and emotional depth.\n"
"\n->> It may be difficult to convince a Cancer to talk openly about what's bothering them, but if you can do it without"
"\n making them feel threatened, you'll build long-lasting trust.");
                break;
			}
		case 2:
			{
				char sex;
				printf("\nENTER YOUR GENDER(F/M): ");
				scanf("%s",&sex);
				if(sex=='M'||sex=='m')
        	    {
        	    	printf("\nYour principle lucky stone is Pearl");
        	    	break;
			    }
			    else if(sex=='F'||sex=='f')
			    {
				    printf("\nyour principle lucky stone is Sodalite");
				    break;
			    }
			    else
			    {
				    printf("\nInvalid input: ");
				    break;
			    }
			}
		case 3:
			{
				printf("\nLuky Number(s): 2, 7 and 9 are lucky for Cancerians");
				break;
			}
		case 4:
		{
			printf("\nLucky Colour(s): Violet");
			break;
		}
		case 5:
		{
			fortune();
			break;
		}
		case 6:
		{
			int lc;
			printf("\n\t______________________________________________________________________________________________________________"
        	"\n\t--------------------------------------------------------------------------------------------------------------");
	printf("\n\n\n\t\t\t\t1. ARIES \t\t\t 2. TAURUS ""\n\n\t\t\t\t3. GEMINI \t\t\t 4. CANCER"
	        "\n\n\t\t\t\t5. LEO \t\t\t\t 6. VIRGO ""\n\n\t\t\t\t7. LIBRA \t\t\t 8. SCORPIO"
			"\n\n\t\t\t\t9. SAGITTARIUS \t\t\t 10. CAPRICON""\n\n\t\t\t\t11. AQUARIUS \t\t\t 12. PISCES\n\n\n");
	printf("\t______________________________________________________________________________________________________________"
	"\n\t--------------------------------------------------------------------------------------------------------------");

			printf("\nCHOOSE YOUR PARTNER'S STAR: ");
			scanf("%d",&lc);
			can(lc);
			break;
		}
		case 7:
			exit(1);
		default:
			printf("\nInvalid choice");
			break;
	}
}
leo(int ch)
{
	switch(ch)
	{
		case 1:
			{
				printf("\n Leo is represented by the lion, and these spirited fire signs are the kings and queens of the celestial jungle.\n"
"\n->> They’re delighted to embrace their royal status: Vivacious, theatrical, and passionate, Leos love to bask in"
"\n the spotlight and celebrate themselves.\n"
"\n->> These lions are natural leaders, and they enjoy cultivating friendships and romances that are artistically"
"\n and creatively inspired.\n"
"\n->> These astrological divas never get tired of lavish dinners, exclusive parties, or decadent designer wear.\n"
"\n->> Leo is ruled by the sun, the dazzling celestial body that governs life and vitality.\n"
"\n->> They are dedicated friends and lovers who put their heart into every relationship.\n"
"\n->> Fearless optimists who refuse to accept failure, Leos will find their deep wells of courage grow as they mature.");
                break;
			}
		case 2:
			{
				char sex;
				printf("\nENTER YOUR GENDER(F/M): ");
				scanf("%s",&sex);
				if(sex=='M'||sex=='m')
        	    {
        	    	printf("\nThe stone which is lucky for you is peridot ");
        	    	break;
			    }
			    else if(sex=='F'||sex=='f')
			    {
				    printf("\nYour principle lucky stone is Pearl");
				    break;
			    }
			    else
			    {
				    printf("\nInvalid input: ");
				    break;
			    }
			}
		case 3:
			{
				printf("\nLuky Number(s): 13 is the lucky number for a leo");
				break;
			}
		case 4:
		{
			printf("\nLucky Colour(s): Gold, Yellow and Orange");
			break;
		}
		case 5:
		{
			fortune();
			break;
		}
		case 6:
		{
			int lc;
			printf("\n\t______________________________________________________________________________________________________________"
        	"\n\t--------------------------------------------------------------------------------------------------------------");
	printf("\n\n\n\t\t\t\t1. ARIES \t\t\t 2. TAURUS ""\n\n\t\t\t\t3. GEMINI \t\t\t 4. CANCER"
	        "\n\n\t\t\t\t5. LEO \t\t\t\t 6. VIRGO ""\n\n\t\t\t\t7. LIBRA \t\t\t 8. SCORPIO"
			"\n\n\t\t\t\t9. SAGITTARIUS \t\t\t 10. CAPRICON""\n\n\t\t\t\t11. AQUARIUS \t\t\t 12. PISCES\n\n\n");
	printf("\t______________________________________________________________________________________________________________"
	"\n\t--------------------------------------------------------------------------------------------------------------");

			printf("\nCHOOSE YOUR PARTNER'S STAR: ");
			scanf("%d",&lc);
			le(lc);
			break;
		}
		case 7:
			exit(1);
		default:
			printf("\nInvalid choice");
			break;
	}
}
virgo(int ch)
{
	switch(ch)
	{
		case 1:
			{
				printf("\n Virgo is an earth sign historically represented by the goddess of wheat and agriculture, an association that"
"\n speaks to Virgo’s deep-rooted presence in the material world.\n"
"\n->> Virgos are logical, practical, and systematic in their approach to life.\n"
"\n->> This earth sign is a perfectionist at heart and isn’t afraid to improve skills through diligent and consistent practice.\n"
"\n->> Virgo is governed by Mercury, the messenger planet of communication.\n"
"\n->> Though Mercury also rules Gemini, these two signs are radically different: Gemini is about output and expression,"
"\n whereas Virgo is about input and processing.\n"
"\n->> Though Virgos long to be meticulous in all pursuits, they must remember that constantly chasing after the ideal"
"\n can be destructive when applied to self or others.\n"
"\n->> Beauty exists within our imperfections, and it’s important for Virgos to learn that flaws are not defects.\n"
"\n->> They are kind, gentle, and supportive friends and lovers who use their incredible intellect and resourcefulness"
"\n to problem-solve.\n"
"\n->> Methodical, committed, and hardworking, they make excellent teachers, healers, editors, and musicians.");
                break;
			}
		case 2:
			{
				char sex;
				printf("\nENTER YOUR GENDER(F/M): ");
				scanf("%s",&sex);
				if(sex=='M'||sex=='m')
        	    {
        	    	printf("\nYour principle lucky stone is Carnelian");
        	    	break;
			    }
			    else if(sex=='F'||sex=='f')
			    {
				    printf("\nyour principle lucky stone is gold topaz");
				    break;
			    }
			    else
			    {
				    printf("\nInvalid input: ");
				    break;
			    }
			}
		case 3:
			{
				printf("\nLuky Number(s): 3, 6 and 7 are lucky numbers for Virgo natives. ");
				break;
			}
		case 4:
		{
			printf("\nLucky Colour(s): Wearing green, white and yellow colored clothes can bring lots of luck for Virgo natives.");
			break;
		}
		case 5:
		{
			fortune();
			break;
		}
		case 6:
		{
			int lc;
			printf("\n\t______________________________________________________________________________________________________________"
        	"\n\t--------------------------------------------------------------------------------------------------------------");
	printf("\n\n\n\t\t\t\t1. ARIES \t\t\t 2. TAURUS ""\n\n\t\t\t\t3. GEMINI \t\t\t 4. CANCER"
	        "\n\n\t\t\t\t5. LEO \t\t\t\t 6. VIRGO ""\n\n\t\t\t\t7. LIBRA \t\t\t 8. SCORPIO"
			"\n\n\t\t\t\t9. SAGITTARIUS \t\t\t 10. CAPRICON""\n\n\t\t\t\t11. AQUARIUS \t\t\t 12. PISCES\n\n\n");
	printf("\t______________________________________________________________________________________________________________"
	"\n\t--------------------------------------------------------------------------------------------------------------");

			printf("\nCHOOSE YOUR PARTNER'S STAR: ");
			scanf("%d",&lc);
			vir(lc);
			break;
		}
		case 7:
			exit(1);
		default:
			printf("\nInvalid choice");
			break;
	}
}
libra(int ch)
{
	switch(ch)
	{
		case 1:
			{
				printf("\n Libra is an air sign represented by the scales, an association that reflects Libra's fixation on balance"
"\n and harmony.\n" 
"\n->> These air signs are the aesthetes of the zodiac: Ruled by Venus, the planet that governs love, beauty, and money,"
"\n Libras adore high art, intellectualism, and connoisseurship.\n" 
"\n->> Accordingly, these air signs make excellent designers, decorators, art critics, and stylists.\n"
"\n->> People born under the sign of Libra are peaceful, fair, and they hate being alone. \n"
"\n->> Relationships are paramount for Libras, who find balance in companionship.\n"
"\n->> They love harmonious partnerships with fashionable mates, especially those who make attractive arm candy.\n"
"\n->> Libra is a cardinal sign, which means Libras are accordingly great at launching new initiatives. Because Libras"
"\n consider multiple perspectives in all pursuits, however, these air signs struggle with indecision.\n"
"\n->> Instead of constantly seeking outside perspectives, Libras would do well to develop (and trust) their own intuition.\n"
"\n->> There is something awfully insecure about Libra, as if they were unsure which plate to burden next, aware that things"
"\n pass and teach us to be careful around other people");
                break;
			}
		case 2:
			{
				char sex;
				printf("\nENTER YOUR GENDER(F/M): ");
				scanf("%s",&sex);
				if(sex=='M'||sex=='m')
        	    {
        	    	printf("\nYour principle lucky stone is Opal");
        	    	break;
			    }
			    else if(sex=='F'||sex=='f')
			    {
				    printf("\nyour principle lucky stone is Opal");
				    break;
			    }
			    else
			    {
				    printf("\nInvalid input: ");
				    break;
			    }
			}
		case 3:
			{
				printf("\nLuky Number(s): 4,6 and 25 are the lucky numbers for a libra");
				break;
			}
		case 4:
		{
			printf("\nLucky Colour(s):  Colors which can bring auspicious result for Libras are Orange and White.");
			break;
		}
		case 5:
		{
			fortune();
			break;
		}
		case 6:
		{
			int lc;
			printf("\n\t______________________________________________________________________________________________________________"
        	"\n\t--------------------------------------------------------------------------------------------------------------");
	printf("\n\n\n\t\t\t\t1. ARIES \t\t\t 2. TAURUS ""\n\n\t\t\t\t3. GEMINI \t\t\t 4. CANCER"
	        "\n\n\t\t\t\t5. LEO \t\t\t\t 6. VIRGO ""\n\n\t\t\t\t7. LIBRA \t\t\t 8. SCORPIO"
			"\n\n\t\t\t\t9. SAGITTARIUS \t\t\t 10. CAPRICON""\n\n\t\t\t\t11. AQUARIUS \t\t\t 12. PISCES\n\n\n");
	printf("\t______________________________________________________________________________________________________________"
	"\n\t--------------------------------------------------------------------------------------------------------------");

			printf("\nCHOOSE YOUR PARTNER'S STAR: ");
			scanf("%d",&lc);
			lib(lc);
			break;
		}
		case 7:
			exit(1);
		default:
			printf("\nInvalid choice");
			break;
	}
}
scorpio(int ch)
{
	switch(ch)
	{
		case 1:
			{
				printf("\n Scorpio is one of the most misunderstood signs of the zodiac. Because of its incredible passion and power,"
"\n Scorpio is often mistaken for a fire sign.\n"
"\n->> In fact, Scorpio is a water sign that derives its strength from the psychic, emotional realm.\n"
"\n->> Like their celestial spirit animal, the scorpion, Scorpios lie in wait and strike when least expected.\n"
"\n->> Scorpios simply know what they want and aren't afraid to work hard and play the long game to get it. They never show"
"\n their cards, and their enigmatic nature is what makes them so seductive and beguiling.\n"
"\n->> They never show their cards, and their enigmatic nature is what makes them so seductive and beguiling.\n"
"\n->> Scorpio is ruled by Pluto, the planet that governs both destruction and transformation.\n"
"\n->> On a good day, Scorpionic energy is ambitious and enticing. On a bad day, however, the shadowy side of Scorpio"
"\n is fueled by a relentless desire for control.\n"
"\n->> This sign is at its best when its intrinsic intensity is applied to deep, soulful connections with friends and lovers.");
                break;
			}
		case 2:
			{
				char sex;
				printf("\nENTER YOUR GENDER(F/M): ");
				scanf("%s",&sex);
				if(sex=='M'||sex=='m')
        	    {
        	    	printf("\nthe stone which is lucky for you is Topaz ");
        	    	break;
			    }
			    else if(sex=='F'||sex=='f')
			    {
				    printf("\nThe stone which is lucky for you is Citrine");
				    break;
			    }
			    else
			    {
				    printf("\nInvalid input: ");
				    break;
			    }
			}
		case 3:
			{
				printf("\nLuky Number(s): 7 is the lucky numbers for a Scorpio ");
				break;
			}
		case 4:
		{
			printf("\nLucky Colour(s): Yellow, Red and Orange proves to be auspicious colors for Scorpio natives");
			break;
		}
		case 5:
		{
			fortune();
			break;
		}
		case 6:
		{
			int lc;
			printf("\n\t______________________________________________________________________________________________________________"
        	"\n\t--------------------------------------------------------------------------------------------------------------");
	printf("\n\n\n\t\t\t\t1. ARIES \t\t\t 2. TAURUS ""\n\n\t\t\t\t3. GEMINI \t\t\t 4. CANCER"
	        "\n\n\t\t\t\t5. LEO \t\t\t\t 6. VIRGO ""\n\n\t\t\t\t7. LIBRA \t\t\t 8. SCORPIO"
			"\n\n\t\t\t\t9. SAGITTARIUS \t\t\t 10. CAPRICON""\n\n\t\t\t\t11. AQUARIUS \t\t\t 12. PISCES\n\n\n");
	printf("\t______________________________________________________________________________________________________________"
	"\n\t--------------------------------------------------------------------------------------------------------------");

			printf("\nCHOOSE YOUR PARTNER'S STAR: ");
			scanf("%d",&lc);
			scp(lc);
			break;
		}
		case 7:
			exit(1);
		default:
			printf("\nInvalid choice");
			break;
	}
}
sagittarius(int ch)
{
	switch(ch)
	{
		case 1:
			{
				printf("\n Represented by the archer, Sagittarians are always on a quest for knowledge. The last fire sign of the zodiac,"
"\n Sagittarius launches its many pursuits like blazing arrows, chasing after geographical, intellectual, and "
"\nspiritual adventures.\n"
"\n->> Fueled by wanderlust, these archers can be found traversing all corners of the world on thrill-seeking expeditions.\n"
"\n->> It's no surprise that Jupiter, the planet of abundance, spirituality, and growth, governs Sagittarius.\n"
"\n->> With so many journeys under their belt, Sagittarians are excellent storytellers and can light up any room with their"
"\n exhilarating tales and infectious laughter.\n"
"\n->> Sags easily attract friends and lovers with their senses of humor.\n"
"\n->> They're the comedians of the zodiac and infuse all of their conversations with wit and ""no bullshit"" bluntness.\n"
"\n->> Though they know a lot, they don’t know everything — and if they're not careful, they can come off as pretentious or arrogant.\n"
"\n->> Sagittarians are born to explore, and it is critical that these archers have the freedom to roam.\n"
"\n->> If you are lucky enough to link up with one of these archers, be sure to buckle up and have your passport ready."
"\n With Sagittarius, it’s always a wild ride.");
                break;
			}
		case 2:
			{
				char sex;
				printf("\nENTER YOUR GENDER(F/M): ");
				scanf("%s",&sex);
				if(sex=='M'||sex=='m')
        	    {
        	    	printf("\nYour principle lucky stone is Emerald");
        	    	break;
			    }
			    else if(sex=='F'||sex=='f')
			    {
				    printf("\nyour principle lucky stone is Amethyst");
				    break;
			    }
			    else
			    {
				    printf("\nInvalid input: ");
				    break;
			    }
			}
		case 3:
		{
			printf("\nLuky Number(s): 6 and 5 are said to be the lucky numbers ");
			break;
		}
		case 4:
		{
			printf("\nLucky Colour(s): Light Blue and cream");
			break;
		}
		case 5:
		{
			fortune();
			break;
		}
		case 6:
		{
			int lc;
			printf("\n\t______________________________________________________________________________________________________________"
        	"\n\t--------------------------------------------------------------------------------------------------------------");
	printf("\n\n\n\t\t\t\t1. ARIES \t\t\t 2. TAURUS ""\n\n\t\t\t\t3. GEMINI \t\t\t 4. CANCER"
	        "\n\n\t\t\t\t5. LEO \t\t\t\t 6. VIRGO ""\n\n\t\t\t\t7. LIBRA \t\t\t 8. SCORPIO"
			"\n\n\t\t\t\t9. SAGITTARIUS \t\t\t 10. CAPRICON""\n\n\t\t\t\t11. AQUARIUS \t\t\t 12. PISCES\n\n\n");
	printf("\t______________________________________________________________________________________________________________"
	"\n\t--------------------------------------------------------------------------------------------------------------");

			printf("\nCHOOSE YOUR PARTNER'S STAR: ");
			scanf("%d",&lc);
			sag(lc);
			break;
		}
		case 7:
			exit(1);
		default:
			printf("\nInvalid choice");
			break;
	}
}
capricon(int ch)
{
	switch(ch)
	{
		case 1:
			{
				printf("\n The last earth sign of the zodiac, Capricorn is represented by the sea goat, a mythological creature with the"
"\n body of a goat and tail of a fish.\n"
"\n->> Capricorns are skilled at navigating both the material and emotional realms."
"\n->> Sea goats must remember that not every success in life can be featured on a résumé and that compassion is as"
"\n important as any professional advancement.\n"
"\n->> Capricorn is ruled by taskmaster Saturn, the stoic planet that governs time and restrictions.\n"
"\n->> With Saturn guiding the Capricorn constellation, many sea goats were exposed to difficulties at an early age.\n"
"\n->> Interestingly, Capricorns are said to age backward: Having already endured hardships, Capricorns become increasingly"
"\n youthful, optimistic, and playful as they mature.\n"
"\n->> It’s important for Capricorn to maintain a healthy work-life balance and avoid treating their friends and partners"
"\n like their assistants.");
                break;
			}
		case 2:
			{
				char sex;
				printf("\nENTER YOUR GENDER(F/M): ");
				scanf("%s",&sex);
				if(sex=='M'||sex=='m')
        	    {
        	    	printf("\nYour principle lucky stone is blue sapphire");
        	    	break;
			    }
			    else if(sex=='F'||sex=='f')
			    {
				    printf("\nyour principle lucky stone is Garnet");
				    break;
			    }
			    else
			    {
				    printf("\nInvalid input: ");
				    break;
			    }
			}
		case 3:
			{
				printf("\nLuky Number(s):13 is the lucky numbers for a Capricon ");
				break;
			}
		case 4:
		{
			printf("\nLucky Colour(s): red and blue");
			break;
		}
		case 5:
		{
			fortune();
			break;
		}
		case 6:
		{
			int lc;
			printf("\n\t______________________________________________________________________________________________________________"
        	"\n\t--------------------------------------------------------------------------------------------------------------");
	printf("\n\n\n\t\t\t\t1. ARIES \t\t\t 2. TAURUS ""\n\n\t\t\t\t3. GEMINI \t\t\t 4. CANCER"
	        "\n\n\t\t\t\t5. LEO \t\t\t\t 6. VIRGO ""\n\n\t\t\t\t7. LIBRA \t\t\t 8. SCORPIO"
			"\n\n\t\t\t\t9. SAGITTARIUS \t\t\t 10. CAPRICON""\n\n\t\t\t\t11. AQUARIUS \t\t\t 12. PISCES\n\n\n");
	printf("\t______________________________________________________________________________________________________________"
	"\n\t--------------------------------------------------------------------------------------------------------------");

			printf("\nCHOOSE YOUR PARTNER'S STAR: ");
			scanf("%d",&lc);
			cap(lc);
			break;
		}
		case 7:
			exit(1);
		default:
			printf("\nInvalid choice");
			break;
	}
}
aquarius(int ch)
{
	switch(ch)
	{
		case 1:
			{
				printf("\n Aquarius is represented by the water bearer, the mystical healer who bestows water, or life, upon the land.\n"
"\n->> Accordingly, Aquarius is the most humanitarian astrological sign.\n"
"\n->> Every Aquarian is a rebel at heart: These air signs despise authority and anything that represents conventionality.\n"
"\n->> Free-spirited and eccentric, they can often be identified by their offbeat fashion sensibilities, unusual hobbies,"
"\n and nonconformist attitude.\n"
"\n->> Aquarius is ruled by Uranus, the planet that governs innovation, technology, and surprising events.\n"
"\n->> Uranus perfectly mirrors Aquarius's distinctive attitude, complementing the nontraditional nature of these"
"\n visionary air signs.\n"
"\n->> Aquarians are big thinkers, but mustn't forget their immediate surroundings.\n"
"\n->> These water bearers can become so focused on implementing widespread reform that they neglect their family and"
"\n friends, gaining a reputation for being aloof and distant in relationships.\n"
"\n->> To win an Aquarian's trust, don't try to reign in their quirks or keep them from flying their freak flag"
"\n high — Aquarius thrives on shock value.");
                break;
			}
		case 2:
			{
				char sex;
				printf("\nENTER YOUR GENDER(F/M): ");
				scanf("%s",&sex);
				if(sex=='M'||sex=='m')
        	    {
        	    	printf("\nYour principle lucky stone is Garnet.");
        	    	break;
			    }
			    else if(sex=='F'||sex=='f')
			    {
				    printf("\nyour principle lucky stone is Amethyst");
				    break;
			    }
			    else
			    {
				    printf("\nInvalid input: ");
				    break;
			    }
			}
		case 3:
			{
				printf("\nLuky Number(s): 3, 9 and 2 are the lucky numbers for an Aquarius ");
				break;
			}
		case 4:
		{
			printf("\nLucky Colour(s): Yellow and red colored clothes must be"
			"\n worn by an Aquarius native in order to gain more luck.");
			break;
		}
		case 5:
		{
			fortune();
			break;
		}
		case 6:
		{
			int lc;
			printf("\n\t______________________________________________________________________________________________________________"
        	"\n\t--------------------------------------------------------------------------------------------------------------");
	printf("\n\n\n\t\t\t\t1. ARIES \t\t\t 2. TAURUS ""\n\n\t\t\t\t3. GEMINI \t\t\t 4. CANCER"
	        "\n\n\t\t\t\t5. LEO \t\t\t\t 6. VIRGO ""\n\n\t\t\t\t7. LIBRA \t\t\t 8. SCORPIO"
			"\n\n\t\t\t\t9. SAGITTARIUS \t\t\t 10. CAPRICON""\n\n\t\t\t\t11. AQUARIUS \t\t\t 12. PISCES\n\n\n");
	printf("\t______________________________________________________________________________________________________________"
	"\n\t--------------------------------------------------------------------------------------------------------------");

			printf("\nCHOOSE YOUR PARTNER'S STAR: ");
			scanf("%d",&lc);
			aqu(lc);
			break;
		}
		case 7:
			exit(1);
		default:
			printf("\nInvalid choice");
			break;
	}
}
pisces(int ch)
{
	switch(ch)
	{
		case 1:
			{
				printf("\n Pisces, a water sign, is the last constellation of the zodiac."
"\n->> It's symbolized by two fish swimming in opposite directions, representing the constant division of Pisces's"
"\n attention between fantasy and reality.\n"
"\n->> With such immense sensitivity, Pisces can easily become swallowed by emotions and must remember to stay grounded"
"\n in the material realm.\n"
"\n->> Pisces is ruled by Neptune, the celestial body that governs creativity and dreams, and these ethereal fish adore"
"\n exploring their boundless imaginations.\n"
"\n->> Pisces must be wary of mirages: These impressionable fish prefer wearing rose-colored glasses to addressing problems,"
"\n which can earn Pisces a reputation for being flaky or delusional.\n"
"\n->> This water sign should remember that problems can't be solved by swimming away. Willful ignorance never makes conflict"
"\n disappear: It only gives it the chance to grow.\n"
"\n->> Pisces effortlessly adapts to their surroundings.\n"
"\n->> Kind and gentle, they're invigorated by shared experiences of music and romance.");
                break;
			}
		case 2:
			{
				char sex;
				printf("\nENTER YOUR GENDER(F/M): ");
				scanf("%s",&sex);
				if(sex=='M'||sex=='m')
        	    {
        	    	printf("\nThe stone which is lucky for you is Aquamarine ");
        	    	break;
			    }
			    else if(sex=='F'||sex=='f')
			    {
				    printf("\nThe stone which is lucky for you is Aquamarine ");
				    break;
			    }
			    else
			    {
				    printf("\nInvalid input: ");
				    break;
			    }
			}
		case 3:
			{
				printf("\nLuky Number(s): 4 is the lucky number for a Pisces ");
				break;
			}
		case 4:
		{
			printf("\nLucky Colour(s): Light green");
			break;
		}
		case 5:
		{
			fortune();
			break;
		}
		case 6:
		{
			int lc;
			printf("\n\t______________________________________________________________________________________________________________"
        	"\n\t--------------------------------------------------------------------------------------------------------------");
	printf("\n\n\n\t\t\t\t1. ARIES \t\t\t 2. TAURUS ""\n\n\t\t\t\t3. GEMINI \t\t\t 4. CANCER"
	        "\n\n\t\t\t\t5. LEO \t\t\t\t 6. VIRGO ""\n\n\t\t\t\t7. LIBRA \t\t\t 8. SCORPIO"
			"\n\n\t\t\t\t9. SAGITTARIUS \t\t\t 10. CAPRICON""\n\n\t\t\t\t11. AQUARIUS \t\t\t 12. PISCES\n\n\n");
	printf("\t______________________________________________________________________________________________________________"
	"\n\t--------------------------------------------------------------------------------------------------------------");

			printf("\nCHOOSE YOUR PARTNER'S STAR: ");
			scanf("%d",&lc);
			pis(lc);
			break;
		}
		case 7:
			exit(1);
		default:
			printf("\nInvalid choice");
			break;
	}
}
int ari(int lc)
{
	switch(lc)
	{
		case 1:
			{
				printf("\n->> Ram to ram relationships also stand a great chance of success, but this hinges on one crucial fact:"
                "\n how well the ram likes his or her own self.\n"
                "\n->> Aries will see many of their own strongest qualities reflected in other Aries.\n"
                "\n->> When two rams get together, it can either be a wonderful, energetic union or it can be a recipe for disaster,"
                "\n as neither of them will want to play the supporting role in the relationship.\n" 
                "\n->> Generally speaking, if you're comfortable in your own skin, and you're willing to let the other person take"
                "\n the lead sometimes, an Aries to Aries combination is equally yoked and capable of traveling great distances together.\n");
                break;
			}
		case 2:
		{
			printf("->> If there is a Taurus and Aries relationship in the works, you can be safe in assuming it has very few chances of"
            "\n going down a dirt road.\n"
            "\n->> Taurus is a sign of the element earth, while Aries belongs to fire.\n"
            "\n->> Earth is best fostered by water, and similarly, fire breathes the best in the air. This combination of fire"
            "\n and earth for Taurus and Aries thus becomes difficult at times due to the restraints that these two signs show.\n" 
            "\n->> Aries can’t be called the most compatible with Taurus among zodiac signs. This reason exists because of a mismatch"
            "\n between the elements that these two zodiac signs belong to.\n");
			break;
		}
		case 3:
		{
			printf("\n->> The twins are known for their adaptability, a trait that easily follows Aries' need to lead their closest companions"
            "\n down new paths.\n"
            "\n->> An Aries-Gemini match will often result in a vibrant relationship that is full of activity and vitality.\n"
            "\n->> Aries and Gemini will love sharing in their mutual thirst for knowledge and breaking new ground together.\n"
            "\n->> Geminis are also celebrated for their personal charm, traits the discerning ram is also capable of fully appreciating.\n");
			break;
		}
		case 4:
		{
			printf("\n->> Cancers are known for running the gamut of emotions; sometimes thoughtful, sometimes downright hysterical.\n"
            "\n->> Aries is typically too straightforward to deal with this type of emotional see-saw for very long, making it difficult for this"
            "\n pairing to maintain a connection.\n"
            "\n->> Cancer is water. Aries is fire. You'd think this is one of the most opposite pairing of the zodiac, but when it comes to friendship,"
            "\n Aries and Cancer are surprisingly wonderful for each other.\n");
			break;
		}
		case 5:
		{
			printf("\n->> A relationship between an Aries and a Leo is filled with passion and energy.\n"
            "\n->> Both signs are dynamic and adventurous, and there is always a healthy competitive spirit between them.\n"
            "\n->> An Aries-Leo friendship is all about healthy competition, sizzling passion, and domination.\n"
            "\n->> If Leo and Aries can master the fine art of learning to share the spotlight with one another, and can learn to give as well as"
            "\n they get when it comes to admiration and praise, this can be a highly energetic and special union.\n");
			break;
		}
		case 6:
		{
			printf("\n->> Aries can be very straightforward and honorable that can make them Virgo best love match, as they also enjoy a faithful and"
            "\n trustworthy partner.\n" 
            "\n->> Virgo and Aries partners can have a strong companionship with each other by offering honesty and getting honesty in return.\n");
			break;
		}
		case 7:
		{
			printf("\n->> That old saying that opposites attract is certainly true. People are often entranced by their polar opposites, and while"
            "\n the novelty of this kind of relationship can bring us together for a time, it can be difficult to bond in the long term.\n"
            "\n->> Aries and Libra often find that they have a strong initial connection but what seems refreshing in the beginning can wear"
            "\n thin and grate on nerves as time goes on.\n"
            "\n->> However, if Aries begins to put too many demands on fun-loving Libra in other areas of the relationship, Libra’s fickle"
            "\n streak will most certainly lead to a desire to seek greener pastures.\n");
			break;
		}
		case 8:
		{
			printf("\n->> They both like power, and this sometimes leads to conflicts between them. But if they learn to cooperate with instead"
            "\n of fighting against each other, they can go far.\n"
            "\n->> Both signs show a forceful nature behind a calm personality that has passionate undertones. They are often called two sides"
            "\n of the same coin as they are both ruled by their instincts.\n"
            "\n->> While the instinctual traits form their strongest bonds together, they can also form a compatible relationship because of"
            "\n the radical traits of Aries that bring the suppressed fire of Scorpio out of their bonds.\n");
			break;
		}
		case 9:
		{
			printf("\n->> Sagittarius, the archer is another highly energetic sign and one of the most compatible signs that can match Aries’s"
            "\n natural gusto all the way and Aries should consider when searching out relationships that will bear fruit.\n"
            "\n->> Both love being social, active, and living by the seat of their pants, so this relationship is one that is sure to be"
            "\n filled with fun and discovery.\n"
            "\n->> Sagittarians share a certain love of freedom with Aries that will help the two of them conquer new territory together.\n");
			break;
		}
		case 10:
		{
			printf("\n->> Caps tend to be solid as a rock, so in most cases they won't appreciate Aries' capacity for head on collisions,"
            "\n no matter how convincing the ram can be in arguing for his/her position.\n"
            "\n->> Both Capricorn and Aries are natural-born leaders, but unfortunately they have very different ways of going about"
            "\n it and can’t help but lock horns.\n"
            "\n->> These two are very likely to fight over money manners, as Aries is something of a spendthrift, while Capricorn is very frugal.\n"
            "\n->> Aries also likes variety and novelty, while Capricorn is staunchly traditional, providing even more fertile ground for discord."
            "\n In short, these two are opposites in all the wrong ways.");
			break;
		}
		case 11:
		{
			printf("\n->> They both are strong thinking signs, but from different angles. This relationship can have a lot of yin and yang,"
            "\n with Aries being a fire-sign—an uncannily strong, leading force.\n"
            "\n->> Aries have a certain boss-like mentality that goes well with Aquarius, which can be more peaceful, yin-like, and unique.\n"
            "\n->> Aquarius' need for personal space dovetails nicely with Aries' love of freedom.\n"
            "\n->> Their mutual respect for one another's needs and space leaves room for both to grow on their own and together.\n");
			break;
		}
		case 12:
		{
			printf("\n->> Aries likes to be in the mix, while Pisces find being around lots of people to be an energy-sapping downer.\n"
            "\n->> If Aries can soften their edges and Pisces provides enough excitement, this pair has a lot to offer each other.\n"
            "\n->> Keep in mind that these two signs are neighbors on the Zodiac.\n");
			break;
		}
		default:
		{
			printf("\nINVALID CHOICE");
			exit(0);
			break;
		}
	}
} 
tau(int lc)
{
	switch(lc)
	{
		case 1:
		{
			printf("\n->> 	Taurus and Aries: Different Styles and Bad Timing.\n"
"\n->> Taurus and Aries definitely take a different approach to forming relationships, so their timing is usually a bit off"
"\n even if they do manage to make a connection.\n" 
"\n->> Taureans take a slow and methodical approach to building romantic relationships, while impatient Aries likes to dive"
"\n in head first and figure out the details later.\n");
			break;
		}
		case 2:
		{
			printf("\n->>    Like Understands Like.\n"
"\n->> Opposites may attract, but like understands like, and this is very important to making a relationship last.\n"
"\n->> The fires will never completely burn out in a Taurus to Taurus pairing.\n"
"\n->> However, if a couple of this sign is able to tolerate each other's shortcomings as well as celebrate traits"
"\n they share in common, this can be an outstanding love match.\n");

			break;
		}
		case 3:
		{
			printf("\n->>    Different Priorities"
"\n->> Taurus' steady nature lies in direct contrast to the unpredictable nature or the Twins.\n"
"\n->> Although Geminis can be quite witty and attractive, they have a tendency toward being capricious and, frankly,"
"\n reckless when it comes to matters of love.\n"
"\n->> When it comes right down to it, Gemini is too much of a free spirit to make Taurus comfortable for the long haul.\n");
			break;
		}
		case 4:
		{
			printf("\n->>    Bringing Out the Best in Each Other\n"
"\n->> The Cancer-Taurus pairing holds great capacity for compatibility.\n"
"\n->> Taureans take care of those they love, and Cancer truly wants to be appreciated and protected.\n"
"\n->> These two signs truly bring out the best in each other, and they both treasure quiet times spent together.\n");


			break;
		}
		case 5:
		{
			printf("\n->>    When the Bull Meets the Lion\n"
"\n->> Taurus and Leo both share a common trait: stubbornness!\n"
"\n->> This can lead this pairing to stick out a relationship even when it would be kinder to part ways.\n"
"\n->> Leos are renowned ""people persons," "while Taureans would rather limit company to a few good friends.\n");

			break;
		}
		case 6:
		{
			printf("\n->>    Practical Romantic Companions\n"
"\n->> Taurus and Virgo share very practical natures, and make good romantic companions."
"\n->> That said, Taureans have a tendency to smother their love interests at times, and this is a bit much form"
"\n most Virgos to endure.\n"
"\n->> If Taurus can learn to back off just a bit, this romance should include a happily ever after.\n");

			break;
		}
		case 7:
		{
			printf("\n->>    Homeboy Versus social Butterfly\n"
"\n->> This is not an ideal pairing, but it does have some positive aspects.\n"
"\n->> Both signs avoid conflicts whenever possible, and will strive to please the other.\n" 
"\n->> However, Libras can be extremely social while Taureans prefer the comforts of home.\n"
"\n->> A compromise must be reached for love to flourish.\n");

			break;
		}
		case 8:
		{
			printf("\n->>    A Fiery Match\n"
"\n->> Here's a fiery match if ever there was one.\n"
"\n->> Taurus and Scorpio can both be very possessive, so jealousy and fireworks are bound to ensue at one time or another.\n"
"\n->> However, these lover's quarrels usually work themselves out because both signs are extremely devoted to their lovers.\n");

			break;
		}
		case 9:
		{
			printf("\n->>   Compromise Is Necessary\n"
"\n->> This relationship is filled with compliments and conflicts.\n" 
"\n->> Sagittarians are party goers, while Taureans are definitely homebodies. Compromise is the name of the game here.\n" 
"\n->> If Taurus can give the Archer enough space to breath, and if the Archer can offer Taurus plenty of one-on-one time and"
"\n avoid flirting with others, these two signs can balance each other.\n");

			break;
		}
		case 10:
		{
			printf("\n->>    Match Made in Heaven\n"
"\n->> This is a highly compatible pairing.\n"
"\n->> Both signs are much grounded and keep their heads out of the clouds.\n" 
"\n->> They share a love of home and family, and prefer to live in an atmosphere of mutual respect.\n"
"\n->> They have to try a little harder to avoid getting stuck in a rut, but this is a spectacular pairing under most circumstances.\n");

			break;
		}
		case 11:
		{
			printf("\n->>     Give And Take\n"
"\n->> This pairing has its challenges.\n"
"\n->> Taurus' possessiveness is bound to rattle Aquarius' love of freedom.\n" 
"\n->> Aquarians love to go with the moment, while Taureans prefer to keep life neatly planned.\n" 
"\n->> However, both signs share a determination to make things work. This can result in a strong relationship if both"
"\n are willing to give and take.\n");
			break;
		}
		case 12:
		{
			printf("\n->>      Harmonious Pairing\n"
"\n->> This pairing can be quite harmonious.\n"
"\n->> Both signs can be very relaxed.\n"
"\n->> Taurus appreciates the tenderness found in Pisces, while Pisces loves the stability and security Taurus can provide.\n"
"\n->> This is a romance that only gets better with time and familiarity.\n");
			break;
		}
		default:
		{
			printf("\nINVALID CHOICE");
			exit(0);
			break;
		}
	}
}
gem(int lc)
{
	switch(lc)
	{
		case 1:
		{
			printf("\n->> The twins are known for their adaptability, a trait that easily follows Aries' need to lead their"
"\n closest companions down new paths.\n"
"\n->> An Aries-Gemini match will often result in a vibrant relationship that is full of activity and vitality.\n" 
"\n->> Aries and Gemini will love sharing in their mutual thirst for knowledge and breaking new ground together.\n"
"\n->> Geminis are also celebrated for their personal charm, traits the discerning ram is also capable of fully appreciating.\n");


			break;
		}
		case 2:
		{
			printf("\n->> Taurus' steady nature lies in direct contrast to the unpredictable nature or the Twins.\n"
"\n->> Although Geminis can be quite witty and attractive, they have a tendency toward being capricious and, frankly,"
"\n reckless when it comes to matters of love.\n"
"\n->> When it comes right down to it, Gemini is too much of a free spirit to make Taurus comfortable for the long haul.\n");

			break;
		}
		case 3:
		{
			printf("\n->> The bond that Gemini and Gemini share is everlasting and they both know how to keep the relationship"
"\n from happening.\n"
"\n->> Since they are believed to be highly intellectual, once they come together, new ideas and theories are put forward"
"\n which if acted upon can make a real difference.\n"
"\n->> People around also adore a Gemini couple because they are no doubt the life of any party or social gathering"
"\n they become part of.\n"
"\n->> Their sharp sense of humor and sarcastic comments will keep the others around them in a very light, happy mood.\n"
"\n->> However, sometimes this can result in hurting people because they hardly think before saying.\n");

			break;
		}
		case 4:
		{
			printf("\n->> When looking at the general trend of Gemini compatibility, Cancer tends to fall somewhere in the bottom "
"\nquarter because of the various differences that astrological principles throw towards it.\n"
"\n->> It is important to know, however, that all of these principles stem from the very basic astrology knowledge"
"\n and a further read into this article will let you know precisely what lies as the reason behind Cancer not"
"\n being the most compatible with Gemini.\n");

			break;
		}
		case 5:
		{
			printf("\n->> Few signs in the zodiac calendar show as good of compatibility as Gemini and Leo do.\n"
"\n->> In fact, the concept of a zodiac love match was perhaps fashioned upon the discovery of how these two signs"
"\n are absolutely perfect for each other.\n"
"\n->> It gets even more interesting because of the fact that typically, Gemini compatibility is a rather difficult"
"\n issue, where if one personality trait matched, the other would go the exact opposite way.\n"
"\n->> There might be some trouble at the end of the trust, and these issues might as well become the cause of discomfort, or worse.\n");

			break;
		}
		case 6:
		{
			printf("\n->> What happens when the healer of the zodiac signs meets with the communicator? Well, there is a lot of"
"\n talking and growth of character.\n"
"\n->> The Gemini and Virgo compatibility is affected, or better yet suffers, from the over-communication between the two signs.\n" 
"\n->> Mercury rules both of the signs so. Theoretically, they should have excellent zodiac compatibility.\n"
"\n->> In spite of having the same planetary symbol, Virgo and Gemini compatibility lack that special touch that a sensual"
"\n relationship of other signs does.\n"
"\n->> They have many differences that can affect their relationship, but enough differences to create a magnetic attraction"
"\n that two opposites possess.\n"
"\n->> To form a compatible relationship, Gemini and Virgo have to put the combined effort of giving in to the wills of their partner.\n");

			break;
		}
		case 7:
		{
			printf("\n->> Gemini and Libra companionship fares better than most of the other relationships.\n"
"\n->> Simply being careful about what sign you date can help you get to the right man, or woman at the first attempt!\n"
"\n-> >When it comes to a Gemini and Libra relationship, the two not only intend to find very good chemistry in bed (which is the"
"\n first step to the continuation of any relationship for that matter), but they also have an abundance of stuff that includes trust,"
"\n similar interests, as well as a collective regard for moral values and traditions.\n");

			break;
		}
		case 8:
		{
			printf("\n->> The zodiac compatibility of Gemini and Scorpio is built on a tumultuous path, filled with destructive forces with a"
"\n dash of potentially intense energies that can work in their favor.\n"
"\n->> Both signs have independent traits honed by their elemental signs and their ruling planets; each has their eccentric way"
"\n of dealing with their partner.\n"
"\n->> The Gemini lover has to be surrounded by the people they love, even in a relationship. \n"
"\n->> On the other hand, the Scorpio lover has an innate passion for an intense and private relationship with their partner.\n");

			break;
		}
		case 9:
		{
			printf("\n->> Gemini and Sagittarius are not only well-matched lovers, but they have the potential of becoming best friends too.\n"
"\n->> They can communicate well as they tend to hold very similar views on life.\n"  
"\n->> The fact that they are incredibly optimistic and enthusiastic makes them an ideal zodiac love match.\n"
"\n->> Sagittarius are mostly seen to be blunt and end up saying things they would not have said, had they thought before speaking.\n"
"\n->> This implies they tend to hurt people easily but since Gemini do not keep grudges; they will forget and forgive quickly.\n"
"\n->> While Sagittarius is blunt too, the quality of forgiving and forgetting is found in them too.\n"
"\n->> Both the zodiac signs lack the interest and time needed to hold a grudge.\n");

			break;
		}
		case 10:
		{
			printf("\n->> It is no surprise that it doesn’t work out regarding relationships when it comes to a Gemini and Capricorn combination.\n"
"\n->> Ever heard of water and fire living together? Pretty much the same is the case with Gemini and Capricorn. \n"
"\n->> As it happens, Gemini compatibility is greatly reliant on a matching of zodiac elements in their true sense, just like the"
"\n compatibility for any other sign.\n");
			break;
		}
		case 11:
		{
			printf("\n->> In the case of Gemini and Aquarius, the stars aligned themselves a little too perfectly because both of these belong"
"\n to the element of air.\n"
"\n->> Some may even term Aquarius to be the Gemini best love match. \n"
"\n->> Both of the people in a Gemini and Aquarius relationship might be so devoid of emotions that they would consider moving out"
"\n of a relationship better than thinking with emotions and trying to solve the problem. \n"
"\n->> This abundance of straightforwardness is perhaps the Achilles’ heel of a Gemini and Aquarius relationship.\n");

			break;
		}
		case 12:
		{
			printf("\n->> When Gemini and Pisces get together, they are believed to make a compassionate couple.\n" 
"\n->> A Gemini is intellectual, smart, and silver-tongued and has a very good sense of humor.\n"
"\n->> They are also good motivators and can help dreamy Pisces achieve whatever they desire. \n"
"\n->> Pisces, on the hand, empathize very well with people and are able to connect almost immediately with people. \n");

			break;
		}
		default:
		{
            printf("\nINVALID CHOICE");
			exit(0);
			break;
		}
	}
}
can(int lc)
{
	switch(lc)
	{
		case 1:
		{
			printf("\n->> Cancers are known for running the gamut of emotions; sometimes thoughtful, sometimes downright hysterical.\n"
"\n->> Aries is typically too straightforward to deal with this type of emotional see-saw for very long, making it difficult for this"
"\n pairing to maintain a connection.\n");

			break;
		}
		case 2:
		{
		    printf("\n->> Cancer will expect Taurus to come charging in, but will be pleasantly surprised"
"\nby the bull's sense of style and taking things slowly - at first."
"\n->> Taurus' sensual nature"
"\n and deep appreciation for beauty will quickly win over the sensitive Cancer.");

			break;
		}
		case 3:
		{
			printf("\n->>Cancer and Gemini have built the archetypes of the Homemaker and the communicator;"
"\n they have their own quirks and traits that might not work for the zodiac compatibility of the match");

			break;
		}
		case 4:
		{
			printf("\n->> When Leo and Cancer are together, they can form a sweep-me-off-my feet type of"
"\n relationship with each other.\n"
"\n->> On the Zodiac wheel, Leo and Cancer are neighbors, but they have many differences starting"
"\n from their values and principles of life.\n"
"\n->> The Zodiac compatibility of this couple has a lovely match, where the Leo can offer a regal"
"\n and luxurious touch to the relationship, while the Cancer can improve it by adding some homely touches.\n");


			break;
		}
		case 5:
		{
			printf("\n->> When Leo and Cancer are together, they can form a sweep-me-off-my feet type of relationship with each other\n"
"\n->> On the Zodiac wheel, Leo and Cancer are neighbors, but they have many differences starting from their values and"
"\n principles of life.\n"
"\n->> The Zodiac compatibility of this couple has a lovely match, where the Leo can offer a regal and luxurious touch"
"\n to the relationship, while the Cancer can improve o it by adding some homely touches.\n");

			break;
		}
		case 6:
		{
			printf("\n->> The first thing Virgos notice is how much Cancer needs their help in getting life organized and prioritized. \n"
"\n->> Once trust is established, the relationship will move steadily forward"
"\n and can grow into a profound love of deep appreciation for each other");

			break;	}
		case 7:
		{
			printf("\n->> Average might even be an understatement when it comes to Libra compatibility with Cancer in the zodiac calendar.\n"
 "\n->> According to many astrologers' calculations, these two signs tend to perform quite well in all the parameters that are set to judge"
 "\n the compatibility of any relationship.\n"
 "\n->> Libra and Cancer show a fondness of each other when it comes to communication and intellect, signaling how they are both at an"
 "\n equal mental level.\n"
 "\n->> This, of course, goes on to be a very important plus in favor of their zodiac compatibility.\n");

			break;
		}
		case 8:
		{
			printf("\n->>This pairing has the potential to be one of the best matches between signs."
"\n->>Cancer can be a bit too emotional and even clingy for Scorpio."
"\n->> If Scorpio can recognize the reason behind Cancer's jealousy and neediness is a fear of loss,"
"\n this can help the crab overcome feelings of insecurity.");

			break;
		}
		case 9:
		{
			printf("\n->> Cancer is an unpredictable sign, while one day they may be fun loving and outgoing, the next they may be melancholy"
			"\n and down."
			"\n->> Both are strong willed enough to make this work, and if you succeed the scores would be much higher."
			"\n->> If you can adapt to the others style this is a relationship which will improve steadily over time, and eventually rival"
			"\n any other match.");
			break;
		}
		case 10:
		{
			printf("\n->> Cancer is an intuitive and emotional water sign, while Capricorn is a practical"
"\n and logical earth sign.\n"
"\n->> They live in completely different worlds that magically fit together due to their good"
"\n zodiac compatibility.\n"
"\n->> The family of a Cancer and Capricorn couple will have a strong bond of love and practicality.\n"
"\n->> The Capricorn and Cancer compatibility grows on the quiet and cautious nature both signs share;" 
"\n it allows them to understand each other easily.\n");

			break;
		}
		case 11:
		{
			printf("\n->> Both Cancer and Aquarius care for those around them and are extremely committed to their partner.\n"
"\n->> Cancer will help Aquarius get in touch with his/her softer side through nothing but affection and compassion.\n"
"\n->> When it comes to Aquarius compatibility with Cancer, a lot is on the stake.\n"
"\n->> The two signs tend to be not too close to each other.\n");

			break;
		}
		case 12:
		{
			printf("\n->> Immediate affection between two people is a rare moment.\n"
"\n->> However, it is not as rare as you would expect it to be, especially when it comes to a Cancer and Pisces couple.\n"
"\n->> Cancer compatibility generally tends to follow the trend of being not too cozy, yet not too distant either.\n"
"\n->> However, in the case of Pisces, it tends to warm up a lot more than it usually does.\n");

			break;
		}
		default:
		{
            printf("\nINVALID CHOICE");
			exit(0);
			break;
		}
	}
	
}
le(int lc)
{
	 switch(lc)
	{
		case 1:
		{
			printf("\n->> Ram to ram relationships also stand a great chance of success, but this hinges on one crucial fact:"
"\n how well the ram likes his or her own self.\n"
"\n->> Aries will see many of their own strongest qualities reflected in other Aries.\n"
"\n->> When two rams get together, it can either be a wonderful, energetic union or it can be a recipe for disaster,"
"\n as neither of them will want to play the supporting role in the relationship.\n" 
"\n->> Generally speaking, if you're comfortable in your own skin, and you're willing to let the other person take"
"\n the lead sometimes, an Aries to Aries combination is equally yoked and capable of traveling great distances together.\n");

			break;
		}
		case 2:
		{
			printf("\n->>    When the Bull Meets the Lion\n"
"\n->> Taurus and Leo both share a common trait: stubbornness!\n"
"\n->> This can lead this pairing to stick out a relationship even when it would be kinder to part ways.\n"
"\n->> Leos are renowned ""people persons,"" while Taureans would rather limit company to a few good friends.\n");

			break;
		}
		case 3:
		{
			printf("\n->> Few signs in the zodiac calendar show as good of compatibility as Gemini and Leo do.\n"
"\n->> In fact, the concept of a zodiac love match was perhaps fashioned upon the discovery of how these two signs"
"\n are absolutely perfect for each other.\n"
"\n->> It gets even more interesting because of the fact that typically, Gemini compatibility is a rather difficult"
"\n issue, where if one personality trait matched, the other would go the exact opposite way.\n"
"\n->> There might be some trouble at the end of the trust, and these issues might as well become the cause of discomfort,"
"\n or worse.\n");

			break;
		}
		case 4:
		{
			printf("\n->> When Leo and Cancer are together, they can form a sweep-me-off-my feet type of relationship with each other\n"
"\n->> On the Zodiac wheel, Leo and Cancer are neighbors, but they have many differences starting from their values and"
"\n principles of life.\n"
"\n->> The Zodiac compatibility of this couple has a lovely match, where the Leo can offer a regal and luxurious touch"
"\n to the relationship, while the Cancer can improve o it by adding some homely touches.\n");

			break;
		}
		case 5:
		{
			printf("\n->> You better believe a Leo and Leo relationship will have a grand and royal relationship that is filled"
"\n with lavish gifts and extravagant gestures of affections.\n"
"\n->> There is a strong probability when a Leo dates another Leo they will have a public declaration of love that"
"\n will be built on a generous amount of social grace."
"\n->> The Leo and Leo couple will have a unique ability to spread joy in their surrounding as they will mostly enjoy"
"\n each other’s presence outside.\n");

			break;
		}
		case 6:
		{
			printf("\n->> It is not a relationship that you get to see every day. "
"\n->> Leo and Virgo are one of those rare combinations where you see a few factors to the best of their potential,"
"\n taking the relationship forward with all the force they can muster.\n"
"\n->> It is also one of those rare combinations where certain other factors tend to make it living hell for"
"\n the people involved.\n"
"\n->> However, nothing is permanent, and there is always a way to work around the problems that may be otherwise"
"\n caused by Leo compatibility with Virgo.\n");

			break;
		}
		case 7:
		{
			printf("\n->> Libra and Leo hold a one-track yet delightful nature that can become beneficial for both zodiac signs"
"\n as it improves the zodiac compatibility of the couple.\n"
"\n->> Leo has a demanding nature that wants to have the complete attention of their lover as well as any other"
"\n person in the vicinity.\n"
"\n->> Libra, on the other hand, has giving personality that provides adoration to their partner as much as they need"
"\n it, it makes them a good zodiac love match for Leo.\n");

			break;
		}
		case 8:
		{
			printf("\n->> Generally speaking, Scorpio is too intense and brooding a match for a light-hearted Leo native.\n"
"\n->> While Scorpio is unlikely to appreciate Leo’s constant need for attention and praise.\n"
"\n->> Both signs are extremely strong-willed and dominant, causing relationships\n"
"\n->> Between the two to break down into power struggles more often than not.\n");

			break;
		}
		case 9:
		{
			printf("\n->> Both Leo and Sagittarius share a great love of adventure, drama, and freedom.\n"
"\n->> This will be the source of much pleasure for them, virtually guaranteeing them a harmonious relationship.\n"
"\n->>They see both love and life as wonderful sources of amusement and entertainment.\n");

			break;
		}
		case 10:
		{
            printf("\n->> When the zodiac love match, Leo and Capricorn come together, the result is an equally supportive companionship.\n"
"\n->> Leo believes in hard work but yet gets most of the things done through their beauty and social skills.\n"
"\n->> Compared to Leo, they are traditional.\n"
"\n->> Together they can enter into a compatible relationship where both are exceptionally loyal and sincere to each other.\n"
"\n->> They might not look like a good couple, but once they start looking for similarities in each other, their love"
"\n would only grow.\n");

			break;
		}
		case 11:
		{
			printf("\n->> Leo is the Fixed Fire sign of the zodiac. Aquarius is the Fixed Air sign of the zodiac.\n"
"\n->> The physical attraction is there but, as with all opposites, they are very different people.\n"
"\n->> An Aquarian is an egalitarian, and a Leo wants to be seen and treated as special, especially by their"
"\n significant other.\n");

			break;
		}
		case 12:
		{
			printf("\n->> A compatible relationship, between Leo and Pisces, need a lot of compromises and attention because of the"
"\n zodiac love match between these signs very uneven.\n"
"\n->> Leo with Pisces can become demanding in a way that can irritate the Pisces partner.\n"
"\n->> Leo needs adoration and attention from their partner, Pisces lives in their world and are rather oblivious"
"\n to this need from their partners.\n"
"\n->> Moreover, the passionate nature of Leo can also affect the compatibility of the relationship as it can often"
"\n intimidate Pisces, making them second guess the relationship.\n");

			break;
		}
		default:
		{
                        printf("\nINVALID CHOICE");
			exit(0);
			break;
		}
	}
}
vir(int lc)
{
	switch(lc)
	{
		case 1:
		{
			printf("\n->>Aries can be very straightforward and honorable that can make them Virgo best love match, as they also enjoy a faithful and"
"\n trustworthy partner.\n" 
"\n->>Virgo and Aries partners can have a strong companionship with each other by offering honesty and getting honesty in return.\n");

			break;
		}
		case 2:
		{
			printf("\n->>    Practical Romantic Companions\n"
"\n->> Taurus and Virgo share very practical natures, and make good romantic companions."
"\n->> That said, Taureans have a tendency to smother their love interests at times, and this is a bit much form"
"\n most Virgos to endure.\n"
"\n->> If Taurus can learn to back off just a bit, this romance should include a happily ever after.\n");

			break;
		}
		case 3:
		{
			printf("\n->> What happens when the healer of the zodiac signs meets with the communicator? Well, there is a lot of"
"\n talking and growth of character.\n"
"\n->> The Gemini and Virgo compatibility is affected, or better yet suffers, from the over-communication between the two signs.\n" 
"\n->> Mercury rules both of the signs so. Theoretically, they should have excellent zodiac compatibility.\n"
"\n->> In spite of having the same planetary symbol, Virgo and Gemini compatibility lack that special touch that a sensual"
"\n relationship of other signs does.\n"
"\n->> They have many differences that can affect their relationship, but enough differences to create a magnetic attraction"
"\n that two opposites possess.\n"
"\n->> To form a compatible relationship, Gemini and Virgo have to put the combined effort of giving in to the wills of their partner.\n");

			break;
		}
		case 4:
		{
			printf("\n->> The first thing Virgos notice is how much Cancer needs their help in getting life organized and prioritized. \n"
"\n->>Once trust is established, the relationship will move steadily forward"
"\n and can grow into a profound love of deep appreciation for each other");

			break;
		}
		case 5:
		{
			printf("\n->> It is not a relationship that you get to see every day.\n" 
"\n->> Leo and Virgo are one of those rare combinations where you see a few factors to the best of their potential, taking the"
"\n relationship forward with all the force they can muster.\n"
"\n->> It is also one of those rare combinations where certain other factors tend to make it living hell for the people involved.\n" 
"\n->> However, nothing is permanent, and there is always a way to work around the problems that may be otherwise caused"
"\n by Leo compatibility with Virgo.\n");

			break;
		}
		case 6:
		{
			printf("\n->> Although two Virgos are better than one when it comes to getting things done and getting them done right,"
"\n they must take care that their mutual need to each have things their own way doesn’t get in the way of the greater good.\n"
"\n->> Virgo and Virgo relationship is not as dreamy as it sounds.\n");

			break;
		}
		case 7:
		{
			printf("\n->> A Virgo native’s tendency to be critical and demanding when it comes to the very exacting standards they live by"
"\n will soon become a nuisance to fun-loving, easy-going Libra.\n" 
"\n->> Libra’s seeming flightiness and wishy-washiness will not sit well with accomplishment-oriented Virgo.\n");

			break;
		}
		case 8:
		{
			printf("\n->> The intellectual connection between this pairing is very strong.\n"
"\n->> Both signs are highly intelligent with Virgo being super analytical and Scorpio highly logical.\n");

			break;
		}
		case 9:
		{
			printf("\n->> When Virgo and Sagittarius join together in a love match, the result is a well-rounded couple.\n"
"\n->> Sagittarius is an explorer who loves to socialize, while Virgo prefers to analyze Sag’s discoveries.\n"
"\n->> Both enjoy talking about it with one another.\n");
			break;
		}
		case 10:
		{
			printf("\n->> Virgo and Capricorn have a tendency to be just like two peas in a pod when it comes to many things.\n"
"\n->> They are both hard-working, diligent individuals who place a strong degree of importance on intellectualism and"
"\n conservative living.\n");

			break;
		}
		case 11:
		{
			printf("\n->> The Virgo-Aquarius pairing works well if the two can accept and come to appreciate the ways in which they are different."
"\n They are not mirrors of each other, and that's what makes the combination so beautiful.\n");

			break;
		}
		case 12:
		{
			printf("\n->> This is a pairing that can literally go either way. On one hand, Virgo’s practical approach to life can help"
"\n give dreamy Pisces a sense of stability.\n" 
"\n->>Pisces’s imagination can add a whole new dimension to Virgo’s world that they’d never imagined was possibly before.\n");

			break;
		}
		default:
		{
            printf("\nINVALID CHOICE");
			exit(0);
			break;
		}
	}
}
lib(int lc)
{
	switch(lc)
	{
		case 1:
		{
			printf("\n->>That old saying that opposites attract is certainly true. People are often entranced by their polar opposites, and while"
"\n the novelty of this kind of relationship can bring us together for a time, it can be difficult to bond in the long term.\n"
"\n->>Aries and Libra often find that they have a strong initial connection but what seems refreshing in the beginning can wear"
"\n thin and grate on nerves as time goes on.\n"
"\n->>However, if Aries begins to put too many demands on fun-loving Libra in other areas of the relationship, Libra’s fickle"
"\n streak will most certainly lead to a desire to seek greener pastures.\n");

			break;
		}
		case 2:
		{
			printf("\n->>    Homeboy Versus social Butterfly\n"
"\n->> This is not an ideal pairing, but it does have some positive aspects.\n"
"\n->> Both signs avoid conflicts whenever possible, and will strive to please the other.\n" 
"\n->> However, Libras can be extremely social while Taureans prefer the comforts of home.\n"
"\n->> A compromise must be reached for love to flourish.\n");

			break;
		}
		case 3:
		{
			printf("\n->> Gemini and Libra companionship fares better than most of the other relationships.\n"
"\n->> Simply being careful about what sign you date can help you get to the right man, or woman at the first attempt!\n"
"\n-> >When it comes to a Gemini and Libra relationship, the two not only intend to find very good chemistry in bed (which is the"
"\n first step to the continuation of any relationship for that matter), but they also have an abundance of stuff that includes trust,"
"\n similar interests, as well as a collective regard for moral values and traditions.\n");

			break;
		}
		case 4:
		{
			printf("\n->> Average might even be an understatement when it comes to Libra compatibility with Cancer in the zodiac calendar.\n" 
"\n->> According to many astrologers’ calculations, these two signs tend to perform quite well in all the parameters that are set"
"\n to judge the compatibility of any relationship. \n"
"\n->> Libra and Cancer show a fondness of each other when it comes to communication and intellect, signaling how they are both at"
"\n an equal mental level. \n"
"\n->> This, of course, goes on to be a very important plus in favor of their zodiac compatibility.\n");

			break;
		}
		case 5:
		{
			printf("\n->> Libra and Leo hold a one-track yet delightful nature that can become beneficial for both zodiac signs"
"\n as it improves the zodiac compatibility of the couple.\n"
"\n->> Leo has a demanding nature that wants to have the complete attention of their lover as well as any other"
"\n person in the vicinity.\n"
"\n->> Libra, on the other hand, has giving personality that provides adoration to their partner as much as they need"
"\n it, it makes them a good zodiac love match for Leo.\n");

			break;
		}
		case 6:
		{
			printf("\n->> It is better off for a Libra and Virgo to find partners in other zodiac signs than waste time on each other.\n" 
"\n->> Virgo was expecting a fairytale connection seeing the image Libra shows and they will find so many faults in their partner’s approach.\n"
"\n->> Libra’s self-esteem doesn’t really tolerate that much criticism and they will probably see Virgo as boring, stiff and unaware"
"\n of any emotional connection they wanted to make.\n");

			break;
		}
		case 7:
		{
			printf("\n->> Mutual appreciation and attraction will not be far behind in a Libra and Libra partnership.\n"
"\n->> The Libra partners will be inherently attracted to each, they will be charmed by the social compatibility and the respect"
"\n they will have for each other. \n"
"\n->> The zodiac compatibility of Libra and Libra couple will have a strong foundation on the great chemistry they have together;"
"\n they will live the best of their lives together as a couple.\n");

			break;
		}
		case 8:
		{
			printf("\n->> Libra and Scorpio have been called the ""relationship signs" "for their coupling capacity.\n"
"\n->>  Libra loves to be swept up in a breathless affair, and Scorpio has the urge to merge. \n"
"\n->> Scorpio's intense gaze is a tonic to Libra, who comes alive as the object of desire.\n"
"\n->>  Libra falls in love first with the idea of being together. \n"
"\n->> Scorpio is the most lucid and reality-based water sign. \n"
"\n->> Scorpio knows what's at stake on the emotional-psychic level. Here's where they clash and may find problems relating.\n");

			break;
		}
		case 9:
		{
			printf("\n->> A Libra and Sagittarius relationship has a strong base for long-term success.\n"
"\n->> Both of these signs, once they commit, are in it for the long haul. "
"\n->> A Libra and Sagittarius relationship works because their passion for one another is tempered and sustainable due to their"
"\n long-term vision and capacity for flight\n");

			break;
		}
		case 10:
		{
			printf("\n->> Both are marriage-minded, and although a pairing has built-in frictions, these two can find a harmonious balance.\n"
"\n->> Capricorn tends to the structure of the relationship, while Libra adds the flourishes.\n");

			break;
		}
		case 11:
		{
			printf("\n->> Aquarius compatibility with Libra works best if they have a mutual interest in their intellectual pursuits.\n"
"\n->> This couple can build a strong bond of friendship and affection if they can match on a mental level, which may count more"
"\n than any other compatible traits.\n"
"\n->> Aquarius has an eccentric nature that can often put off other signs, which is why Aquarius compatible signs need to have"
"\n an open mind and a progressive ideology of life.\n"
"\n->> Libra, as an idealist archetype, can handle peculiar and strange events in the blink of an eye, they won’t be phased"
"\n by Aquarius way of life.\n");

			break;
		}
		case 12:
		{
			printf("\n->> There is an incredibly sentimental and unstable connection of two souls in a Libra and Pisces relationship.\n" 
"\n->>Both signs are very romantic, but they tend to have a sense of escapism preceding their leading archetypes.\n"
"\n->>Pisces holds the dominant traits of a dreamer while Libra holds the leading traits of an idealist, making them seek for"
"\n a better future and life as they forget about what they have at present.\n"
"\n->>Libra and Pisces partners will be loving and affectionate together; they will have a strong connection that is built on"
"\n flowery prose and romantic dinners.\n");


			break;
		}
		default:
		{
            printf("\nINVALID CHOICE");
			exit(0);
			break;
		}
	}
}
scp(int lc)
{
	switch(lc)
	{
		case 1:
		{
			printf("\n->> They both like power, and this sometimes leads to conflicts between them. But if they learn to cooperate with instead"
"\n of fighting against each other, they can go far.\n"
"\n->> Both signs show a forceful nature behind a calm personality that has passionate undertones. They are often called two sides"
"\n of the same coin as they are both ruled by their instincts.\n"
"\n->> While the instinctual traits form their strongest bonds together, they can also form a compatible relationship because of"
"\n the radical traits of Aries that bring the suppressed fire of Scorpio out of their bonds.\n");

			break;
		}
		case 2:
		{
			printf("\n->>    A Fiery Match\n"
"\n->> Here's a fiery match if ever there was one.\n"
"\n->> Taurus and Scorpio can both be very possessive, so jealousy and fireworks are bound to ensue at one time or another.\n"
"\n->> However, these lover's quarrels usually work themselves out because both signs are extremely devoted to their lovers.\n");

			break;
		}
		case 3:
		{
			printf("\n->> The zodiac compatibility of Gemini and Scorpio is built on a tumultuous path, filled with destructive forces with a"
"\n dash of potentially intense energies that can work in their favor.\n"
"\n->> Both signs have independent traits honed by their elemental signs and their ruling planets; each has their eccentric way"
"\n of dealing with their partner.\n"
"\n->> The Gemini lover has to be surrounded by the people they love, even in a relationship. \n"
"\n->> On the other hand, the Scorpio lover has an innate passion for an intense and private relationship with their partner.\n");

			break;
		}
		case 4:
		{
			printf("\n->>This pairing has the potential to be one of the best matches between signs."
"\nCancer can be a bit too emotional and even clingy for Scorpio."
"\nIf Scorpio can recognize the reason behind Cancer's jealousy and neediness is a fear of loss,"
"\nthis can help the crab overcome feelings of insecurity.");

			break;
		}
		case 5:
		{
			printf("\n->> Generally speaking, Scorpio is too intense and brooding a match for a light-hearted Leo native.\n"
"\n->> While Scorpio is unlikely to appreciate Leo’s constant need for attention and praise.\n"
"\n->> Both signs are extremely strong-willed and dominant, causing relationships\n"
"\n->> Between the two to break down into power struggles more often than not.\n");

			break;
		}
		case 6:
		{
			printf("\n->> The intellectual connection between this pairing is very strong.\n"
"\n->> Both signs are highly intelligent with Virgo being super analytical and Scorpio highly logical.\n");

			break;
		}
		case 7:
		{
			printf("\n->> Libra and Scorpio have been called the ""relationship signs" "for their coupling capacity.\n"
"\n->>  Libra loves to be swept up in a breathless affair, and Scorpio has the urge to merge. \n"
"\n->> Scorpio's intense gaze is a tonic to Libra, who comes alive as the object of desire.\n"
"\n->>  Libra falls in love first with the idea of being together. \n"
"\n->> Scorpio is the most lucid and reality-based water sign. \n"
"\n->> Scorpio knows what's at stake on the emotional-psychic level. Here's where they clash and may find problems relating.\n");

			break;
		}
		case 8:
		{
			printf("\n->> As is the case with many two-of-a-kind matches, the similarities between a pair of Scorpios can be both"
"\n a blessing and a curse.\n" 
"\n->>On one hand, there will be no shortage of passion in the relationship and their private life will be nothing short of amazing.\n");

			break;
		}
		case 9:
		{
			printf("\n->> Scorpio and Sagittarius can have love compatibility. Scorpio and Sagittarius are both very physical"
"\n in their love adventures.\n"
"\n->> Each picks up much from body language and signals, such as a glance.\n");

			break;
		}
		case 10:
		{
			printf("\n->> Capricorn natives and Scorpio natives go together excellently, as they make a very good team.\n"
"\n->> Capricorn’s natural patience and diligence compliments Scorpio’s potent imagination and keen investigative skills.\n"
"\n->> This is also a wonderful match when it comes to sexual chemistry.\n");

			break;
		}
		case 11:
		{
			printf("\n->> Aquarius’s unwillingness to give up even a little of its individuality for anyone will eventually rub demanding"
"\n Scorpio the wrong way.\n"
"\n->> Scorpio’s moodiness, jealousy, and possessiveness will eventually make Aquarius feel trapped and possibly ignite the"
"\n water bearer’s roving eye.\n");

			break;
		}
		case 12:
		{
			printf("\n->> Although these two are quite different when it comes to quite a few fundamentals, their differences"
"\n compliment one another instead of making waves. Dreamy Pisces is all too willing to allow Scorpio to take the"
"\n lead and, in fact, actually feels more loved and valued as a result of Scorpio’s possessiveness.\n"
"\n->> Scorpio is most compatible with Pisces because their need for occasional solitude is often mistaken as being unfaithful,"
"\n but not by Pisces.\n"
"\n->> Pisces accepts the mysterious and quiet nature of Scorpio, in which they can relax and indulge in their fantasy.\n");


			break;
		}
		default:
		{
            printf("\nINVALID CHOICE");
			exit(0);
			break;
		}
	}
}
sag(int lc)
{
	switch(lc)
	{
		case 1:
		{
			printf("\n->> Sagittarius, the archer is another highly energetic sign and one of the most compatible signs that can match Aries’s"
"\n natural gusto all the way and Aries should consider when searching out relationships that will bear fruit.\n"
"\n->> Both love being social, active, and living by the seat of their pants, so this relationship is one that is sure to be"
"\n filled with fun and discovery.\n"
"\n->> Sagittarians share a certain love of freedom with Aries that will help the two of them conquer new territory together.\n");

			break;
		}
		case 2:
		{
			printf("\n->>   Compromise Is Necessary\n"
"\n->> This relationship is filled with compliments and conflicts.\n" 
"\n->> Sagittarians are party goers, while Taureans are definitely homebodies. Compromise is the name of the game here.\n" 
"\n->> If Taurus can give the Archer enough space to breath, and if the Archer can offer Taurus plenty of one-on-one time and"
"\n avoid flirting with others, these two signs can balance each other.\n");

			break;
		}
		case 3:
		{
			printf("\n->> Gemini and Sagittarius are not only well-matched lovers, but they have the potential of becoming best friends too.\n"
"\n->> They can communicate well as they tend to hold very similar views on life.\n"  
"\n->> The fact that they are incredibly optimistic and enthusiastic makes them an ideal zodiac love match.\n"
"\n->> Sagittarius are mostly seen to be blunt and end up saying things they would not have said, had they thought before speaking.\n"
"\n->> This implies they tend to hurt people easily but since Gemini do not keep grudges; they will forget and forgive quickly.\n"
"\n->> While Sagittarius is blunt too, the quality of forgiving and forgetting is found in them too.\n"
"\n->> Both the zodiac signs lack the interest and time needed to hold a grudge.\n");

			break;
		}
		case 4:
		{
			printf("\n->> Cancer and Sagittarius will almost never get attracted to each other.\n"
"\n->> If they do, against odds, they could find an interesting shared sexual language that none of them anticipated"
"\n will be found.\n"
"\n-> The changeable nature of Sagittarius can be somewhat difficult for Cancer to understand because of their opposite"
"\n need for emotional security.\n");

			break;
		}
		case 5:
		{
			printf("\n->> Both Leo and Sagittarius share a great love of adventure, drama, and freedom.\n"
"\n->> This will be the source of much pleasure for them, virtually guaranteeing them a harmonious relationship.\n"
"\n->>They see both love and life as wonderful sources of amusement and entertainment.\n");

			break;
		}
		case 6:
		{
			printf("\n->> When Virgo and Sagittarius join together in a love match, the result is a well-rounded couple.\n"
"\n->> Sagittarius is an explorer who loves to socialize, while Virgo prefers to analyze Sag’s discoveries.\n"
"\n->> Both enjoy talking about it with one another.\n");

			break;
		}
		case 7:
		{
			printf("\n->> A Libra and Sagittarius relationship has a strong base for long-term success.\n"
"\n->> Both of these signs, once they commit, are in it for the long haul. "
"\n->> A Libra and Sagittarius relationship works because their passion for one another is tempered and sustainable due to their"
"\n long-term vision and capacity for flight\n");

			break;
		}
		case 8:
		{
			printf("\n->> Scorpio and Sagittarius can have love compatibility. Scorpio and Sagittarius are both very physical"
"\n in their love adventures.\n"
"\n->> Each picks up much from body language and signals, such as a glance.\n");

			break;
		}
		case 9:
		{
			printf("\n->> On the one hand, two Sagittarians will definitely have more than their share of fun together.\n"
"\n->> Their lives will be one big adventure, and their private life will be rich, adventurous, and fulfilling.\n"
"\n->> However, this pairing can be one in which there is not enough direction and responsibility.\n");

			break;
		}
		case 10:
		{
			printf("\n->> Generally speaking, Capricorn will be far too practical and conservative to suit freedom-loving Sagittarius.\n"
"\n->> Capricorns will soon start too feel as if they are saddled with all the responsibility, while Sagittarius will feel"
"\n caged and restricted by Capricorn’s staunch dedication to tradition and responsibility.\n");

			break;
		}
		case 11:
		{
			printf("\n->> Inventive Aquarius and adventurous Sagittarius share many of the same attributes, which will make their"
"\n relationship strong and harmonious.\n" 
"\n->> They are especially compatible in the bedroom, as both enjoy having an active, innovative sex life.\n");

			break;
		}
		case 12:
		{
			printf("\n->> Sagittarius is all about looking for new and great opportunities.\n"
"\n->> They want something to ignite them and keep them going in life.\n"
"\n->> Pisces is a more sensitive sign. it not a good match.\n");

			break;
		}
		default:
		{
            printf("\nINVALID CHOICE");
			exit(0);
			break;
		}
	}
}
int cap(int lc)
{
	switch(lc)
	{
		case 1:
		{
			printf("\n->> Caps tend to be solid as a rock, so in most cases they won't appreciate Aries' capacity for head on collisions,"
"\n no matter how convincing the ram can be in arguing for his/her position.\n"
"\n->> Both Capricorn and Aries are natural-born leaders, but unfortunately they have very different ways of going about"
"\n it and can’t help but lock horns.\n"
"\n->> These two are very likely to fight over money manners, as Aries is something of a spendthrift, while Capricorn is very frugal.\n"
"\n->> Aries also likes variety and novelty, while Capricorn is staunchly traditional, providing even more fertile ground for discord."
"\n In short, these two are opposites in all the wrong ways.");

			break;
		}
		case 2:
		{
			printf("\n->>    Match Made in Heaven\n"
"\n->> This is a highly compatible pairing.\n"
"\n->> Both signs are much grounded and keep their heads out of the clouds.\n" 
"\n->> They share a love of home and family, and prefer to live in an atmosphere of mutual respect.\n"
"\n->> They have to try a little harder to avoid getting stuck in a rut, but this is a spectacular pairing under most circumstances.\n");

			break;
		}
		case 3:
		{
			printf("\n->> It is no surprise that it doesn’t work out regarding relationships when it comes to a Gemini and Capricorn combination.\n"
"\n->> Ever heard of water and fire living together? Pretty much the same is the case with Gemini and Capricorn. \n"
"\n->> As it happens, Gemini compatibility is greatly reliant on a matching of zodiac elements in their true sense, just like the"
"\n compatibility for any other sign.\n");

			break;
		}
		case 4:
		{
			printf("\n->>Cancer is an intuitive and emotional water sign, while Capricorn is a practical"
"\n and logical earth sign.\n"
"\n->>They live in completely different worlds that magically fit together due to their good"
"\n zodiac compatibility.\n"
"\n->>The family of a Cancer and Capricorn couple will have a strong bond of love and practicality.\n"
"\n->>The Capricorn and Cancer compatibility grows on the quiet and cautious nature both signs share;" 
"\n it allows them to understand each other easily.\n");

			break;
		}
		case 5:
		{
			printf("\n->> When the zodiac love match, Leo and Capricorn come together, the result is an equally supportive companionship.\n"
"\n->> Leo believes in hard work but yet gets most of the things done through their beauty and social skills.\n"
"\n->> Compared to Leo, they are traditional.\n"
"\n->> Together they can enter into a compatible relationship where both are exceptionally loyal and sincere to each other.\n"
"\n->> They might not look like a good couple, but once they start looking for similarities in each other, their love"
"\n would only grow.\n");

			break;
		}
		case 6:
		{
			printf("\n->> Virgo and Capricorn have a tendency to be just like two peas in a pod when it comes to many things.\n"
"\n->> They are both hard-working, diligent individuals who place a strong degree of importance on intellectualism and"
"\n conservative living.\n");

			break;
		}
		case 7:
		{
			printf("\n->> Both are marriage-minded, and although a pairing has built-in frictions, these two can find a harmonious balance.\n"
"\n->> Capricorn tends to the structure of the relationship, while Libra adds the flourishes.\n");

			break;
		}
		case 8:
		{
			printf("\n->> Capricorn natives and Scorpio natives go together excellently, as they make a very good team.\n"
"\n->> Capricorn’s natural patience and diligence compliments Scorpio’s potent imagination and keen investigative skills.\n"
"\n->> This is also a wonderful match when it comes to sexual chemistry.\n");

			break;
		}
		case 9:
		{
			printf("\n->> Generally speaking, Capricorn will be far too practical and conservative to suit freedom-loving Sagittarius.\n"
"\n->> Capricorns will soon start too feel as if they are saddled with all the responsibility, while Sagittarius will feel"
"\n caged and restricted by Capricorn’s staunch dedication to tradition and responsibility.\n");

			break;
		}
		case 10:
		{
			printf("\n->> A relationship between Capricorn and Capricorn is considered to be a powerful alliance which is different as"
"\n that of the Starks and Lannister’s who were meant to join forces to dominate the world.\n"
"\n->> Capricorn and Capricorn are well aware of where they are heading to and what do they want to achieve in life.\n"
"\n->> However, this is not considered to be an ideal couple because Capricorn compatibility with their Capricorn partner"
"\n is not as amazing as they do not get along so well.\n");

			break;
		}
		case 11:
		{
			printf("\n->> Not too smooth. Yep, this is what you can expect from Aquarius and Capricorn getting together.\n"
"\n->> Zodiac compatibility is something that enjoys immense popularity in many different circles of social life.\n"
"\n->> Firstly, it is the zodiac elements of air and earth that come together for these two signs.\n"
"\n->> It is common knowledge that these two elements do not seem to get along very well.\n"
"\n->> Apart from that, it is also the factor of Aquarius dates that is not exactly in favor of an Aquarius and"
"\n Capricorn couple. \n"
"\n->> The two signs do not harbor a very similar position of the planets, resulting in a lot of discord.\n");

			break;
		}
		case 12:
		{
			printf("\n->> Just like two pieces of a jigsaw puzzle that fit perfectly well together, Pisces and Capricorn in a relationship"
"\n are absolute goals!\n"
"\n->> Just like any relationship, this zodiac love match too is susceptible to minor disagreements, but these soon vanish in favor"
"\n of the great love that these two people harbor for each other. \n"
"\n->> In addition to that, the zodiac elements of earth and water provide very good support to each other in the form of these signs.\n");

			break;
		}
		default:
		{
            printf("\nINVALID CHOICE");
			exit(0);
			break;
		}
	}
	return 0;
}
aqu(int lc)
{
	switch(lc)
	{
		case 1:
		{
			printf("\n->> They both are strong thinking signs, but from different angles. This relationship can have a lot of yin and yang,"
"\n with Aries being a fire-sign—an uncannily strong, leading force.\n"
"\n->> Aries have a certain boss-like mentality that goes well with Aquarius, which can be more peaceful, yin-like, and unique.\n"
"\n->> Aquarius' need for personal space dovetails nicely with Aries' love of freedom.\n"
"\n->> Their mutual respect for one another's needs and space leaves room for both to grow on their own and together.\n");

			break;
		}
		case 2:
		{
			printf("\n->>     Give And Take\n"
"\n->> This pairing has its challenges.\n"
"\n->> Taurus' possessiveness is bound to rattle Aquarius' love of freedom.\n" 
"\n->> Aquarians love to go with the moment, while Taureans prefer to keep life neatly planned.\n" 
"\n->> However, both signs share a determination to make things work. This can result in a strong relationship if both"
"\n are willing to give and take.\n");

			break;
		}
		case 3:
		{
			printf("\n->> In the case of Gemini and Aquarius, the stars aligned themselves a little too perfectly because both of these belong"
"\n to the element of air.\n"
"\n->> Some may even term Aquarius to be the Gemini best love match. \n"
"\n->> Both of the people in a Gemini and Aquarius relationship might be so devoid of emotions that they would consider moving out"
"\n of a relationship better than thinking with emotions and trying to solve the problem. \n"
"\n->> This abundance of straightforwardness is perhaps the Achilles’ heel of a Gemini and Aquarius relationship.\n");

			break;
		}
		case 4:
		{
			printf("\n->>The two signs tend to be not too close to each other,"
"\n but Cancer and Aquarius might be good at communicating with each other.");

			break;
		}
		case 5:
		{
			printf("\n->> Leo is the Fixed Fire sign of the zodiac. Aquarius is the Fixed Air sign of the zodiac.\n"
"\n->> The physical attraction is there but, as with all opposites, they are very different people.\n"
"\n->> An Aquarian is an egalitarian, and a Leo wants to be seen and treated as special, especially by their"
"\n significant other.\n");

			break;
		}
		case 6:
		{
			printf("\n->> The Virgo-Aquarius pairing works well if the two can accept and come to appreciate the ways in which they are different."
"\n They are not mirrors of each other, and that's what makes the combination so beautiful.\n");

			break;
		}
		case 7:
		{
			printf("\n->> Aquarius compatibility with Libra works best if they have a mutual interest in their intellectual pursuits.\n"
"\n->> This couple can build a strong bond of friendship and affection if they can match on a mental level, which may count more"
"\n than any other compatible traits.\n"
"\n->> Aquarius has an eccentric nature that can often put off other signs, which is why Aquarius compatible signs need to have"
"\n an open mind and a progressive ideology of life.\n"
"\n->> Libra, as an idealist archetype, can handle peculiar and strange events in the blink of an eye, they won’t be phased"
"\n by Aquarius way of life.\n");

			break;
		}
		case 8:
		{
			printf("\n->> Aquarius’s unwillingness to give up even a little of its individuality for anyone will eventually rub demanding"
"\n Scorpio the wrong way.\n"
"\n->> Scorpio’s moodiness, jealousy, and possessiveness will eventually make Aquarius feel trapped and possibly ignite the"
"\n water bearer’s roving eye.\n");

			break;
		}
		case 9:
		{
			printf("\n->> Inventive Aquarius and adventurous Sagittarius share many of the same attributes, which will make their"
"\n relationship strong and harmonious.\n" 
"\n->> They are especially compatible in the bedroom, as both enjoy having an active, innovative sex life.\n");

			break;
		}
		case 10:
		{
			printf("\n->> Not too smooth. Yep, this is what you can expect from Aquarius and Capricorn getting together.\n"
"\n->> Zodiac compatibility is something that enjoys immense popularity in many different circles of social life.\n"
"\n->> Firstly, it is the zodiac elements of air and earth that come together for these two signs.\n"
"\n->> It is common knowledge that these two elements do not seem to get along very well.\n"
"\n->> Apart from that, it is also the factor of Aquarius dates that is not exactly in favor of an Aquarius and"
"\n Capricorn couple. \n"
"\n->> The two signs do not harbor a very similar position of the planets, resulting in a lot of discord.\n");

			break;
		}
		case 11:
		{
			printf("\n->> When an Aquarian and Aquarian form a relationship, it's a natural and exciting bond that's founded"
"\n on mutual freedom.\n"
"\n->> Both have trouble fitting the usual romantic relationship stereotypes and rarely care about the taboos,"
"\n restrictions, and rules.\n"
"\n->> Live and let live is this couple's motto.\n");

			break;
		}
		case 12:
		{
			printf("\n->>At first these two may feel attracted to one another’s fascinating ideas, but ultimately Pisces will turn out"
"\n to be far too needy and demanding for freedom-loving, light-hearted Aquarius.\n"
"\n->> It is not a good match.\n");

			break;
		}
		default:
		{
                        printf("\nINVALID CHOICE");
			exit(0);
			break;
		}
	}
}
pis(int lc)
{
	switch(lc)
	{
		case 1:
		{
			printf("\n->> Aries likes to be in the mix, while Pisces find being around lots of people to be an energy-sapping downer.\n"
"\n->> If Aries can soften their edges and Pisces provides enough excitement, this pair has a lot to offer each other.\n"
"\n->> Keep in mind that these two signs are neighbors on the Zodiac.\n");

			break;
		}
		case 2:
		{
			printf("\n->>      Harmonious Pairing\n"
"\n->> This pairing can be quite harmonious.\n"
"\n->> Both signs can be very relaxed.\n"
"\n->> Taurus appreciates the tenderness found in Pisces, while Pisces loves the stability and security Taurus can provide.\n"
"\n->> This is a romance that only gets better with time and familiarity.\n");

			break;
		}
		case 3:
		{
			printf("\n->> When Gemini and Pisces get together, they are believed to make a compassionate couple.\n" 
"\n->> A Gemini is intellectual, smart, and silver-tongued and has a very good sense of humor.\n"
"\n->> They are also good motivators and can help dreamy Pisces achieve whatever they desire. \n"
"\n->> Pisces, on the hand, empathize very well with people and are able to connect almost immediately with people. \n");

			break;
		}
		case 4:
		{
			printf("\n->>The emotions of both of these signs run deep." 
"\n Not every zodiac sign is up to the task of weathering the crying jags and pouting sessions,"
"\nCancer is known to give at the drop of a hat. That's not to say that Cancer is fickle.");

			break;
		}
		case 5:
		{
			printf("\n->> A compatible relationship, between Leo and Pisces, need a lot of compromises and attention because of the"
"\n zodiac love match between these signs very uneven.\n"
"\n->> Leo with Pisces can become demanding in a way that can irritate the Pisces partner.\n"
"\n->> Leo needs adoration and attention from their partner, Pisces lives in their world and are rather oblivious"
"\n to this need from their partners.\n"
"\n->> Moreover, the passionate nature of Leo can also affect the compatibility of the relationship as it can often"
"\n intimidate Pisces, making them second guess the relationship.\n");

			break;
		}
		case 6:
		{
			printf("\n->> This is a pairing that can literally go either way. On one hand, Virgo’s practical approach to life can help"
"\n give dreamy Pisces a sense of stability.\n" 
"\n->>Pisces’s imagination can add a whole new dimension to Virgo’s world that they’d never imagined was possibly before.\n");

			break;
		}
		case 7:
		{
			printf("\n->> There is an incredibly sentimental and unstable connection of two souls in a Libra and Pisces relationship.\n" 
"\n->>Both signs are very romantic, but they tend to have a sense of escapism preceding their leading archetypes.\n"
"\n->>Pisces holds the dominant traits of a dreamer while Libra holds the leading traits of an idealist, making them seek for"
"\n a better future and life as they forget about what they have at present.\n"
"\n->>Libra and Pisces partners will be loving and affectionate together; they will have a strong connection that is built on"
"\n flowery prose and romantic dinners.\n");

			break;
		}
		case 8:
		{
			printf("\n->> Although these two are quite different when it comes to quite a few fundamentals, their differences"
"\n compliment one another instead of making waves. Dreamy Pisces is all too willing to allow Scorpio to take the"
"\n lead and, in fact, actually feels more loved and valued as a result of Scorpio’s possessiveness.\n"
"\n->> Scorpio is most compatible with Pisces because their need for occasional solitude is often mistaken as being unfaithful,"
"\n but not by Pisces.\n"
"\n->> Pisces accepts the mysterious and quiet nature of Scorpio, in which they can relax and indulge in their fantasy.\n");

			break;
		}
		case 9:
		{
			printf("\n->> Sagittarius is all about looking for new and great opportunities.\n"
"\n->> They want something to ignite them and keep them going in life.\n"
"\n->> Pisces is a more sensitive sign. it not a good match.\n");

			break;
		}
		case 10:
		{
			printf("\n->> Just like two pieces of a jigsaw puzzle that fit perfectly well together, Pisces and Capricorn in a relationship"
"\n are absolute goals!\n"
"\n->> Just like any relationship, this zodiac love match too is susceptible to minor disagreements, but these soon vanish in favor"
"\n of the great love that these two people harbor for each other. \n"
"\n->> In addition to that, the zodiac elements of earth and water provide very good support to each other in the form of these signs.\n");

			break;
		}
		case 11:
		{
			printf("\n->>At first these two may feel attracted to one another’s fascinating ideas, but ultimately Pisces will turn out"
"\n to be far too needy and demanding for freedom-loving, light-hearted Aquarius.\n"
"\n->> It is not a good match.\n");

			break;
		}
		case 12:
		{
			printf("\n->> One of the reasons why Pisces compatible signs have a more stable emotional nature is because Pisces needs"
"\n to have some emotional security in their life. \n"
"\n->> Without this emotional security, they might become toxic partners, and in this case, the toxicity multiplies.\n");

			break;
		}
		default:
		{
            printf("\nINVALID CHOICE");
			exit(0);
			break;
		}
	}
}

