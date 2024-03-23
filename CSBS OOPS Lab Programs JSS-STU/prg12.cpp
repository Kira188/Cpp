#include<iostream>
using namespace std;
class PUBLICATION{
    private:
    string title;
    public:
    PUBLICATION(string t):title(t){}
    void print(){
        cout<<"Title"<<title<<" "<<endl;

    }
};
class BOOK:public PUBLICATION{
    private:
    float accession_number;
    public:
    BOOK(string ti,float ac):PUBLICATION(ti),accession_number(ac){
    }
    void print(){
        PUBLICATION::print();
        cout<<"Accession Number: "<<accession_number<<" "<<endl;
    }
};
class MAGAZINE:public PUBLICATION{
    private:
    int vol_nu;
    public:
    MAGAZINE(string ti,int vnu):PUBLICATION(ti),vol_nu(vnu){}
    void print(){
        PUBLICATION::print();
        cout<<"Volume Numeber: "<<vol_nu<<" "<<endl;
    }
};
class JOURNAL:public BOOK,public MAGAZINE{
    private:
    public:
    JOURNAL(string ti,float ac,int vnu):MAGAZINE(ti,vnu),BOOK(ti,ac){}
    void print(){
        BOOK::print();
        MAGAZINE::print();
    }
};
int main(){
    JOURNAL IEE("IEEEOOP",681.3,1);
    IEE.print();
}

