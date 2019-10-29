
// AUTHOR:         Anamol Acharya
// FILENAME:       Lab2.cpp
// SPECIFICATION:  Stack ADS for Characters, using ARRAYS and basic operations such as PUSH, POP, and PEEK, isEMPTY( ), and an isFULL( ) functions.
// FOR:            CS 2413 Data Structure 002


#include <iostream>
#include <stdlib.h>
using namespace std;
#define maximum 50                                              //The maximum number that the stack can hold

char stack[maximum];                                            //assign the maximum value for stack
int top = -1;                                                   //assign top variable
int n = maximum;                                                //assign n variable to maximum 
void push(char stack[],char value);
char pop(char stack[]);
char peek(char stack[]);
void display(char stack[]);
char isempty();
char isfull();

int main(int argc, char **argv)                                 //main function
{
    char value;                                                 //call value variable 
    int option;
do {
    cout << endl;
cout << "STACK ADS for Characters, using ARRAYS!" << endl;
cout << endl;
    cout << " *****WELCOME*****" << endl;                       //displays on the screen 
cout << " 1. PUSH"    << endl;
cout << " 2. POP"     << endl;
cout << " 3. PEEK"    << endl;
cout << " 4. DISPLAY" << endl;
cout << " 5. EMPTY"   << endl;
cout << " 6. FULL"  << endl;
cout << " 7. EXIT"    << endl;
 
cout << " Enter your option: " ;
cin  >> option ;
switch(option)  {  
case 1: cout << endl;
                cout <<" Enter the character to be pushed on stack: " ;
cin  >> value ;
push(stack, value);
cout << endl;
break;
case 2: value = pop(stack);
if(value != -1)  
cout << endl;
                    cout << " The value deleted from stack is: " << value ;
cout << endl;
break;
case 3: value = peek(stack);
if(value != -1)
cout << endl;
                    cout <<" The value stored at top of stack is: " << value ;
cout << endl;
break;
case 4: display(stack);
cout << endl;
break;
        case 5:{
               if(isempty())                                      //check if the stack is empty 
                   {cout << "Stack is Empty" << endl;}
               else
                   {cout << "Stack is NOT Empty" << endl;}
               break;  
               }
           case 6:{
                   if(isfull())
                       {cout << "Stack is Full" << endl;}
                   else
                       {cout << "Stack is Not Full" << endl;}  
                   break;
                  }  
}
}while(option != 7);
return 0;
 }
 
void push(char stack[],char value)                          //intro push function
{ if(top == maximum-1)                                      //check if the stackis full or not 
{  cout<< endl  <<"STACK OVERFLOW" << endl; }
 else
{  top++;
  stack[top] = value;
}
}
   
char pop(char stack[])                                      // introduce pop function 
{ char value;                                                      
if(top == -1)                                               //check if the stack is empty or not
  {  cout << endl << " STACK UNDERFLOW" << endl ;
     return -1;
  }
else
  { value = stack[top];
             top--;
             return value;
           }
}

char peek(char stack[])                                     //introduce peek function 
{ if(top == -1)
{  cout << endl << " STACK IS EMPTY" << endl;               //check if stack is empty or not 
return -1; }
 else return (stack[top]);
    }

void display(char stack[])                                  //introduce display function 
{ int i;
 if(top == -1)
          cout << endl <<" STACK IS EMPTY" << endl ;
 else {  
for(i=top; i>=0; i--)  
cout << endl  <<"    " << stack[i] << endl  ;
}
cout << " ----------- " << endl;
}

char isempty()                                                    // empty function
{
   if(top<=-1)
       {return 1;}                                              //check if stack is empty
   return 0;
}  
char isfull()                                                     // full function
{
   if(top>=n-1)
       {return 1;}                                              //check if stack is full
   return 0;  
}