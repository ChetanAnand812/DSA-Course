#include<iostream>
#include<string>
using namespace std;

void replaceSpaces(char sentance[]){
    
    int n = strlen(sentance);
    for(int i =0; i<n; i++){
        if(sentance[i] == ' '){
            sentance[i] = '@';
        }
    }
}

int main(){
    char sentence[100];
    cout<<"Enter Sentence: "<<endl;
    cin.getline(sentence, 100);

    replaceSpaces(sentence);
    cout<<"Printing Sentence: "<< sentence<<endl;
    return 0;
}


// TC -- O(n)