#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int solution(char c[]){
    for (int i = 0; i < strlen(c); i++){
        if(!isupper(c[i]))
            return 0;
    }
    return 1;
}
int main() {
    char str[1000];
    cin.getline(str, 1000);

    char *ptr;
    ptr = strtok(str, " , ");
    
    while (ptr != NULL){
        if (solution(ptr) == 1)
            cout << ptr << " ";
        ptr = strtok(NULL, " ,");
    }
}
