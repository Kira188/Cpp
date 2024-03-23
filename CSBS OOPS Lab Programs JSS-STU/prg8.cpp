#include<iostream>
using namespace std;
class MATRIX{
    private:int rows, cols;
    int** data;//remember to use 2 pointer as we are dereferencing twice
    public: 
        MATRIX(int r, int c):rows(r),cols(c){
        data=new int*[rows];//create a n-rows pointer integer variable 
        //which where 1 will point to n column values
        for(int i=0;i<r;++i){
            //point each pointer integer value to n column values
            data[i]=new int[cols];
        }
    }
    
    MATRIX operator+(MATRIX & m1){
        MATRIX m2(rows,cols);
        for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            m2.data[i][j]=this->data[i][j]+m1.data[i][j];
        }
    }
    return m2;
    }
     MATRIX operator-(MATRIX & m1) {
        MATRIX m2(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                m2.data[i][j] = this->data[i][j] - m1.data[i][j]; // Corrected this line
            }
        }
        return m2;
    }
    bool operator==(MATRIX & m1) {
        
        return ((this->rows==m1.rows)&&(this->cols==m1.cols));
    }
    friend void get_data(MATRIX & m1);
    friend ostream & operator<<(ostream & os,MATRIX & m1);
};
ostream & operator<<(ostream & os,MATRIX & m1){
    os<<"Matrix output"<<endl;
    for(int i=0;i<m1.rows;i++){
        for(int j=0;j<m1.cols;j++){
            
            os<<m1.data[i][j]<<"\t";
        }
        os<<"\n";
        }
        return os;
}
void get_data(MATRIX & m1){
    cout<<"Enter for matrix"<<endl;
        for(int i=0;i<m1.rows;i++){
        for(int j=0;j<m1.cols;j++){
            cout<<"Enter for row:"<<i<<"cols:"<<j<<endl;
            cin>>m1.data[i][j];
        }
        }
}

int main(){
    int row, col;
    cout << "Enter rows and columns: ";
    cin >> row >> col;
    MATRIX m1(row, col), m2(3, col);
    get_data(m1);
    get_data(m2);
    if(m1==m2)
    {MATRIX m3 = m1 + m2;
    MATRIX m4 = m1 - m2;
    cout << m3;
    cout << m4;
    }
    else cout<<"Error";
    
    return 0;
}