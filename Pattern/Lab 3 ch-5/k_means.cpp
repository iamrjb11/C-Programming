//K_Means Algorithm
#include <bits/stdc++.h>
//include<iostream>
using namespace std;

int main()
{
    int num_s, k;
    cout << "Enter number of samples and class:" << endl;
    cin >> num_s >> k;

    float sample[num_s][2], centroid[k][2];
    int clas[k][num_s];

    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < num_s; j++)
        {
            clas[i][j] = -1;
        }
    }

    cout << "Enter the features of each sample:" << endl;

    for(int i = 0; i < num_s; i++)
    {
        cin >> sample[i][0];
        cin >> sample[i][1];

        if(k > i)
        {
            centroid[i][0] = sample[i][0];
            centroid[i][1] = sample[i][1];
            clas[i][i] = 0;
        }
        else
        {
            float min_v = INT_MAX;
            int si = -1;
            for(int j = 0; j < k; j++)
            {
                float dist = sqrt(pow((sample[i][0]- centroid[j][0]), 2) + pow((sample[i][1]- centroid[j][1]), 2));

                if(min_v > dist)
                {
                    min_v = dist;
                    si = j;
                }
            }
            clas[si][i] = 0;

            // update the centroid
            int c = 0;
            centroid[si][0] = 0.0f;
            centroid[si][1] = 0.0f;
            for(int j = 0; j < num_s; j++)
            {
                if(clas[si][j] == 0)
                {
                    c++;
                    centroid[si][0] += sample[j][0];
                    centroid[si][1] += sample[j][1];
                }
            }
            centroid[si][0] /= (float)c;
            centroid[si][1] /= (float)c;
        }
    }

    cout << "centroid:" << endl;
    for(int i = 0; i < k; i++)
    {
        cout << "(" << centroid[i][0] << " , " << centroid[i][1] << ")" << endl;
    }

    // calculate the distance
    cout << "distance:" << endl;
    for(int i = 0; i < num_s; i++)
    {
        float min_v = INT_MAX;
        int si = -1;
        for(int j = 0; j < k; j++)
        {
            float dist = sqrt(pow((sample[i][0]- centroid[j][0]), 2) + pow((sample[i][1]- centroid[j][1]), 2));
            cout << "\t" << dist;

            if(min_v > dist)
            {
                min_v = dist;
                si = j;
            }
        }
        cout << endl;
        clas[si][i] = 1;
    }

    // print the result
    cout << endl << endl << "Class:" << endl;

    for(int i = 0; i < k; i++)
    {
        cout << "{";
        for(int j = 0; j < num_s; j++)
        {
            if(clas[i][j] == 1)
                cout << (j+1) << ", ";
        }
        cout << "\b\b}, ";
    }

    cout << endl << endl;

    return 0;
}
