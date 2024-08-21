#include<iostream>
using namespace std;


void input(int arr[][100],int r,int c){
        for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>arr[i][j];
        }
    }
}
int main(){
    int r1,c1,r2,c2;
       cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    int arr1[r1][100];
    int arr2[r2][100];

    int arr3[r1][100]={0};

    cout<<"Input first matrix: "<<endl;
    input(arr1, r1, c1);

    cout<<"Input second matrix: "<<endl;
    input(arr2, r2, c2);

    for(int i=0;i<r1;i++){ //i is deciding row no. of first matrix;

        for(int j=0;j<c2;j++){ //j is deciding column no. second matrix;

            for(int k=0;k<c1;k++){
                 arr3[i][j] += arr1[i][k] * arr2[k][j];
            }

        }

    }


cout<<"result matrix: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<arr3[i][j]<<" ";

        }

        cout<<endl;
    }

    
}