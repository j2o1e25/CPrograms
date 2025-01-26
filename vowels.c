#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[])
{
// 9. Count Vowels in a String
// Write the algorithm, pseudocode, and flowchart to count the number of vowels in a given string input by the user.
    char word[100];
    printf("Enter string:");
    scanf("%[^\n]",word); 
    

    int count_vowels=0;
    for(int i=0;i<strlen(word);i++)
    {
        if(word[i] =='a' || word[i] =='e'|| word[i] =='i' || word[i] =='o'|| word[i] =='u' || word[i] =='A' || word[i] =='E' || word[i] =='I'|| word[i] =='O' || word[i] =='U')
        {
            count_vowels++;
        }
        
    }
    printf("No of VOWELS in %s is %d",word,count_vowels);
    return 0;
}

