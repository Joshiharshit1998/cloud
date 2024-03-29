#include <bits/stdc++.h>

using namespace std;

const char DataArray[10][5] = {"", "", "ABC", "DEF", "GHI", "JKL","MNO", "PQRS", "TUV", "WXYZ"};
 
//recursion to print all possible 
void  Recursion(int string[], int current_length, char output[], int string_length)
{
    int i;
    if (current_length == string_length)
    {
        cout<<output<<",";
        return;
    }
    //loop for all charcters according to given digits
    for (i=0; i<strlen(DataArray[string[current_length]]); i++)
    {
        output[current_length] = DataArray[string[current_length]][i];
        Recursion(string, current_length+1, output, string_length);
        //If 0 or 1 comes return from there
        if(string[current_length] == 0 || string[current_length] == 1)
        {
            return;
        }
    }
}
//call recurstion in this function
void PrintStrings(int string[], int string_length)
{
    char output[string_length+1];
    output[string_length] ='\0';
    Recursion(string, 0, output, string_length);
}
 
//Driver program
int main(void)
{
    int string[] = {2, 3, 4};
    int string_length = sizeof(string)/sizeof(string[0]);
    PrintStrings(string, string_length);
    return 0;
}
