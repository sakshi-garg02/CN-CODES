#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    int nf, N;
    int no_tr =0;
    srand(time(NULL));
    cout<<"enter the no of frames";
    cin>>nf; 

    cout<<"enter the window size";
    cin>>N; 

    int i =0;
    while(i<=nf)
    {
        int x=0;
        for(int j=i; j<i+N && j<=nf ; j++)
        {
            cout<<"Set frame"<<j<<endl;
            no_tr++;
        }
        for(int j =i ; j<i+N && j<=nf ; j++)
        {
            int flag = rand()%2;

            if(!flag)
            {
                cout<<"ack for frame"<<j<<endl;
                x++;    
            }

            else{
                cout<<"frame"<<j<<"not received"<<endl;
                cout<<"retransmitting window"<<endl;
                break;
            }

        }
        i+=x;
    }
    cout<<"total no of transmission"<<no_tr;
    return 0;

}