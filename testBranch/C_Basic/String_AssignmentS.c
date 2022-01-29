#include <stdio.h>
#include <string.h>
/* UserSnippetBy ZAMAN SHEIKH v0.1
Special Notes By ZaMaN ShEiKH*/
int main()
{
    printf("\n");
    system("cls");
    /* Notes About: string declaration
    char strngName[]={'Z','A','M','A','N','\0'}
    '\0' represents the end of the string.
    char strngName[]="ZAMAN";
    In the above declaration NULL character 
    (\0) will automatically be inserted at the end of the string. 
    String I/O in C programming:-
    string Print prinf("%s", strngName);
    or puts(strngName);
    StringInput: scanf("%s",&strngName);
    gets(strngName); */
   
   /* char ZMN[30];

    //Console display using puts 
    puts("Enter your Nick name:");

    //Input using gets
    gets(ZMN);

    printf("Length of string named ZMN: %d\n", strlen(ZMN));
    printf("Size of string named ZMN: %d\n", sizeof(ZMN));
    printf("LowerCase of string named ZMN: %d\n", strlwr(ZMN));
    printf("UpperCase of string named ZMN: %d\n", strupr(ZMN)); */

    char ZMN1[11] = "Hey ";
    char ZMN2[10] = "ZaMaN";
    strcat(ZMN1, ZMN2);
    printf("Output string after concatenation: %s \n", ZMN1);
    printf("Size of string named ZMN1: %d\n", sizeof(ZMN1));

    char s1[10] = "Hi ";
    char s2[10] = "ZaMaN_SheiKH";
    strncat(s1,s2, 6); //6 means how much number of 
    //string will be printf 
    printf("Concatenation using strncat: %s \n", s1);


    char ss1[30] = "Amar sonar Bangla";
    printf("String s1 is: %s\n", ss1);
    char ss2[30] = "Ami tomay valobashi";
    //this function has copied ss2 into s1
    strcpy(ss1,as);
    printf("String s1 is: %s\n", ss1);

    //Example of strncpy:
    char first[30] = "string 1";
    char second[30] = "string 2: I’m using strncpy now";
    /* this function has copied first 10 chars of s2 into s1*/
    strncpy(first,second, 12);
    printf("String first is: %s\n", first);

    //Example of strcmp: Strings Compere

    char sx1[20] = "BeginnersBooL";
    char sx2[20] = "BeginnersBook";//ans will be else
    char sx3[20] = "BeginnersBook.com";//strncmp means judge to n number from begaining
        if (strcmp(sx1, sx2) ==0)
        {
            printf("string 1 and string 2 are equal\n");
        }
        else
        {   
            printf("string 1 and 2 are different\n");
        }
        if (strncmp(sx2, sx3, 12) ==0)
        {
            printf("string 2 and string 3 are equal to num of 12\n");
        }
        else
        {   
            printf("string 2 and 3 are different\n");
        }

        //only difference is that strcmpi() function is not case sensitive
        if (strcmpi(sx1, sx2) ==0)
        {
            printf("string 1 and string 2 are equal\n");
        }
        else
        {   
            printf("string 1 and 2 are different\n");
        }
        //Quetions
    /* #include <stdio.h>
    #include <string.h>
  
    int main( )
    { */
        char str1[ ] = "geeks" ;
        char str2[ ] = "ForGeeks" ;
  
        int i = strcmpi ( str1, str2 ) ;
  
        printf ( "The function returns = %d", i ) ;
        /* return 0;
    }
    Output:

    The function returns = 1

    printf("hello World");


    #include <stdio.h>
    #include <string.h>
    int main(void)
    { */
    // Compare two strings as lowercase                              */
        if (0 == stricmp("hello", "HELLO"))
            printf("The strings are equivalent.\n");
        else
            printf("The strings are not equivalent.\n");
    

        if (0 == strnicmp("hello", "HELLO"))
            printf("The strings are equivalent.\n");
        else
            printf("The strings are not equivalent.\n");
    /* return 0;
    }
    Example that uses strnicmp()

    This example uses strnicmp to compare two strings.

    #include <stdio.h>
    #include <string.h>
    int main(void)
    { */
    char *str12 = "THIS IS THE FIRST STRING";
    char *str22 = "This is the second string";
    int numresult;
    // Compare the first 11 characters of str12 and str22
        //without regard to case */
    numresult = strnicmp(str12, str22, 11);
     if (numresult < 0)
      printf("String 1 is less than string2.\n");
     else
        if (numresult > 0)
         printf("String 1 is greater than string2.\n");
        else
             printf("The two strings are equivalent.\n");
     /* return 0;
    }



     C program to demonstrate strdup()
    #include<stdio.h>
    #include<string.h>
 
    int main()
    { */
    char source[] = "GeeksForGeeks";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source);
 
    printf("%s", target);
    /* return 0;
    }
    //Output: 

    //GeeksForGeeks



    // C program to demonstrate strndup()
    #include<stdio.h>
    #include<string.h>
 
    int main()
    { */
        char source0[] = "GeeksForGeeks";
 
    // 5 bytes of source0 are copied to a new memory
    // allocated dynamically and pointer to copied
    // memory is returned.
        char* target0 = strndup(source0, 5);
 
        printf("%s", target0);
        /* return 0;
    }
    //Output:

    //Geeks


    // C code to demonstrate the working of
    // strrchr()

    #include <stdio.h>
    #include <string.h>

    // Driver function
    int main()
    { */

	    // initializing variables
	    char st[] = "GeeksforGeeks";
	    char ch = 'e';
	    char* val;

	    // Use of strrchr()
	    // returns "ks"
	    val = strrchr(st, ch);

	    printf("String after last %c is : %s \n", ch, val);

	    char ch2 = 'm';

	    // Use of strrchr()
	    // returns null
	    // test for null
	    val = strrchr(st, ch2);

	    printf("String after last %c is : %s ", ch2, val);

	   /*  return (0);
    }
    Output: 
 

    String after last e is :  eks 
    String after last m is :  (null)    





    // C code to demonstrate the application of
    // strrchr()

    #include <stdio.h>
    #include <string.h>

    // Driver function
    int main()
    { */

	    // initializing the denomination
	    char denom[] = "Rs 10000000";

	    // Printing original string
	    printf("The original string is : %s", denom);

	    // initializing the initial number
	    char first1 = '1';
	    char* entire1;

	    // Use of strrchr()
	    // returns entire1 number
	    entire1 = strrchr(denom, first1);

	    printf("\nThe denomination value is : %s ", entire1);

	    /* return (0);
    }


    //Output: 
 

   //he original string is : Rs 10000000
    //The denomination value is : 10000000





    //strstr */
        const char haystack[20] = "TutorialsPoint";
        const char needle[10] = "Point";
        char *ret;
        ret = strstr(haystack, needle);
        printf("The substring is: %s\n", ret);
    
    //strset
        char str0[20] = "Test String";
        printf("Original string is : %s", str0);
        printf("Test string after strset() : %s",strset(str0,'#'));
        printf("After string set: %s",str0);
    
    //strnset
    
        char str00[] = "GeeksforGeeks";
        printf("Original String: %s\n", str00);
        // First 5 character of string str
        // replaced by character '*'
        printf("Modified String: %s\n", strnset(str00, '*', 5));
    
        //strrev
        char str[50] = "geeksforgeeks";
  
        printf("The given string is =%s\n",str);
        printf("After reversing string is =%s",strrev(str));
    
        printf("\n");


        printf("\n");
    return 0;
}