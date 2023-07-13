#include<iostream>
#include<string>
using namespace std;

void convertUppercase(char word[]){
    
    int n = strlen(word);
    for(int i=0; i<n; i++){
        word[i] = word[i] - 'a' + 'A';
    }
    
}

int main(){
    char word[100];
    cout<<"Enter Word: "<<endl;
    cin.getline(word, 100);

    convertUppercase(word);
    cout<< word<<endl;
    return 0;
}

// TC -- O(n)
// SC -- O(n)