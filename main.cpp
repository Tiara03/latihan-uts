#include <iostream>
#define MAX 28

using namespace std;

char message[MAX] = {'H', 'A', '*', '*', '*', 'L', '*', 'O', 'A', 'P', '*', '*', '*', 'A', '*', 'K', 'A', 'B', '*', 'A', 'R'};
char alfabet[MAX];
int top;

int IsEmpty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}

int IsFull()
{
    if(top == MAX-1)
        return 1;
    else
        return 0;
}

void push(int i)
{
    if(IsFull() == 0){
        top++;
        alfabet[top] = message[i];
    }
    else
         cout << "stack sudah penuh";
}


int main()
{
    int j = sizeof(message)/sizeof(char);
    for(int i = 0; i<j; i++){
        if(message[i] != '*'){
            push(i);
        }
    }
    int jumlah = sizeof(message)/sizeof(char);
    for(int k = 0; k<jumlah; k++){
        cout << alfabet[k];
    }
return 0;
}
