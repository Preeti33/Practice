/*
iRow 4
iCol 4
* * * *
* * * *
* * * *
* * * *
*/

class Patter
{
    private:
        int iRow, 
        int iCol;
    public:
        Patter(int a, int b);
        {
            this->iRow = a; 
            this->iCol = b;
        }
    
        void DisplayPattern()
        {   
            int i = 0; 
            int j = 0;
            for(i=1; j<=iCol; j++)
            {
                Cout<<"*"<<"\t";
            }
            Cout<<endl;
        }
};

int main()
{
    Patter obj(4,4);
    obj.DisplayPattern();

    return 0;
}