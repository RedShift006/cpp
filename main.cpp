#include <iostream>
#include <vector>
#include <string>

using namespace std;

// int main() {

//     vector<double> example;

//     for (int i = 0; i < 5; i++) {
//         example.push_back(i*5.231);
//     }

//     for (int i = 0; i < example.size(); i++) {
//         cout << example[i] << endl;
//     }

//     return 0;
// }

vector<double> sense(vector<double> p, vector<string> world, string Z, double pHit, double pMiss);
vector<double> move(vector<double> p, int U, double pExact, double pOvershoot, double pUndershoot);

void print_probability(vector<double> p);


//我考虑返回值应是一个列表 p，但不知道如何写
int main() 
{
    vector<double> p(5, 0.2);
    // for (int i = 0; i < p.size(); i++)
    // {
    //     /* code */
    //     cout << p[i] << endl;
    // }
    vector<string> world(5);
    world[0] = "green";
    world[1] = "red";
    world[2] = "red";
    world[3] = "green";
    world[4] = "green";
    // for (int i = 0; i < world.size(); i++)
    // {
    //     cout << world[i] << endl;
    // }
    
    vector<string> measurements(2);
    measurements[0] = "red";
    measurements[1] = "green";
    // for (int i = 0; i < measurements.size(); i++)
    // {
    //     cout << measurements[i] << endl;
    // }

    vector<int> motions(2,1);

    float pHit = 0.6;
    float pMiss = 0.2;
    float pExact = 0.8
    float pOvershoot = 0.1
    float pUndershoot = 0.1



    return 0;
}

vector<double> sense(vector<double> p, vector<string> world, string Z, double pHit, double pMiss)
{
    vector<double> q (p.size());
    bool hit = false;
    for (int i = 0; i < p.size(); i++)
    {
        /* code */
        if(Z == world[i])
        {
            hit = true
        }
        q.push_back(p[i]*(hit * pHit + (1-hit) * pMiss))
    }
    double sum;

    for (int i = 0; i < q.size(); i++)
    {
        sum += q[i]
    }

    for (int i = 0; i < q.size(); i++)
    {
        q[i] = q[i]/sum
    }
    
    return q;
     
}

vector<double> move(vector<double> p, int U, double pExact, double pOvershoot, double pUndershoot)
{
    vector<double> q;
    for (int i = 0; i < p.size(); i++)
    {
        double s;
        s = pExact * p[(i-U) % len(p)]
        s = s + pOvershoot * p[(i-U-1) % p.size()]
        s = s + pUndershoot * p[(i-U+1)% p.size()]
        q.push_back(s)
    }
    
    return q;
}

void print_probability(vector<double> p)
{
    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
    
}