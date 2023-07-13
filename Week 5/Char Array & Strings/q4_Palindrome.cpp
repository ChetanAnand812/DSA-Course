#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(char word[]){
    
    int n = strlen(word);
    int i = 0;
    int j = n-1;

    while(i <= j){
        if(word[i] != word[j]){
            return false;
        }
        else{
            i++; 
            j--;
        }
    }
    return true; 
}

int main(){
    char word[100];
    cout<<"Enter Word: "<<endl;
    cin.getline(word, 100);

    
    cout<<"Palandrome Check: "<< checkPalindrome(word) <<endl;
    return 0;
}


// TC -- O(n)

// eg1- input: noon, output: noon; eg2- input:kadak, output:kadak