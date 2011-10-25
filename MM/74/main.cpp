#include <iostream>
#include <vector>

using namespace std;

class AntiTravelingSalesperson
{
    public:
        vector<int> placeLocations(int N, vector<int> X, vector<int> Y)
        {
            vector<int> ret(N*2, 0);
            return ret;
        }
};

int main()
{
    int n, x, y, t;
    vector<int> X, Y;
    cin>>n;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>t;
        X.push_back(t);
    }
    cin>>y;
    for(int i=0;i<y;i++)
    {
        cin>>t;
        Y.push_back(t);
    }
    AntiTravelingSalesperson atsp;
    vector<int> ret = atsp.placeLocations(n, X, Y);
    cout<<ret.size()<<endl;
    for(int i=0;i<ret.size();i++)
    {
        cout<<ret[i]<<endl;
    }
    return 0;
}

