#include <iostream>
using namespace std;

int matrix[5][5];

void printMatrix(int vertices){
    for(int i=0;i<vertices;i++){
        for (int j=0;j<vertices;j++){
            cout<<matrix[i][j]<<"  ";

        }

        cout<<endl;
       

    }
}
void edges(int v1,int v2){
    matrix[v1][v2]=1;
    matrix[v2][v1]=1;

}
int main(){
    
   
    int vertices=5;
   
    edges(0, 1);
   edges(1, 2);
   edges(2, 3);
   edges(2, 0);
   
    printMatrix(vertices);
}